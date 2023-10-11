public class ScanAlgorithmElevatorControlStrategy implements ElevatorControlStrategy {
    @Override
    public int determineNextStop(int floorNum) {
        System.out.println("Applying Scan Algorithm and Moving elevator to floor " + floorNum);
        //returning 1 for demo purposes, should be determining next stop and returning that
        return 1;
    }
}
