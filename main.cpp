#include <iostream>

using namespace std;

int main(){
    int input = 0;
    
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

    return 0;
}
