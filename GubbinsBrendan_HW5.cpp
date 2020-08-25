#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter integer less than 10: ";
    cin >> n;
    if (n >= 10)
        return 0;
    for (int i = 1; i <= 100/n; i++){
        cout << i * n << " ";
        if (i % n == 0)
    
        cout << endl;
    }
    return 0;
}
