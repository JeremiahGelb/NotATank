#include <grpc/grpc.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>
#include <grpcpp/security/server_credentials.h>
#include "helper.h"
#include "examples/protos/motor_control.grpc.pb.h"
#include <random>
#include <vector>

class MotorControlImpl final : public MotorControl:Service {
    grpc::Status GetCannonInfo(grpc::ServerContext* context, const MotorControlRequest* request,
                               CannonInfo * info) override {
        //request variable unused at the moment
        std::vector<bool> b = {true, false};

        std::random_device rd;
        std::mt19937 engine(rd());
        std:uniform_int_distribution<int> dist(0,v.size -1);
        std:uniform_real_distriution<> floats(0, 2*3.14159265358979);

        bool loaded = v[dist(engine)];
        float theta = floats(engine);
        float phi = floats(engine);

        info->set_loaded(loaded);
        info->set_coords(Coordinates(phi,theta)); 
        return grpc::Status::OK;
        //Do I have to use the mutable thing from tutorial and copyfrom 
        //(see getFeature from routguide)

    }

    //now do the other rpc

    grpc::Status
}