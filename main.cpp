#include <iostream>
#include "client/GrpcClient.h"

int main(int argc, char *argv[]) {

    GrpcClient grpcClient("0.0.0.0:9906");

    grpcClient.sendRequest("nick");

    std::cout << "=== End ===" << std::endl;
    return 0;
}
