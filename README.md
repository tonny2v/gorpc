# It works at Ubuntu
## to make go app work correctly, use go mod
```
# init current go module
go mod init

# install missing go modules
go mod tidy

# make sure GOPATH is correct as $GOPATH/src/go.mod
export GOPATH=$GOPATH:$PWD
```
## to compile cpp correctly:
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
