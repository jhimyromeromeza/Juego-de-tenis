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
	int x, y, puntos, set;
public:
	jugador_1(int _x, int _y, int _puntos, int _set) : x(_x), y(_y), puntos(_puntos), set(_set) {}
	int X() { return x; }
	int Y() { return y; }
	int RESULTADO() { return puntos; }
	int PUNTOS_PERDIDOS();
	int PUNTOS_GANADOS();
	void pintar();
	void borrar();
	void mover();
	void dibujar_puntajes();
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


int jugador_1::PUNTOS_PERDIDOS() {
	if (puntos >= 15) {
		puntos -= 15;
	}
	else {
		puntos = 0;
	}
	return puntos;
}
int jugador_1::PUNTOS_GANADOS(){ 
	puntos += 15;
	if (puntos >60) {
		puntos = 60;
	}
	return puntos;
}
void jugador_1::dibujar_puntajes() {
	gotoxi(50, 4); printf("Puntos  %d", puntos);
	gotoxi(50, 5); printf("Set     %d", set);
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
	int x, y, direccion, acumulador;
public:
	pelota(int _x, int _y, int _direccion, int _acumulador) : x(_x), y(_y), direccion(_direccion), acumulador(_acumulador) {}
	void pintar();
	void mover();
	void borrar();
	void rebote(class jugador_1& N);
	void Puntos(class jugador_1& N);
	void Menos(class jugador_1& N);
};

void pelota::pintar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	//std::cout << B_GREEN;
	printf("%c", 184);
}
void pelota::borrar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	//std::cout << B_GREEN;
	printf(" ");
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
void pelota::Puntos(class jugador_1& N) {
	if (x >= N.X() && x < N.X() + 5 && y >= N.Y() && y <= N.Y() + 2) {
		acumulador +=1;
		if (acumulador == 3) {
			N.PUNTOS_GANADOS();
			acumulador = 0;
			borrar();	
			y = rand() % 12 + 11;
			x = 15;
			
		}
	}
}

void pelota::Menos(class jugador_1& N) {
	if (x > 65) {
		N.PUNTOS_PERDIDOS();
		borrar();
		y = rand() % 12 + 11;
		x = 15;
		
	}
}
// jugado1 and movimiento borrar and dibujar

class jugador_2 {
	int x, y, puntos_2, set;
public:
	jugador_2(int _x, int _y, int _puntos, int _set) : x(_x), y(_y), puntos_2(_puntos), set(_set) {}
	int X() { return x; }
	int Y() { return y; }
	int RESULTADO() { return puntos_2; }
	int PUNTOS_PERDIDOS();
	int PUNTOS_GANADOS();
	void pintar();
	void borrar();
	void mover();
	void dibujar_puntajes();
};

void jugador_2::pintar() {
	gotoxi(x, y); printf(" O ");
	gotoxi(x, y + 1); printf("/| ");
	gotoxi(x, y + 2); printf("/| ");
}
void jugador_2::borrar() {
	gotoxi(x, y); printf("   ");
	gotoxi(x, y + 1); printf("   ");
	gotoxi(x, y + 2); printf("   ");
}
void jugador_2::mover() {
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


int jugador_2::PUNTOS_PERDIDOS() {
	if (puntos_2 >= 15) {
		puntos_2 -= 15;
	}
	else {
		puntos_2 = 0;
	}
	return puntos_2;
}
int jugador_2::PUNTOS_GANADOS() {
	puntos_2 += 15;
	if (puntos_2 > 60) {
		puntos_2 = 60;
	}
	return puntos_2;
}
void jugador_2::dibujar_puntajes() {

	gotoxi(50, 4); printf("Puntos  %d", puntos_2);
	gotoxi(50, 5); printf("Set     %d", set);

}
// jugador movimiento and dibujar, delet and caminar


// pintar limites de cancha tenis
void pintar_limites_2() {
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
class pelota_2 {
	int x, y, direccion, acumulador_2;
public:
	pelota_2(int _x, int _y, int _direccion, int _acumulador) : x(_x), y(_y), direccion(_direccion), acumulador_2(_acumulador) {}
	void pintar();
	void mover();
	void borrar();
	void rebote(class jugador_2& N2);
	void Puntos_2(class jugador_2& N2);
	void Menos(class jugador_2& N2);
};

void pelota_2::pintar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	//std::cout << B_GREEN;
	printf("%c", 184);
}
void pelota_2::borrar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	//std::cout << B_GREEN;
	printf(" ");
}
void pelota_2::mover() {
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
	Sleep(20);
}
void pelota_2::rebote(class jugador_2& N2) {

	if (x >= N2.X() && x < N2.X() + 5 && y >= N2.Y() && y <= N2.Y() + 2) {
		direccion = -direccion;
	}

}
void pelota_2::Puntos_2(class jugador_2& N2) {
	if (x >= N2.X() && x < N2.X() + 5 && y >= N2.Y() && y <= N2.Y() + 2) {
		acumulador_2 += 1;
		if (acumulador_2 == 3) {
			N2.PUNTOS_GANADOS();
			acumulador_2 = 0;
			borrar();
			y = rand() % 12 + 11;
			x = 15;

		}
	}
}

