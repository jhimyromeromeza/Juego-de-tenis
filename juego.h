#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

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
// CLASS REFERI 
// class referi 
class referi {
	int x, y;
public:
	referi(int _x, int _y) : x(_x), y(_y) {}
	void dibujar_referi();
	void alzar_mano();
	//void puntos(class jugador_1& J, class jugador_2& J2, class jugador_3& J3);
};

void referi::dibujar_referi() {
	gotoxi(x, y); printf(" O ");
	gotoxi(x, y + 1); printf("/|\\");
	gotoxi(x, y + 2); printf("/ \\");
}
void referi::alzar_mano() {
	gotoxi(x, y); printf("\\O/ ");
	gotoxi(x, y + 1); printf(" | ");
	gotoxi(x, y + 2); printf("/ \\");
	// Pausa de un segundo
	std::this_thread::sleep_for(std::chrono::seconds(1));
}
// jugado1 and movimiento borrar and dibujar
class jugador_1 {
	int x, y, puntos, puntos2;
	bool estadoPintado;
public:
	jugador_1(int _x, int _y, int _puntos, int _set) : x(_x), y(_y), puntos(_puntos), puntos2(_set) {}
	int X() { return x; }
	int Y() { return y; }
	int RESULTADO() { return puntos; }
	int RESULTADO2() { return puntos2; }
	int PUNTOS_PERDIDOS();
	int PUNTOS_GANADOS();
	void pintar();
	void borrar();
	void mover();
	void dibujar_puntajes();
	void pintarOtro();
};

void jugador_1::pintar() {
	
	gotoxi(x, y); printf(" O ");
	gotoxi(x, y + 1); printf("/| ");
	gotoxi(x, y + 2); printf("/ \\");
}
void jugador_1::borrar() {
	
	gotoxi(x, y ); printf("   ");
	gotoxi(x, y + 1); printf("   ");
	gotoxi(x, y + 2); printf("   ");
}
void jugador_1::pintarOtro() {
	
	gotoxi(x, y); printf("\\O ");
	gotoxi(x, y + 1); printf(" |\\");
	gotoxi(x, y + 2); printf("/ \\");
}
void jugador_1::mover() {
	if (kbhit()) {
		char tecla = getch();
		borrar();
		if (tecla == IZQUIERDA && x > 39) x--;
		if (tecla == DERECHA && x + 3 < 70) x++;
		if (tecla == ARRIBA && y > 10) y--;
		if (tecla == ABAJO && y + 3 < 23) y++;
		if (estadoPintado) {
			pintar();
		}
		else {
			pintarOtro();
		};

		estadoPintado = !estadoPintado;
	}
}

int jugador_1::PUNTOS_PERDIDOS() {
	puntos2 += 15;
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
	if (puntos2 >= 15) {
		puntos2 -= 15;
	}
	if (puntos >60) {
		puntos = 60;
	}
	return puntos;
}
void jugador_1::dibujar_puntajes() {
	gotoxi(50, 4); printf("Puntos  %d", puntos);
	gotoxi(10, 4); printf("Puntos  %d", puntos2);
}
// jugador movimiento and dibujar, delet and caminar
// pintar limites de cancha tenis
void pintar_limites() {
	//for (int i = 7; i < 70; i++) {
	//	gotoxi(i, 9); printf("%c", 205);
	//	gotoxi(i, 23); printf("%c", 205);
	//}
	//for (int e = 10; e < 23; e++) {
	//	gotoxi(7, e); printf("%c", 186);
	//	gotoxi(70, e); printf("%c", 186);
	//}
	for (int j = 9; j < 24; j++) {
		gotoxi(38, j); printf("%c", 186);
	}
	//gotoxi(7, 9); printf("%c", 201);
	//gotoxi(7, 23); printf("%c", 200);
	//gotoxi(70, 9); printf("%c", 187);
	//gotoxi(70, 23); printf("%c", 188);

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
	void Puntos(class jugador_1& N, class referi& R);
	void Menos(class jugador_1& N);
};

