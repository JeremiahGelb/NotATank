protoc -I . --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./motor_control.proto
protoc -I . --cpp_out=. ./motor_control.proto