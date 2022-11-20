//
// Created by codc on 11/20/22.
//

#ifndef GRPC_CPP_CLIENT_SAMPLE_HANDLERESPONSE_H
#define GRPC_CPP_CLIENT_SAMPLE_HANDLERESPONSE_H

#include "../api/helloworld.pb.h"

using namespace helloworld;
using namespace std;

class HandleResponse {
public:

    void handleRes(HelloResponse* helloResponse);

};


#endif //GRPC_CPP_CLIENT_SAMPLE_HANDLERESPONSE_H
