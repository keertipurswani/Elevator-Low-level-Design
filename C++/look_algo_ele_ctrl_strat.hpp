#include "elevator_control_strategy.hpp"

class LookAlgoElevatorControlStrategy : public ElevatorControlStrategy{
    public:
        int determineNextStop(int floorNum) {
            cout<<"Applying Look Algorithm and Determing next stop to move elevator to floor "<<floorNum<<endl;
            return 1;
        }
};