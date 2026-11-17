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
    return obj;
}

int main() {
    Integer obj1(1);
    obj1.increment(obj1).increment(obj1).print();
  
}
