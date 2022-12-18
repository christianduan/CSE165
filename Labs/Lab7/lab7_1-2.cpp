#include <iostream>

using namespace std;

class mySimpleClass{
    int x;

    public:
        // Default constuctor for my class
        mySimpleClass(int num) : x(num){}

        // Overloading operator for addition that adds the first value and the next value
        mySimpleClass operator +(const mySimpleClass& next){
            // Returns the added values
            return mySimpleClass(x + next.x);
        }

        // Overloading operator for multiplication that multiplies the first value and the next value
        mySimpleClass operator *(const mySimpleClass& next){
            // Returns the product of the values
            return mySimpleClass(x * next.x);
        }

        // Outputs the value of x
        void print(ostream& out){
            out << x << endl;
        }
};

int main(){
    mySimpleClass a(4);
    mySimpleClass b(5);
    mySimpleClass c = a * a + b * b;

    c.print(cout);

    return 0;
}