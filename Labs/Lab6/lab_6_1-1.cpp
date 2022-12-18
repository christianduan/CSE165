#include <iostream>

using namespace std;

class myClass{
    const float f1 = 12;
    float f2 = 11;
    public:
        myClass() : f1(0), f2(0){}
        myClass(float x, float y) : f1(x), f2(y){}

        // Used to check functionality of code
        void print(){
            cout << f1 << endl;
            cout << f2 << endl;
        }

};

int main(){
    // Creates object
    myClass C;

    // Calls print function from class
    C.print();

    return 0;
}

