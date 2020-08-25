#include <iostream>
using namespace std;

int main(){
    string house_number;
    string street;
    string county;
    string state;
    string zip_code;
   
    cout << "Please enter House Number:\n";
    cin >> house_number; 
    cout << "Please enter Street:\n";
    cin >> street;
    cout << "Please enter County:\n";
    cin >> county;
    cout << "Please enter State:\n";
    cin >> state;
    cout << "Please enter Zip Code:\n";
    cin >> zip_code;
    cout << house_number << " " << street << endl;
    cout << county << ", " << state << " " << zip_code << endl;
return 0;
}
