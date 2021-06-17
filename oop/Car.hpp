//
// Hudson Schumaker
//

class Car {
    public:
        // Constructor
        Car(const char*);
        // Destructor
        ~Car();

        void Accelerate();
        void Brake();
        void Refuel(double);

        char name[32];
        double speed;
        double fuel;
};