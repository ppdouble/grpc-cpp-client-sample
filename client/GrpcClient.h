//
// Created by codc on 11/20/22.
//

#ifndef GRPC_CPP_CLIENT_SAMPLE_GRPCCLIENT_H
#define GRPC_CPP_CLIENT_SAMPLE_GRPCCLIENT_H

#include <string>
#include "grpcpp/create_channel.h"
#include "../api/helloworld.grpc.pb.h"
#include "../service/HandleResponse.h"


using namespace std;
using namespace grpc;
using namespace helloworld;

class GrpcClient {
private:
    unique_ptr<Greeter::Stub> helloStub;

public:

    GrpcClient(string serveruri);
    void sendRequest(string msg);

};


#endif //GRPC_CPP_CLIENT_SAMPLE_GRPCCLIENT_H
