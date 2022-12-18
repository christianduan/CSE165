#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int r;
    float pi = 2 * acos(0.0);

    // Asks user for the radius of the circle
    cout << "Enter the radius of a circle whose area you want to find: ";
    cin >> r;

    // Calculates the area of the circle
    float area = pi * (r * r);
    
    // Prints out the area
    cout << "The area of a circle with radius " 
        << r << " is " << area << endl;
    return 0;
}