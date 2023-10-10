#pragma once
#include "external_display.hpp"
#include "external_button.hpp"

class Floor {
    int floorNum;
    vector<ExternalDisplay*> displays;
    vector<ExternalButton*> buttons;

    public:
        int getFloorNum() {
            return floorNum;
        }
        void setFloorNum(int pFloorNum) {
            floorNum = pFloorNum;
        } 
};