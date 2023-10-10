public class ExternalRequest {
    private ElevatorDirection directionToGo;
    private int srcFloor;

    public ExternalRequest(ElevatorDirection direction, int floor) {
        directionToGo = direction;
        srcFloor = floor;
    }

    public ElevatorDirection getDirection() {
        return directionToGo;
    }

    public void setDirection(ElevatorDirection direction) {
        directionToGo = direction;
    }

    public int getSrcFloor() {
        return srcFloor;
    }

    public void setSrcFloor(int floor) {
        srcFloor = floor;
    }
}
