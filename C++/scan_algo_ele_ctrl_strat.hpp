#include "elevator_control_strategy.hpp"

class ScanAlgorithmElevatorControlStrategy : public ElevatorControlStrategy{
    public:
        int determineNextStop(int floorNum) {
            cout<<"Applying Scan Algorithm and Determing next stop to move elevator to floor "<<floorNum<<endl;
            return 1;
        }
};