#pragma once
#include "elevator_selection_strategy.hpp"

class ZoneElevatorSelStrategy : public ElevatorSelectionStrategy {
    public:
        int selectElevator(ExternalRequest* extReq) {
            //For demo purposes, always returning elevator id 3
            cout<<"Selecting elevator according to zone strategy and returning elevator id 3"<<endl;
            return 3; 
        }
};