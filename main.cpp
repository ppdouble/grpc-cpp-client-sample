#include <iostream>
#include "client/GrpcClient.h"

int main(int argc, char *argv[]) {

    GrpcClient grpcClient;

    grpcClient.sendRequest("0.0.0.0:9906");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
