public class Elevator {
    private int elevatorId; // It can be a string
    //private int capacity; // You can store variables like speed, door open and close time
    //private ArrayList<InternalDisplay> displays;
    private ElevatorController controller;

    public Elevator() {
        controller = new ElevatorController();
        //displays = new ArrayList<>();
    }

    public int getElevatorId() {
        return elevatorId;
    }

    public void moveToFloor(int floorNum) {
        controller.moveElevatorToFloor(floorNum);
    }

    public void notifyFloorNumUpdate(int floorNum) {
        controller.setCurrFloor(floorNum);
    }
}