void pelota::pintar() {
	std::cout << "\033[104m";
	gotoxi(x, y);
	printf("%c", 184);

}
void pelota::borrar() {
	std::cout << "\033[104m";
	gotoxi(x, y);
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
	Sleep(23);
}
void pelota::rebote(class jugador_1& N) {

	if (x >= N.X() && x < N.X() + 5 && y >= N.Y() && y <= N.Y() + 2) {
		direccion = -direccion;
	}

}
void pelota::Puntos(class jugador_1& N, class referi& R) {
	if (x >= N.X() && x < N.X() + 5 && y >= N.Y() && y <= N.Y() + 2) {
		acumulador +=1;
		if (acumulador == 3) {
			N.PUNTOS_GANADOS();
			acumulador = 0;
			borrar();	
			R.alzar_mano();
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
// pintar limites de cancha tenis
// pelota recorrido 
class pelota_2 {
	int x, y, direccion, acumulador_2;
public:
	pelota_2(int _x, int _y, int _direccion, int _acumulador) : x(_x), y(_y), direccion(_direccion), acumulador_2(_acumulador) {}
	void pintar();
	void mover();
	void borrar();
	void rebote(class jugador_1& N2);
	void Puntos_2(class jugador_1& N2, class referi& R);
	void Menos(class jugador_1& N2);
};

void pelota_2::pintar() {
	gotoxi(x, y);
	std::cout << "\033[104m";
	printf("%c", 184);
}
void pelota_2::borrar() {
	gotoxi(x, y);
	std::cout << "\033[104m";
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
	Sleep(15);
}
void pelota_2::rebote(class jugador_1& N2) {

	if (x >= N2.X() && x < N2.X() + 5 && y >= N2.Y() && y <= N2.Y() + 2) {
		direccion = -direccion;
	}

}
void pelota_2::Puntos_2(class jugador_1& N2, class referi& R) {
	if (x >= N2.X() && x < N2.X() + 5 && y >= N2.Y() && y <= N2.Y() + 2) {
		acumulador_2 += 1;
		if (acumulador_2 == 3) {
			N2.PUNTOS_GANADOS();
			acumulador_2 = 0;
			borrar();
			R.alzar_mano();
			y = rand() % 12 + 11;
			x = 15;
		}
	}
}
void pelota_2::Menos(class jugador_1& N2) {
	if (x > 65) {
		N2.PUNTOS_PERDIDOS();
		borrar();
		y = rand() % 12 + 11;
		x = 15;
	}
}
// pelota recorrido 
class pelota_3 {
	int x, y, direccion, acumulador;
public:
	pelota_3(int _x, int _y, int _direccion, int _acumulador) : x(_x), y(_y), direccion(_direccion), acumulador(_acumulador) {}
	void pintar();
	void mover();
	void borrar();
	void rebote(class jugador_1& N3);
	void Puntos(class jugador_1& N3, class referi& R);
	void Menos(class jugador_1& N3, class referi& R);
};

void pelota_3::pintar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	std::cout << "\033[104m";
	printf("%c", 184);
}
void pelota_3::borrar() {
	gotoxi(x, y);
	std::cout << "\033[0m";
	std::cout << "\033[104m";
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
void pelota_3::rebote(class jugador_1& N3) {
	if (x >= N3.X() && x < N3.X() + 5 && y >= N3.Y() && y <= N3.Y() + 2) {
		direccion = -direccion;
	}
}
void pelota_3::Puntos(class jugador_1& N3, class referi& R) {
	if (x >= N3.X() && x < N3.X() + 5 && y >= N3.Y() && y <= N3.Y() + 2) {
		acumulador += 1;

		if (acumulador == 3) {
			N3.PUNTOS_GANADOS();
			acumulador = 0;
			borrar();
			R.alzar_mano();
			y = rand() % 12 + 11;
			x = 15;
		}
	}
}

void pelota_3::Menos(class jugador_1& N3, class referi& R) {
	if (x > 65) {
		N3.PUNTOS_PERDIDOS();
		borrar();
		R.dibujar_referi();
		y = rand() % 12 + 11;
		x = 15;
	}
}
