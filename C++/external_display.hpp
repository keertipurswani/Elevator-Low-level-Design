#include "display.hpp"

class ExternalDisplay : public Display {

    public:
        void showDisplay(int floorNum, ELEVATOR_DIRECTION direction) {
            cout<<"Displaying current floorNum and direction."; 
        }
};

