#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
    int x = 60;
    int y = 70;
    gotoxy(x, y);
	
    cout<<"hola" <<endl;
	
    return 0;
}
