#pragma once
#include "common.hpp"

class Display {
    string id;
    public:
        virtual void showDisplay(int floorNum, ELEVATOR_DIRECTION direction) = 0;
};