public class FirstComeFirstServeElevatorControlStrategy implements ElevatorControlStrategy {
    @Override
    public void moveElevator(int floorNum) {
        System.out.println("Applying First Come First Serve Algorithm and Moving elevator to floor " + floorNum);
    }
}
