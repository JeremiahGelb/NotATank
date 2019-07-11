#include <grpc/grpc.h>
#include <grpc++/server.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>
#include <grpc++/security/server_credentials.h>
//#include "helper.h"
#include "motor_control.grpc.pb.h"
#include <random>
#include <vector>
#include <iostream>

class MotorControlImpl final : public MotorControl::Service {
    public:
        MotorControlImpl(){

        }
        grpc::Status GetCannonInfo(grpc::ServerContext* context, const MotorControlRequest* request,
                                CannonInfo * info) override {

            std::vector<bool> b = {true, false};

            std::random_device rd;
            std::mt19937 engine(rd());
            std::uniform_int_distribution<int> dist(0,b.size() -1);
            std::uniform_real_distribution<> floats(0, 2*3.14159265358979);

            bool loaded = b[dist(engine)];
            float theta = floats(engine);
            float phi = floats(engine);
            std::cout << "Canoninfo Request: " << request << " Response: " <<  loaded << " " << theta << " " << phi;
            info->set_loaded(loaded);
            info->mutable_coords()->set_theta(theta);
            info->mutable_coords()->set_phi(phi);
            return grpc::Status::OK;

        }

        grpc::Status SetCannonPosition(grpc::ServerContext* context, const Coordinates* coords,
                                MotorControlResponse * resp) override {
    
            
            std::cout << "Canon coords request" << coords;
            resp->set_accepted(true);

            return grpc::Status::OK;
            //Do I have to use the mutable thing from tutorial and copyfrom 
            //(see getFeature from routguide)

        }


};

void RunServer() {
  std::string server_address("0.0.0.0:50051");
  MotorControlImpl service;

  grpc::ServerBuilder builder;
  builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
  builder.RegisterService(&service);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  std::cout << "Server listening on " << server_address << std::endl;
  server->Wait();
}

int main(int argc, char** argv) {
  RunServer();

  return 0;
}