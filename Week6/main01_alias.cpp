#include <iostream>
using namespace std;

class Integer {
    int num;
    public:
    Integer(int n): num(n) {}
    Integer& increment(Integer&);
    void print() {cout << num << endl;}
};

Integer& Integer::increment(Integer& obj) {
    num += obj.num ;
    return *this; // return obj would return parameter object instead of invoking object, doesnt work if parameter object is the invoking object
}

int main() {
    Integer obj1(1);
    obj1.increment(obj1).increment(obj1).print();
  
}
