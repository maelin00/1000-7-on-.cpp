#include <iostream>
#include <windows.h>
using namespace std;
//RU VER
int main() {

    setlocale(LC_ALL, "Russian");
    int i = 1000;
    //
    cout << "АнтиZXC" << endl;
    Sleep(1000);
    while (i >= 7) {
        cout << i << endl;
        i = i - 7;
        Sleep(5);
        cout << i << endl;

    }
    return 0;
}
