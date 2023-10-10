public class ScanAlgorithmElevatorControlStrategy implements ElevatorControlStrategy {
    @Override
    public void moveElevator(int floorNum) {
        System.out.println("Applying Scan Algorithm and Moving elevator to floor " + floorNum);
    }
}