void pelota_2::Menos(class jugador_2& N2) {
	if (x > 65) {
		N2.PUNTOS_PERDIDOS();
		borrar();
		y = rand() % 12 + 11;
		x = 15;
	}
}


// jugador 3 ***************************************************************************************************

class jugador_3 {
	int x, y, puntos, set;
public:
	jugador_3(int _x, int _y, int _puntos, int _set) : x(_x), y(_y), puntos(_puntos), set(_set) {}
	int X() { return x; }
	int Y() { return y; }
	int RESULTADO() { return puntos; }
	int PUNTOS_PERDIDOS();
	int PUNTOS_GANADOS();
	void pintar();
	void borrar();
	void mover();
	void dibujar_puntajes();
};

void jugador_3::pintar() {
	gotoxi(x, y); printf(" O ");
	gotoxi(x, y + 1); printf("/| ");
	gotoxi(x, y + 2); printf("/| ");
}
void jugador_3::borrar() {
	gotoxi(x, y); printf("   ");
	gotoxi(x, y + 1); printf("   ");
	gotoxi(x, y + 2); printf("   ");
}
void jugador_3::mover() {
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


int jugador_3::PUNTOS_PERDIDOS() {
	if (puntos >= 15) {
		puntos -= 15;
	}
	else {
		puntos = 0;
	}
	return puntos;
}
int jugador_3::PUNTOS_GANADOS() {
	puntos += 15;
	if (puntos > 60) {
		puntos = 60;
	}
	return puntos;
}
void jugador_3::dibujar_puntajes() {
	gotoxi(50, 4); printf("Puntos  %d", puntos);
	gotoxi(50, 5); printf("Set     %d", set);
}

// pelota recorrido 
class pelota_3 {
	int x, y, direccion, acumulador;
public:
	pelota_3(int _x, int _y, int _direccion, int _acumulador) : x(_x), y(_y), direccion(_direccion), acumulador(_acumulador) {}
	void pintar();
	void mover();
	void borrar();
	void rebote(class jugador_3& N3);
	void Puntos(class jugador_3& N3);
	void Menos(class jugador_3& N3);
};

void pelota_3::pintar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	//std::cout << B_GREEN;
	printf("%c", 184);
}
void pelota_3::borrar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	//std::cout << B_GREEN;
	printf(" ");
}
void pelota_3::mover() {
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
	Sleep(8);
}
void pelota_3::rebote(class jugador_3& N3) {

	if (x >= N3.X() && x < N3.X() + 5 && y >= N3.Y() && y <= N3.Y() + 2) {
		direccion = -direccion;
	}

}
void pelota_3::Puntos(class jugador_3& N3) {
	if (x >= N3.X() && x < N3.X() + 5 && y >= N3.Y() && y <= N3.Y() + 2) {
		acumulador += 1;
		if (acumulador == 3) {
			N3.PUNTOS_GANADOS();
			acumulador = 0;
			borrar();
			y = rand() % 12 + 11;
			x = 15;

		}
	}
}

void pelota_3::Menos(class jugador_3& N3) {
	if (x > 65) {
		N3.PUNTOS_PERDIDOS();
		borrar();
		y = rand() % 12 + 11;
		x = 15;

	}
}
