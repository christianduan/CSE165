#include <iostream>

using namespace std;


// Forward declaration for use of classes before linearly declaration
class C1;
class C2;

// First class
class C1{
    public:
    // Points to the object in C2
    void class1(C2 *x);
    void print(){
        cout << "This is from the first class!" << endl;
    }
};

// Second slass
class C2{
    public:
    // Points to object in C1 and prints out print function in C1
    void class2(C1 *x){
        x -> print();
    }
    void print1(){
        cout << "This is from the second class!" << endl;
    }
};

// Declares the print function in C2 to the object in C1
void C1::class1(C2 *x){
    x -> print1();
}

int main(){
    C1 a;
    C2 b;

    a.class1(&b);
    b.class2(&a);

    return 0;
}