//
// Created by codc on 11/20/22.
//

#include "GrpcClient.h"
#include "../service/HandleResponse.h"

void GrpcClient::sendRequest(string serveruri) {

    // create channel
    auto channel = CreateChannel (serveruri, InsecureChannelCredentials());

    // creat stub

    auto stub = Greeter::NewStub(channel);

    ClientContext clientContext;
    HelloRequest helloRequest;
    HelloResponse helloResponse;

    // build request
    helloRequest.set_myname("hello");

    // Using stub to perform a remote procedure call, e.g. sending request
    // Using stub to execute the function, SayHello(), which is implemented on server
    Status status = stub->SayHello(&clientContext, helloRequest, &helloResponse);

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