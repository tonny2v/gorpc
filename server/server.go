//go:generate protoc -I proto/ proto/*.proto --go_out=plugins=grpc:proto

// Package main implements a server for Greeter service.
package main

import (
	"context"
	"fmt"
	"log"
	"net"

	pb "gorpc/proto"

	"google.golang.org/grpc"
)

const (
	port = ":9090"
)

// server is used to implement helloworld.GreeterServer.
type server struct{}

// SayHello implements helloworld.GreeterServer
func (s *server) SayHello(ctx context.Context, in *pb.HelloRequest) (*pb.HelloReply, error) {
	log.Printf("Received: %v", in.Name)
	return &pb.HelloReply{Message: "Hello " + in.Name}, nil
}

// SayHello implements helloworld.GreeterServer
// rpc wrapper
func (s *server) RemoteAdd(ctx context.Context, in *pb.Parameters) (*pb.ResultMsg, error) {
	return &pb.ResultMsg{Result: add(in.Para1, in.Para2)}, nil
}

// original implementation
func add(a, b int32) int32 {
	return a * b
}

func main() {
	lis, err := net.Listen("tcp", port)
	fmt.Println("listening to ", port)
	if err != nil {
		log.Fatalf("failed to listen: %v", err)
	}
	s := grpc.NewServer()
	pb.RegisterGreeterServer(s, &server{})
	if err := s.Serve(lis); err != nil {
		log.Fatalf("failed to serve: %v", err)
	}
}
