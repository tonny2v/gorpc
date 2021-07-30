# It works at linux

```
apt install protobuf-compiler protobuf-compiler-grpc libgrpc++ libprotobuf-dev

protoc -I ./proto --cpp_out=./src ./proto/hello.proto

protoc -I ./proto --grpc_out=./src --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./proto/hello.proto

g++ -std=c++11 cpp_client.cpp ./src/*.cc -I/usr/include -I./src -L/usr/lib -lgrpc++ -lprotobuf -lpthread -lgrpc++_reflection

```
## to test it:
```
./a.out
go run client/client.go
```
or 
```
go run server/server.go
go run client/client.go
```

the cpp only implements Greeting SayHello
