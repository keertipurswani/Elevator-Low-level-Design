public class ElevatorDemo {
    public static void main(String[] args) {
        // Initialize the Elevator system for 12 floors and 4 elevators
        ElevatorSystem elevatorSystem = ElevatorSystem.getElevatorSystem();
        elevatorSystem.initializeElevatorSystem(12, 4);

        elevatorSystem.setElevatorSelectionStrategy(new OddEvenElevatorSelStrategy());

        System.out.println("--------------------------------------------------------");
        // Press external button from floor 10 to go down
        elevatorSystem.sendExternalRequest(ElevatorDirection.DOWN, 10);

        System.out.println("--------------------------------------------------------");
        // Press internal button to move to floor 7 in elevator 4 
        elevatorSystem.sendInternalRequest(7, 4);
        System.out.println("--------------------------------------------------------");
    }
}
