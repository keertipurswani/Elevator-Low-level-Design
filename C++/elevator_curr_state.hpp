#pragma once
#include "common.hpp"

class ElevatorCurrState {
    int currFloor;
    ELEVATOR_DIRECTION currDirection;
    ELEVATOR_STATUS currStatus;
    public:
        ElevatorCurrState() {
            currFloor = 0;
            currDirection = ELEVATOR_DIRECTION::IDLE;
            currStatus = ELEVATOR_STATUS::IDLE;
        }
        int getCurrFloor() {
            return currFloor;
        }
        void setCurrFloor(int floorNum) {
            currFloor = floorNum;
        }
        ELEVATOR_DIRECTION getCurrDirection() {
            return currDirection;
        }
        void setCurrDirection(ELEVATOR_DIRECTION direction) {
            currDirection = direction;
        } 
        ELEVATOR_STATUS getCurrStatus() {
            return currStatus;
        }
        void setCurrStatus(ELEVATOR_STATUS status) {
            currStatus = status;
        } 
};