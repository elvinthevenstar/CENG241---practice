#include <iostream>
using namespace std;

class Integer {
    int num;
    public:
    Integer(int n): num(n) {}
    Integer& increment(int);
    void print() {cout << num << endl;}
};
Integer& Integer::increment(int n) {  //(Integer& obj) ==> continuing from line 14
    num += n;
    return *this;
    //return obj;? ==> lets say we declare n in the function as a random integer so the code can work
    // this line would cause the function calling object to create an alias named obj
}

int main() {
    Integer obj(1);
    obj.increment(3).increment(5).print();
    //obj.increment(obj);? When parameter and the invoking object are the same. ==> this is uneccesary since the 
    /*                                                                      program takes the reference of the
                                                                            function calling object automatically
                                                                            
    */ 
    
    /* Integer& alias = obj;
       obj.increment(alias)*/  //When parameter is a reference alias to the invoking object. 
}
