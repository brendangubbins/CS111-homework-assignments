#include <iostream>
using namespace std;
int main(){
    int h;
    cout << "Enter a height: ";          // height = 4
    cin >> h;
    for (int r = 1; r <= h; r++){
        for (int c = 1; c <= h; c++){
            if (c <= h - r)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    for (int r = h + 1; r <= h*2-1; r++){
        for (int c = 1; c <= h; c++){
            if (c <= r - h)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
