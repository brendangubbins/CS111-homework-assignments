#include <iostream>
using namespace std;

int doubleOdd(int x){
    int r = x % 10;
    if (x == 0) return 0;
    if (r % 2 != 0)
        return (doubleOdd(x/10)*10 + r)*10 + r;
    else
        return doubleOdd(x/10)*10 + r;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << doubleOdd(n) << endl;
    return 0;
}
    
