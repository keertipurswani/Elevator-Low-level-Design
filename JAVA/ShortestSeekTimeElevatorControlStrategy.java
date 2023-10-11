public class ShortestSeekTimeElevatorControlStrategy implements ElevatorControlStrategy {
    @Override
    public int determineNextStop(int floorNum) {
        System.out.println("Applying Shortest Seek Algorithm and Moving elevator to floor " + floorNum);
        //returning 1 for demo purposes, should be determining next stop and returning that
        return 1;
    }
}
