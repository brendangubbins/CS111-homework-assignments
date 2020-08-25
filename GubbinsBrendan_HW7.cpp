#include <iostream>
using namespace std;

int reverse(int n);
int reverse(int n){
	while (n >= 10){
            cout << n % 10;
            n = n / 10;
        }
}
int main(){
	int number;
        cout << "Enter 10 numbers: ";
        cin >> number;
        cout << reverse(number) << endl;
	for (int c = 1; c <= 9; c++){
            cout << "Enter another number: ";
	    cin >> number;
	    cout << reverse(number) << endl;
        }
return 0;
}
