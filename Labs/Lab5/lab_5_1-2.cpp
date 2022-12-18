/* Create a vector< Counted*> and fill it with pointers to new Counted objects (from Exercise
1). Move through the vector and print the Counted objects, then move through again and delete each one.*/

#include <iostream>
#include <vector>

using namespace std;

// Creates the Counted class
class Counted{
    private:
    int id;
    static int count;

    public:
    // Default constructor
    Counted():id(count++){
        cout << id << " is created" << endl;
    }
    // Default destructor
    ~Counted(){
        cout << id << " is destroyed" << endl;
    }

    int ex(){
        return id;
    }
};

int Counted :: count = 0;

int main(){
    vector<Counted*> C1;
    
    for(int i = 0; i < 10; i++){
        C1.push_back(new Counted);
    }

    for(int i = 0; i < 10; i++){
        cout << "Printed id: " << C1[i] -> ex() << endl;
    }

    for(int i = 0; i < 10; i++){
        delete C1[i];
    }

    return 0;
}