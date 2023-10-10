public class OddEvenElevatorSelStrategy implements ElevatorSelectionStrategy {
    @Override
    public int selectElevator(ExternalRequest extReq) {
        // For demo purposes, return elevator id 1 if srcFloor is odd and 2 if it is even
        System.out.print("Selecting elevator according to odd-even strategy and returning elevator id ");
        if (extReq.getSrcFloor() % 2 == 0) {
            System.out.println(2);
            return 2;
        } 
        System.out.println(1);
        return 1;
    }
}
