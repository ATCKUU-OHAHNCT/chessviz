#ifndef BOARD_HPP
#define BOARD_HPP

void clear();
void metamorphosis(int* b);
void move(int* b);
int check_input(int* b, char* p);
void input(char* p, int* b);
int Player(int* b, int& s);

int check_figure_move(int* b); // общая проверка движения фигур
int check_king(int* b);         // проверка движения кинга
int God_Save_The_Queen(int* b); // проверка движения королевы
int check_elephant(int* b); // проверка движения слона
int check_horse(int* b);    // проверка движения коня
int check_ladya(int* b);    // проверка движения ладьи
int check_peshka(int* b);   // проверка движения пешки

#endif