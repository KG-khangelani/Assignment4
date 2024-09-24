#include <iostream>
using namespace std;

//---------------------------------------------

class A
{
    private:
        int x;
    protected:
        int getX();
    public:
        void setX();
};

int A::getX()
{
    return x;
}

void A::setX()
{
    x=10;
}

//------------------------
class B
{
    private:
        int y;
    protected:
        A objA;
        int getY();
    public:
        void setY();

};

void B::setY()
{
    y=24;
    int a = objA.getX();
}

//--------------------------------------

class C: public A
{
    protected:
        int z;
    public:
        int getZ();
        void setZ();
};

int C::getZ()
{
    return z;
}

void C::setZ()
{
    z=65;
}

int main () {
     A khangelani;
     khangelani.setX();
     khangelani.get
}