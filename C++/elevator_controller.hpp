#pragma once
#include "elevator_curr_state.hpp"
#include "elevator_curr_state.hpp"
#include "fcfs_ele_ctrl_strat.hpp"
#include "look_algo_ele_ctrl_strat.hpp"
#include "scan_algo_ele_ctrl_strat.hpp"
#include "seek_time_ele_ctrl_strat.hpp"

//Controls movement, fan, light, alarm for elevator
class ElevatorController {
        ElevatorCurrState* state;
        ElevatorControlStrategy* controlStrategy;
        int nextStoppingPoint;

    public:
        ElevatorController() {
            state = new ElevatorCurrState();
        }

        void setCurrFloor(int floorNum) {
            //Controller should check if this is stopping point
            //If yes, should stop using stop method
            state->setCurrFloor(floorNum);
        }

        void moveElevatorToFloor(int floorNum) {
            controlStrategy = new FirstComeFirstServeElevatorControlStrategy();
            controlStrategy->determineNextStop(floorNum);

            if(floorNum > state->getCurrFloor())
                state->setCurrDirection(ELEVATOR_DIRECTION::UP);
            else if(floorNum < state->getCurrFloor())
                state->setCurrDirection(ELEVATOR_DIRECTION::DOWN);
            if(floorNum != state->getCurrFloor())
                state->setCurrStatus(ELEVATOR_STATUS::MOVING);
        }
};