#include "elevator_system.hpp"
#include "odd_even_elevator_sel_strategy.hpp"
#include "zone_elevator_sel_strategy.hpp"

int main()
{
    // Initialise the Elevator system for 12 floors and 4 elevators
    ElevatorSystem* elevatorSystem = ElevatorSystem::getElevatorSystem();
    elevatorSystem->InitialiseElevatorSystem(12, 4);

    elevatorSystem->setElevatorSelectionStrategy(new OddEvenElevatorSelStrategy);

    cout<<"--------------------------------------------------------"<<endl;
    // Press external button from floor 10 to go down
    elevatorSystem->sendExternalRequest(ELEVATOR_DIRECTION::DOWN, 10);

    cout<<"--------------------------------------------------------"<<endl;
    //Press internal button to move to floor 7 in elevator 4
    elevatorSystem->sendInternalRequest(7, 4);
    
    cout<<"--------------------------------------------------------"<<endl;
    return 0;
}