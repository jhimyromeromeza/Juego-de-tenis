#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>


#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

// Códigos de escape ANSI para colores de fondo
#define B_BLACK   "\033[40m"      /* Black */
#define B_RED     "\033[41m"      /* Red */
#define B_GREEN   "\033[42m"      /* Green */
#define B_YELLOW  "\033[43m"      /* Yellow */
#define B_BLUE    "\033[44m"      /* Blue */
#define B_MAGENTA "\033[45m"      /* Magenta */
#define B_CYAN    "\033[46m"      /* Cyan */
#define B_WHITE   "\033[47m"      /* White */

void gotoxi(int x, int y) {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dvPos;
	dvPos.X = x;
	dvPos.Y = y;

	SetConsoleCursorPosition(hCon, dvPos);
}
void ocultarCursor() {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 50;
	cci.bVisible = false;
	SetConsoleCursorInfo(hCon, &cci);
}
// jugado1 and movimiento borrar and dibujar

class jugador_1 {
	int x, y, vidas;
public:
	jugador_1(int _x, int _y, int _vidas) : x(_x), y(_y), vidas(_vidas) {}
	int X() { return x; }
	int Y() { return y; }
	void pintar();
	void borrar();
	void mover();
	void pintar_vidas();
};

void jugador_1::pintar() {
	gotoxi(x, y); printf(" O ");
	gotoxi(x, y + 1); printf("/| ");
	gotoxi(x, y + 2); printf("/| ");
}
void jugador_1::borrar() {
	gotoxi(x, y); printf("   ");
	gotoxi(x, y + 1); printf("   ");
	gotoxi(x, y + 2); printf("   ");
}
void jugador_1::mover() {
	if (kbhit()) {
		char tecla = getch();
		borrar();
		if (tecla == IZQUIERDA && x > 39) x--;
		if (tecla == DERECHA && x + 3 < 70) x++;
		if (tecla == ARRIBA && y > 10) y--;
		if (tecla == ABAJO && y + 3 < 23) y++;
		pintar();

	}
}
void jugador_1::pintar_vidas() {
	gotoxi(50, 4); printf("vidas");

	for (int i = 0; i < vidas; i++) {
		gotoxi(60 + i, 4); printf("%c", 3);
	}
}

// jugador movimiento and dibujar, delet and caminar


// pintar limites de cancha tenis
void pintar_limites() {
	for (int i = 7; i < 70; i++) {
		gotoxi(i, 9); printf("%c", 205);
		gotoxi(i, 23); printf("%c", 205);
	}
	for (int e = 10; e < 23; e++) {
		gotoxi(7, e); printf("%c", 186);
		gotoxi(70, e); printf("%c", 186);
	}
	for (int j = 9; j < 24; j++) {
		gotoxi(38, j); printf("%c", 186);
	}
	gotoxi(7, 9); printf("%c", 201);
	gotoxi(7, 23); printf("%c", 200);
	gotoxi(70, 9); printf("%c", 187);
	gotoxi(70, 23); printf("%c", 188);

}
// pelota recorrido 
class pelota {
	int x, y, direccion;
public:
	pelota(int _x, int _y, int _direccion) : x(_x), y(_y), direccion(_direccion) {}
	void pintar();
	void mover();
	void rebote(class jugador_1& N);
};

void pelota::pintar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	std::cout << B_GREEN;
	printf("%c", 184);
}
void pelota::mover() {
	gotoxi(x, y); printf(" ");
	x += direccion;
	if (x > 68) {
		y = rand() % 12 + 11;
		x = 15;
	}
	if (x < 12) {
		direccion = -direccion;
		y = rand() % 12 + 11;
		x = 15;
	}
	pintar();
	Sleep(30);
}
void pelota::rebote(class jugador_1& N) {

	if (x >= N.X() && x < N.X() + 5 && y >= N.Y() && y <= N.Y() + 2) {
		direccion = -direccion;
	}

}
