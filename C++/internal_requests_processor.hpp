#pragma once
#include "internal_request.hpp"
#include "elevator_mgr.hpp"

class InternalRequestsProcessor {
    public:
        void processInternalRequest(InternalRequest* intReq) {
            ElevatorMgr* elevatorMgr = ElevatorMgr::getElevatorMgr();
            Elevator* srcElevator = elevatorMgr->getElevator(intReq->getSrcElevatorId());
            srcElevator->moveToFloor(intReq->getDestFloor());
        }
};
