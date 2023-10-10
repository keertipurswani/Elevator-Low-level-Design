#pragma once
#include "internal_display.hpp"
#include "elevator_controller.hpp"

class Elevator {
        int elevatorId; //can be string
        int capacity;   //Can store variables like speed, door open and close time
        vector<InternalDisplay*> displays;
        ElevatorController* controller;
    public:
        Elevator() {
            controller = new ElevatorController();
        }
        int getElevatorId() {
            return elevatorId;
        } 
        void moveToFloor(int floorNum) {
            controller->moveElevatorToFloor(floorNum);
        }
        void notifyFloorNumUpdate(int floorNum) {
            controller->setCurrFloor(floorNum);
        }
};