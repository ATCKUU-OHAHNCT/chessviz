#include "board_print_plain.hpp"
#include "board.hpp"
#include <iomanip>
#include <iostream>

using namespace std;

extern char init_desk[8][8];
extern char desk[8][8];

void print_desk()
{
    int i, j;
    for (i = 0; i < 8; i++) {
        cout << setw(2) << i + 1 << "|";
        for (j = 0; j < 8; j++) {
            if (desk[i][j] == ' ')
                cout << setw(3) << "_|";
            else
                cout << setw(2) << desk[i][j] << "|";
        }
        cout << "\n";
    }
    cout << "  ";
    for (i = 0; i < 8; i++)
        cout << setw(3) << (char)(i + 97);
    cout << "\n";
}