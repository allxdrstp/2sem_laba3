#include <iostream>
#include <cmath>
using namespace std;

class VectorOnThePlane {
protected:
    double x, y;
public:
    VectorOnThePlane(double x, double y) {
        this->x = x;
        this->y = y;
    }
    virtual void print() {
        cout << "x= " << x << " y= " << y << " ";
    }
};
class VectorInThreeSpace : public VectorOnThePlane {
    double z;
public:
    VectorInThreeSpace(double x, double y, double z) : VectorOnThePlane(x, y) {
        this->z = z;
    }
    void print() {
        VectorOnThePlane::print();
        cout << " z= " << z << endl;
    }
};
int main()
{
    VectorOnThePlane vector1(2, 3);
    VectorInThreeSpace vector2(1, 2, 3);
    vector1.print();
    vector2.print();
    VectorOnThePlane* vector1Ptr = new VectorOnThePlane(4, 6);
    vector1Ptr->print();
    VectorInThreeSpace* vector2Ptr = new VectorInThreeSpace(7, 8, 9);
    vector2Ptr->print();
    return 0;
}