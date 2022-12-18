#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Text{
    private:
    string str;

    public:
    Text(); // Default constructor
    Text(string inputFile); 
    string items(); // Holds the contents of the input file
};



Text::Text(){
    str = "This is the default constructor output. \n";
}

Text::Text(string inputFile){
    str = "";

    ifstream input(inputFile.c_str());
    string b;

    while(getline(input, b)){
        str += b;
        str += '\n';
    }
}
// Prints out the contents of the input file
string Text::items(){
    return str;
}

int main(){
    Text t1;
    // Prints out the contents held in the default constructor
    cout << t1.items() << endl;

    Text t2("input.txt");
    // Prints out the contents held in the input file
    cout << t2.items() << endl;

    return 0;
}