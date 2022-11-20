cmake_minimum_required(VERSION 3.20)
project(grpc_cpp_client_sample)

set(CMAKE_CXX_STANDARD 14)

add_executable(grpc_cpp_client_sample main.cpp client/GrpcClient.cpp client/GrpcClient.h service/HandleResponse.cpp service/HandleResponse.h)
