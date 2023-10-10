public class ElevatorCurrState {
    private int currFloor;
    private ElevatorDirection currDirection;
    private ElevatorStatus currStatus;

    public ElevatorCurrState() {
        currFloor = 0;
        currDirection = ElevatorDirection.IDLE;
        currStatus = ElevatorStatus.IDLE;
    }

    public int getCurrFloor() {
        return currFloor;
    }

    public void setCurrFloor(int floorNum) {
        currFloor = floorNum;
    }

    public ElevatorDirection getCurrDirection() {
        return currDirection;
    }

    public void setCurrDirection(ElevatorDirection direction) {
        currDirection = direction;
    }

    public ElevatorStatus getCurrStatus() {
        return currStatus;
    }

    public void setCurrStatus(ElevatorStatus status) {
        currStatus = status;
    }
}
