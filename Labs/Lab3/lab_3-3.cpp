#include <iostream>

using namespace std;

class ptrArr{
    public:
        int size;
        int arr[5];
        int *ptr;

        // Array of integers that will be referenced by the pointer
        ptrArr(){
            size = 5;
            arr[0] = 5;
            arr[1] = 4;
            arr[2] = 3;
            arr[3] = 2;
            arr[4] = 1;

            // Assigns the array of integers to the pointer "ptr"
            ptr = arr;
        }

        // Prints out the array of integers through the pointer to the array
        void print(){
            for(int i = 0; i < size; i++){
                cout << ptr[i] << '\n';
            }
        }

};

int main(){
    ptrArr a;

    // Calls the print function in the ptrArr class
    a.print();

    return 0;
}