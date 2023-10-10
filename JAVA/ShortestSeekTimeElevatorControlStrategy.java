public class ShortestSeekTimeElevatorControlStrategy implements ElevatorControlStrategy {
    @Override
    public void moveElevator(int floorNum) {
        System.out.println("Applying Shortest Seek Algorithm and Moving elevator to floor " + floorNum);
    }
}
