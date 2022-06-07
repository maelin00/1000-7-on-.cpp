#include <iostream>
#include <windows.h>
using namespace std;
//ENG VER
int main() {
    int i = 1000;
    //
    cout << "AntiZXC" << endl;
    Sleep(1000);
    while (i >= 7) {
        cout << i << endl;
        i = i - 7;
        Sleep(5);
        cout << i << endl;

    }
    return 0;
}
