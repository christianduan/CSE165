#include <iostream>
#include <string>

using namespace std;

int main(){
    // Declare global variables
    string inputWord = "";
    int inputASCII = 0;
    bool cont = true;

    // While loop that breaks 
    while(true){
        cin >> inputWord;

        if (inputWord != "welcome"){
            for(int i = 0; i < size(inputWord); i++){
                // cout << inputWord[i] <<  ": " << int(inputWord[i]) << "\n";
                inputASCII = inputASCII + int(inputWord[i]);
            }
            cout << inputASCII << "\n";

            switch(inputASCII){
                case 1 ... 550:
                    cout << "Awesome!\n";
                    break;
                case 551 ... 1000:
                    cout << "Superb!\n";
                    break;
                default:
                    break;
            }
            inputASCII = 0;
        }
        else{
            cont = false;
            break;
        }
    }
    
    // Sets value to "break" word and ends program
    for(int i = 0; i < size(inputWord); i++){
        // cout << inputWord[i] <<  ": " << int(inputWord[i]) << "\n";
        inputASCII = inputASCII + int(inputWord[i]);
    }
    cout << inputASCII << "\n";

    switch(inputASCII){
        case 1 ... 550:
            cout << "Awesome!\n";
            break;
        case 551 ... 1000:
            cout << "Superb!\n";
            break;
        default:
            break;
    }
    inputASCII = 0;

    return 0;
}