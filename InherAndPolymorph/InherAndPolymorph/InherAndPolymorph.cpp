#include "Car.h"
#include "Boat.h"
#include "Airplane.h"

int main()
{
    Car car = Car(12, 24000, "Ford", 2016, "Red");
    Boat boat = Boat(216, "Boat INC.", 2006, "White");
    Airplane airplane = Airplane(17, "Wright Bros", 1900, "White");

    car.DisplayInformation();
    boat.DisplayInformation();
    airplane.DisplayInformation();

    car.Drive();
    boat.Drive();
    airplane.Drive();
}