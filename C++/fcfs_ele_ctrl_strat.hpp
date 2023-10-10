#include "elevator_control_strategy.hpp"

class FirstComeFirstServeElevatorControlStrategy : public ElevatorControlStrategy{
    public:
        int determineNextStop(int floorNum) {
            cout<<"Applying First Come First Serve Algorithm and Determing next stop to move elevator to floor "<<floorNum<<endl;   
            return 1;     
        }
};