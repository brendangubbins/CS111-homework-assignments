#include <iostream>
using namespace std;
int main(){

    int x, counter = 0, odd_num = 0;
    cout << "Enter an integer between 1000 and 1000000: ";
    cin >> x;
    while (x < 1000 || x > 1000000){
        counter = counter + 1;
        if (counter == 3){
            cout << "Terminating program.\n";
            return 0;
        }
        cout << "Try again: ";
        cin >> x;
    }

    while (x >= 1){
        if ((x % 2) != 0){
            odd_num = odd_num + 1;
        }
        x = x / 10;
    }
    cout << odd_num << " odd number(s)" << endl; 
return 0;
}
