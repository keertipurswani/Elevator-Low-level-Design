import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class Sensor {
    //private int floorNum;
    private List<Elevator> elevators;

    public Sensor() {
        elevators = new ArrayList<>();
    }

    public void detectFloor() {
        // Hardware code to sense floor number
        notifyElevators(new Random().nextInt(10) + 1);
    }

    public void addElevator(Elevator elevator) {
        elevators.add(elevator);
    }

    public void removeElevator(Elevator elevator) {
        elevators.remove(elevator);
    }

    public void notifyElevators(int floorNum) {
        for (Elevator elevator : elevators) {
            elevator.notifyFloorNumUpdate(floorNum);
        }
    }
}
