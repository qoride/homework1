#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int input = 0, digit = 0;
    long long int binary = 0;
    
    while(input < 1){

        cout << "Enter a positive integer: ";
        cin >> input;

        while(cin.fail()){
            cin.clear();
            cin.ignore(1);
        }

        if(input < 1 && !cin.fail()){
            cout << "\n\nERROR: Invalid input.\n" << endl;
        }
    }

    while(input > 0){
        if((input%2)*pow(10,digit) >= INT32_MAX){
            cout << "\nERROR: Integer overflow.";
            return 0;
        }
        binary += (input%2)*pow(10,digit);
        input /= 2;
        digit++;
    }
    
    cout << "\nBinary representation: " << binary;

    return 0;
}
