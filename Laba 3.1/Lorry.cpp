#include "Lorry.h"



Lorry::Lorry(std::string b, int c, int p, int pc) {
    string brand = b;
    int cylinders = c;
    int power = p;
    payloadCapacity = pc;

    setBrand(brand);
    setCylinders(cylinders);
    setPower(power);
}

Lorry::Lorry(const Lorry &l) {
    payloadCapacity = l.payloadCapacity;
}

Lorry::~Lorry() noexcept {}

void Lorry::Init(int payloadCapacity) {
    setPayloadCapacity(payloadCapacity);
}

void Lorry::Read() {
    int payloadCapacity;
    Car::Read();
    cout << "Payload capacity: "; cin >> payloadCapacity;
    cout << endl << endl;

    Init(payloadCapacity);

}

void Lorry::Display() const{
    Car::Display();
    cout << "Payload capacity: " << to_string(payloadCapacity);
    cout << endl << endl;
}

void Lorry::changingValues() {
    int payloadCapacity;
    changeBrand();
    changePower();
    cout << "New payload capacity: "; cin >> payloadCapacity;
    cout << endl << endl;

    setPayloadCapacity(payloadCapacity);
}

int Lorry::getPayloadCapacity() const {
    return payloadCapacity;
}

void Lorry::setPayloadCapacity(int payloadCapacity) {
    Lorry::payloadCapacity = payloadCapacity;
}

ostream &operator<<(ostream &os, const Lorry &lorry) {
    os << static_cast<const Car &>(lorry) << " payloadCapacity: " << lorry.payloadCapacity;
    return os;
}
istream& operator>>(istream& input, Lorry& lorry) {
    input >> lorry.payloadCapacity;
    return input;
}

Lorry::operator string() const{
    Display();
}

Lorry::Lorry() {}
