#pragma once
#include "elevator.hpp"

class Sensor
{
    int floorNum;
    vector<Elevator *> elevators;

public:
    void detectFloor()
    {
        // Hardware code to sense floor number
        notifyElevators(rand() % 10 +1);
    }
    void addElevator(Elevator *elevator)
    {
        elevators.push_back(elevator);
    }
    void removeElevator(Elevator *elevator)
    {
        for (auto elevatorIterator = elevators.begin(); elevatorIterator != elevators.end(); ++elevatorIterator)
        {
            if (*elevatorIterator == elevator)
            {
                elevators.erase(elevatorIterator);
                break; // Assuming each elevator can be attached only once
            }
        }
    }
    void notifyElevators(int floorNum)
    {
        for (Elevator* elevator : elevators)
        {
            elevator->notifyFloorNumUpdate(floorNum);
        }
    }
};