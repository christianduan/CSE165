/*Create a class Counted that contains an int id and a static int count. The default
constructor should begin: Counted() : id(count++). It should also print its id and that it’s being created. The destructor
should print that it’s being destroyed and its id. Test your class.*/

#include <iostream>

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
};

// Sets count to 0 for class Counted
int Counted :: count = 0;

int main(){
    Counted a;
    Counted b;

    return 0;
}


