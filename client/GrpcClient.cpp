//
// Created by codc on 11/20/22.
//

#include "GrpcClient.h"

GrpcClient::GrpcClient(string serveruri) {
    // create channel
    auto channel = CreateChannel (serveruri, InsecureChannelCredentials());
    // creat stub
    this->helloStub =  Greeter::NewStub(channel);
}

void GrpcClient::sendRequest(string msg) {

    ClientContext clientContext;
    HelloRequest helloRequest;
    HelloResponse helloResponse;

    // build request
    helloRequest.set_myname(msg);

    // Using stub to perform a remote procedure call, e.g. sending request
    // Using stub to execute the function, SayHello(), which is implemented on server
    Status status = helloStub->SayHello(&clientContext, helloRequest, &helloResponse);

    HandleResponse handleResponse;

    if (status.ok()) {
        cout << " RPC SUCCESS " << endl;
        // handle response
        handleResponse.handleRes(&helloResponse);
    } else {
        // rpc failed
        cout << "Remote procedure call FAIL" << endl;
    }
}