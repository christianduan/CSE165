#include <iostream>
#include <cstring>

using namespace std;

class myClass{
    // Holds array to not be altered
    char myArray[100];

    public:
        // Default constructor
        myClass(char c = ' '){
            memset(myArray, c , sizeof(myArray));
        }
        
        // Prints out all characters from the array
        void print(){
            for(int i = 0; i < sizeof(myArray); i++){
                cout << i + 1 << ": " << myArray[i] << '\n';
            }
        }
};

int main(){
    // Initializes array that holds 'a'
    myClass myObj('a');

    myObj.print();

    return 0;
}