#include "board.hpp"
#include "board_print_plain.hpp"
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

char init_desk[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                        {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'}};

char desk[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                   {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                   {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'}};

int main()
{
    char p[5];
    int b[5];
    int s = 0;

    clear();
    cout << "Zdravstvuite\n\nWhite (big)\n\n";

    while (1) {
        print_desk();
        cout << "\nInput coordinates (X1Y1-X2Y2)\n";
        for (int i = 0; i < 5; i++) {
            cin >> p[i];
            b[i] = p[i];
            //    cout << b[i] << "  ";
        }
        clear();

        while (!check_input(b, p) || !check_figure_move(b) || !Player(b, s)) {
            clear();
            print_desk();
            input(p, b);
        }

        move(b);
        s++;
    }
}
