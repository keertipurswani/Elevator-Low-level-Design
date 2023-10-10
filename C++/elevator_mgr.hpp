#pragma once
#include "elevator.hpp"

class ElevatorMgr {
    ElevatorMgr() {}
    static ElevatorMgr* elevatorMgrInstance;
    unordered_map<int, Elevator*> elevators;

    public:
        static ElevatorMgr* getElevatorMgr();
        Elevator* getElevator(int elevatorId) {
            return elevators[elevatorId];
        } 
        // Can make initialiseElevators method private 
        // And ElevatorSystem as friend class so that 
        // no other class can initialise elevators
        void initialiseElevators(int noOfElevators); 
};  