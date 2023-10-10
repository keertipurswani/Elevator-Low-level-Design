#pragma once
#include <iostream>

using namespace std;

enum class ELEVATOR_DIRECTION {
	UP,
	DOWN,
    IDLE
};

enum class ELEVATOR_STATUS {
	IDLE,
    MOVING,
    STOPPED,
};
