#include <iostream>
#include <string>

using namespace std;

// Enclosing class
class MyClass{
    public:
        // Nested class
        class MyException{
            public:
                MyException(const char* str){
                    myString = str;
                }

                // Print function to print out exception
                printException(){
                    cout << myString << endl;
                    return 0;
                }
            private:
                const char* myString;
        };

        // Function that throws out the exception being caught
        void myFun(){
            throw MyException("Exception caught");
        }

};

int main(){
    try{
        MyClass obj;
        obj.myFun();
    }catch(MyClass :: MyException& a){
        a.printException();
    }

    return 0;
}