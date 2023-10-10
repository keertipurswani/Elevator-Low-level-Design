public class ExternalRequestsProcessor {
    private ElevatorSelectionStrategy elevatorSelectionStrategy;

    public ExternalRequestsProcessor() {
        // Setting default elevator selection strategy
        elevatorSelectionStrategy = new OddEvenElevatorSelStrategy();
    }

    public void setElevatorSelectionStrategy(ElevatorSelectionStrategy selectionStrategy) {
        elevatorSelectionStrategy = selectionStrategy;
    }

    public void processExternalRequest(ExternalRequest extReq) {
        int assignedElevatorId = elevatorSelectionStrategy.selectElevator(extReq);
        ElevatorMgr elevatorMgr = ElevatorMgr.getElevatorMgr();
        Elevator assignedElevator = elevatorMgr.getElevator(assignedElevatorId);
        assignedElevator.moveToFloor(extReq.getSrcFloor());
    }
}
