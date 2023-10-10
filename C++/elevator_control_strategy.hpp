#pragma once
#include "common.hpp"

class ElevatorControlStrategy {
    public:
        virtual int determineNextStop(int floorNum) = 0;
};