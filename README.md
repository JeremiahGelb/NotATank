# NotATank
It's not a tank

Hey guys this is what I did so far (on ubuntu 16.04 but I think we will switch to raspbian??)

~~1. Install grpc~~

~~https://github.com/grpc/grpc/blob/master/BUILDING.md~~


To get a grpc env working, use docker-compose:
```bash
docker-compose run grpcpp

cd src
```

Here's how to fail to build what I have so far
```bash
>>> get into the docker
>>> go to src directory
>>> go to grpc expiriments diretory
./build.sh
make
./motor_control_server
```



