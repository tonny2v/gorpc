package main

import (
	"context"
	"log"
	"os"
	"time"

	pb "gorpc/proto"

	"google.golang.org/grpc"
)

const (
	address     = "localhost:9090"
	defaultName = "world"
	para1       = 100
	para2       = 20
)

func main() {
	// Set up a connection to the server.
	conn, err := grpc.Dial(address, grpc.WithInsecure())
	if err != nil {
		log.Fatalf("did not connect: %v", err)
	}
	defer conn.Close()
	c := pb.NewGreeterClient(conn)

	// Contact the server and print out its response.
	name := defaultName
	if len(os.Args) > 1 {
		name = os.Args[1]
	}
	ctx, cancel := context.WithTimeout(context.Background(), time.Second)
	defer cancel()
	r, err := c.SayHello(ctx, &pb.HelloRequest{Name: name})
	if err != nil {
		log.Fatalf("could not greet: %v", err)
	}
	log.Printf("Greeting: %s", r.Message)

	r2, err2 := c.RemoteAdd(ctx, &pb.Parameters{Para1: para1, Para2: para2})
	if err2 != nil {
		log.Fatalf("could not greet: %v", err)
	}
	log.Printf("%d adds %d equals to %d", para1, para2, r2.Result)
}
