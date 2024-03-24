#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    int cylinders;
    int power;
public:
    Car(const string brand = "",const int cylinders = 0,const int power = 0);
    Car(const Car& c);
    virtual ~Car(void);

    void changeBrand();
    void changePower();
    void Init(string brand, int cylinders, int power);
    virtual void Read();
    virtual void Display() const;
    operator string() const;
    friend istream& operator>>(istream& input, Car& car);
    friend ostream& operator<<(ostream& output, const Car& car);

    const string &getBrand() const;
    void setBrand(const string &brand);
    int getCylinders() const;
    void setCylinders(int cylinders);
    int getPower() const;
    void setPower(int power);

};

