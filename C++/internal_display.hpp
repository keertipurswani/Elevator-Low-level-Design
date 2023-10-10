#include "display.hpp"

class InternalDisplay : public Display {
    public:
        void showDisplay(int floorNum, ELEVATOR_DIRECTION direction) {
            cout<<"Displaying current floorNum and direction."; 
        }
};

