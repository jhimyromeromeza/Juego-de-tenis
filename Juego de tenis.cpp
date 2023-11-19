#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "juego.h"  
#include <stdio.h>
#include "escenarios.h"
#include "Elegir_pais.h"
#include "tabla_de_posiciones.h"

using namespace System;
using namespace std;


void presentacion() {
    std::cout << "\033[32m";
    gotoxi(21, 5);
    cout << " ______  ____    __  __  ______  ____       " << endl;
    gotoxi(21, 5 + 1);
    cout << "/\\__  _\\/\\  _`\\ /\\ \\/\\ \\/\\__  _\\/\\  _`\\     " << endl;
    gotoxi(21, 5 + 2);
    cout << "\\/_/\\ \\/\\ \\ \\L\\_\\ \\ `\\\\ \\/_/\\ \\/\\ \\,\\L\\_   " << endl;
    gotoxi(21, 5 + 3);
    cout << "   \\ \\ \\ \\ \\  _\\L\\ \\ , ` \\ \\ \\ \\ \\/_\\__ \\   " << endl;
    gotoxi(21, 5 + 4);
    cout << "    \\ \\ \\ \\ \\ \\L\\ \\ \\ \\`\\ \\ \\_\\ \\__/\\ \\L\\ \\ " << endl;
    gotoxi(21, 5 + 5);
    cout << "     \\ \\_\\ \\ \\____/\\ \\_\\ \\_\\/\\_____\\ `\\____\\ " << endl;
    gotoxi(21, 5 + 6);
    cout << "      \\/_/  \\/___/  \\/_/\\/_/\\/_____/\\/_____/ " << endl;
    gotoxi(21, 5 + 7);
    std::cout << "\033[0m";
    cout << "" << endl;
    gotoxi(24, 5 + 8);
    cout << "+---------------------------------+" << endl;
    gotoxi(24, 5 + 9);
    cout << "|         Menú de opciones        |" << endl;
    gotoxi(24, 5 + 10);
    cout << "|---------------------------------|" << endl;
    gotoxi(24, 5 + 11);
    cout << "| 1. Jugar                        |" << endl;
    gotoxi(24, 5 + 12);
    cout << "| 2. Opcion 2                     |" << endl;
    gotoxi(24, 5 + 13);
    cout << "| 3. Opcion 3                     |" << endl;
    gotoxi(24, 5 + 14);
    cout << "| 4. Opcion 4                     |" << endl;
    gotoxi(24, 5 + 15);
    cout << "| 5. Salir                        |" << endl;
    gotoxi(24, 5 + 16);
    cout << "+---------------------------------+" << endl;
}

int main() {
    int option;
    int Seleccion;
    presentacion();
    gotoxi(24, 5 + 17);
    printf("Elige una opcion: ");
    cin >> option;


    if (option == 1) {
        system("cls");
        Peru();
        Argentina();
        Paraguay();
        Brazil();
        Venezuela();
        Ecuador();
        Bolivia();
        Colombia();
        Uruguay();
        Chile();
        gotoxi(24, 5 + 17);
        printf("Elegir a tu pais: ");
        cin >> Seleccion;
        if (Seleccion >= 1 && Seleccion <= 10) {
            system("cls");
            tabla_Peru();
            tabla_Argentina();
            tabla_Paraguay();
            tabla_Brazil();
            tabla_Venezuela();
            tabla_Ecuador();
            tabla_Bolivia();
            tabla_Colombia();
            tabla_Uruguay();
            tabla_Chile();
            pintarLineas();
            char empezar = getch();
            if (empezar == 13) {
                system("cls");
                ocultarCursor();
                jugador_1 N(65, 12, 3);
                InicializarCampoJuego(campoJuego);
                ImprimirCampoJuego(campoJuego);
                N.pintar();
                N.pintar_vidas();
                pelota P(10, 12, 1);
                bool game_over = false;
                while (true) {
                    P.mover();
                    P.rebote(N);
                    N.mover();
                    pintar_limites();
                }
            }
        }

        system("pause>0");
        return 0;
    }
}

