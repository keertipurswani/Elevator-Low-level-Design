public class ZoneElevatorSelStrategy implements ElevatorSelectionStrategy {
    @Override
    public int selectElevator(ExternalRequest extReq) {
        // For demo purposes, always returning elevator id 3
        System.out.println("Selecting elevator according to zone strategy and returning elevator id 3");
        return 3;
    }
}
