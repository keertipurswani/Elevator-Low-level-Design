#pragma once
#include "common.hpp"

class InternalRequest {
        int destFloor;
        int srcElevatorId;

    public:

        InternalRequest(int destFloor, int srcElevatorId) : 
            destFloor(destFloor), srcElevatorId(srcElevatorId) {}
        int getDestFloor() {
            return destFloor;
        }
        void setDestFloor(int pDestFloor) {
            destFloor = pDestFloor;
        }
        int getSrcElevatorId() {
            return srcElevatorId;
        }
        void setSrcElevatorId(int pSrcElevatorId) {
            srcElevatorId = pSrcElevatorId;
        }
};