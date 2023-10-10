public class InternalRequestsProcessor {
    public void processInternalRequest(InternalRequest intReq) {
        ElevatorMgr elevatorMgr = ElevatorMgr.getElevatorMgr();
        Elevator srcElevator = elevatorMgr.getElevator(intReq.getSrcElevatorId());
        srcElevator.moveToFloor(intReq.getDestFloor());
    }
}
