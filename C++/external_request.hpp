#pragma once
#include "common.hpp"

class ExternalRequest {

    ELEVATOR_DIRECTION directionToGo;
    int srcFloor;

    public:

        ExternalRequest(ELEVATOR_DIRECTION direction, int floor) :
            directionToGo(direction), srcFloor(floor) {}

        ELEVATOR_DIRECTION getDirection() {
            return directionToGo;
        }
        void setDirection(ELEVATOR_DIRECTION direction) {
            directionToGo = direction;
        }
        int getSrcFloor() {
            return srcFloor;
        }
        void setSrcFloor(int floor) {
            srcFloor = floor;
        }
};