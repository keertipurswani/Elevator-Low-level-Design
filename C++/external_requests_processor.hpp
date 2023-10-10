#pragma once
#include "odd_even_elevator_sel_strategy.hpp"
#include "zone_elevator_sel_strategy.hpp"
#include "external_request.hpp"
#include "elevator_mgr.hpp"

class ExternalRequestsProcessor {
    ElevatorSelectionStrategy* elevatorSelectionStrategy;

    public:
        ExternalRequestsProcessor() {
            //setting defauly elevator selection strategy
            elevatorSelectionStrategy = new OddEvenElevatorSelStrategy;
        }

        void setElevatorSelectionStrategy(ElevatorSelectionStrategy* selectionStrategy) {
            elevatorSelectionStrategy = selectionStrategy;
        }

        void processExternalRequest(ExternalRequest* extReq) {
            int assignedElevatorId = elevatorSelectionStrategy->selectElevator(extReq);
            ElevatorMgr* elevatorMgr = ElevatorMgr::getElevatorMgr();
            Elevator* assignedElevator = elevatorMgr->getElevator(assignedElevatorId);
            assignedElevator->moveToFloor(extReq->getSrcFloor());
        }
};