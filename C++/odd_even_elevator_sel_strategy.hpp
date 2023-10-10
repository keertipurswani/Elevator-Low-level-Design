#pragma once
#include "elevator_selection_strategy.hpp"

class OddEvenElevatorSelStrategy : public ElevatorSelectionStrategy {
    public:
        int selectElevator(ExternalRequest* extReq) {
            //For demo purposes, return elevator id 1 if srcFloor is odd and 2 if it is even
            cout<<"Selecting elevator according to odd even strategy and returning elevator id ";
            if(extReq->getSrcFloor() % 2 == 0) {
                cout<<2<<endl;
                return 2;
            } 
            cout<<1<<endl;
            return 1;
        }
};