public class ElevatorController {
    private ElevatorCurrState state;
    private ElevatorControlStrategy controlStrategy;

    public ElevatorController() {
        state = new ElevatorCurrState();
    }

    void setCurrFloor(int floorNum) {
        //Controller should check if this is stopping point
        //If yes, should stop using stop method
        state.setCurrFloor(floorNum);
    }

    public void moveElevatorToFloor(int floorNum) {
        controlStrategy = new FirstComeFirstServeElevatorControlStrategy();
        controlStrategy.moveElevator(floorNum);

        if (floorNum > state.getCurrFloor())
            state.setCurrDirection(ElevatorDirection.UP);
        else if (floorNum < state.getCurrFloor())
            state.setCurrDirection(ElevatorDirection.DOWN);
        if (floorNum != state.getCurrFloor())
            state.setCurrStatus(ElevatorStatus.MOVING);
    }
}

