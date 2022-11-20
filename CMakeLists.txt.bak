cmake_minimum_required(VERSION 3.20)
project(grpc_cpp_client_sample)

set(CMAKE_CXX_STANDARD 14)

include_directories(/usr/local/include/google/protobuf)
include_directories(/usr/local/include/grpcpp)

link_directories(/usr/local/lib)
link_directories(/usr/local/lib64)
link_directories(/usr/lib)
link_directories(/usr/lib64)
link_directories(/lib)
link_directories(/lib64)

add_executable(grpc_cpp_client_sample main.cpp client/GrpcClient.cpp client/GrpcClient.h service/HandleResponse.cpp service/HandleResponse.h)

