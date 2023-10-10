#include "elevator_control_strategy.hpp"

class ShortestSeekTimeElevatorControlStrategy : public ElevatorControlStrategy{
    public:
        int determineNextStop(int floorNum) {
            cout<<"Applying Shortest Seek Algorithm and Determing next stop to move elevator to floor "<<floorNum<<endl;
            return 1;
        }
};