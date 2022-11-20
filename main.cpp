#include <iostream>
#include "client/GrpcClient.h"

int main(int argc, char *argv[]) {

    GrpcClient grpcClient("0.0.0.0:9906");

    grpcClient.sendRequest("hello");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
