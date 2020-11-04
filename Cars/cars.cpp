#include <iostream>

using namespace std;

class Car
{
private:
    int maxSpeed;
    int horsePower;
    string brand;
    string model;

public:
    Car(int a, int b, string c, string d)
    {
        maxSpeed = a;
        horsePower = b;
        brand = c;
        model = d;
    };

    void information()
    {
        cout << brand << " " << model << " " << maxSpeed << "km/h" << " " << horsePower << "hp" << endl;
    }
};

int main()
{
    Car BMW(250, 218, "BMW", "M2");
    BMW.information();

    Car Audi(380, 484, "AUDI", "RSQ8");
    Audi.information();

    Car Lada(100, 59, "LADA", "SAMARA");
    Lada.information();

    Car Honda(240, 160, "HONDA", "CR-V");
    Honda.information();

    return 0;
}