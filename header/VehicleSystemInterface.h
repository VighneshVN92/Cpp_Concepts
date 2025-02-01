
#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
class VehicleSystemInterface{
    public:
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual void Work() = 0;
    virtual bool GetStatus() = 0;  
};

#endif // VEHICLE_H