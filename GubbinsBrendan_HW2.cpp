#include <iostream>
using namespace std;

int main(){
    int height;
    cout << "How many inches tall are you?: ";
    cin >> height;
    cout << "That is " << height / 12 << " feet and " << height % 12
    << " inches" << endl;
return 0;
}
