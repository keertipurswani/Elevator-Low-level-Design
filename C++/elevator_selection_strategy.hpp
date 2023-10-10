#pragma once
#include "external_request.hpp"

class ElevatorSelectionStrategy {
    public:
    virtual int selectElevator(ExternalRequest* extReq) = 0;
};