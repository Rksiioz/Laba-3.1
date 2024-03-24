#include <ostream>
#include "Car.h"

class Lorry : Car{
private:
    int payloadCapacity;

public:
    Lorry();
    Lorry(string b, int c = 0, int p = 0, int pc = 0);
    Lorry(const Lorry& l);
    virtual ~Lorry(void);

    int getPayloadCapacity() const;
    void setPayloadCapacity(int payloadCapacity);
    void Init(int payloadCapacity);
    void Read();
    void Display() const;
    void changingValues();
    string toString() const;
    operator string() const;
    friend ostream &operator<<(ostream &os, const Lorry &lorry);
    friend istream& operator>>(istream& input, Lorry& lorry);
};