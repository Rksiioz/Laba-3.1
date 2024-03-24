#include "Car.h"

Car::Car(const string brand,const int cylinders, const int power) : brand(brand), cylinders(cylinders), power(power) {};

Car::Car(const Car& c){
    brand = c.brand;
    cylinders = c.cylinders;
    power = c.power;
};

Car::~Car(void){};

void Car::changeBrand() {
    string newBrand;
    cout << "Enter new brand: "; cin >> newBrand;
    setBrand(newBrand);
}

void Car::changePower() {
    int newPower;
    cout << "Enter a new power value: "; cin >> newPower;
    setPower(newPower);
}

void Car::Init(string brand, int cylinders, int power) {
    setBrand(brand);
    setCylinders(cylinders);
    setPower(power);
}

void Car::Display() const {
    cout << "Brand: " << getBrand() << endl;
    cout << "Cylinders: " << to_string(this->cylinders) << endl;
    cout << "Power: " << to_string(this->power) << endl;
}

void Car::Read() {
    string brand;
    int cylinders, power;

    cout << "      Enter:" << endl << endl;
    cout << "Brand: "; cin >> brand;
    cout << "Number of cylinders: "; cin >> cylinders;
    cout << "Power in horsepower: "; cin >> power;

    Init(brand, cylinders, power);
}

Car::operator string() const {
    Display();
}

istream& operator>>(istream& input, Car& car) {
    input >> car.power;
    return input;
}

ostream& operator<<(std::ostream& output, const Car& car) {
    output << car.power;
    return output;
}

const string &Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string &brand) {
    Car::brand = brand;
}

int Car::getCylinders() const {
    return cylinders;
}

void Car::setCylinders(int cylinders) {
    Car::cylinders = cylinders;
}

int Car::getPower() const {
    return power;
}

void Car::setPower(int power) {
    Car::power = power;
}