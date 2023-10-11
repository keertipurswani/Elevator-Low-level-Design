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
            //We are just determining the nex stop as when requests come
            //The movement is being taken by hardware. 
            //Controller sees the next stop and tells hardware move to this floor
            int nextStop = controlStrategy->determineNextStop(floorNum);

            if(nextStop > state->getCurrFloor())
                state->setCurrDirection(ELEVATOR_DIRECTION::UP);
            else if(nextStop < state->getCurrFloor())
                state->setCurrDirection(ELEVATOR_DIRECTION::DOWN);
            if(nextStop != state->getCurrFloor())
                state->setCurrStatus(ELEVATOR_STATUS::MOVING);
        }
};