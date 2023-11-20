#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "juego.h"  
#include <stdio.h>
#include "copa.h"
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
    int option, resultado, resultado_2, resultado_3;
    int Seleccion;
    presentacion();
    gotoxi(24, 5 + 17);
    jugador_1 N(65, 12, 0, 0);
    jugador_2 N2(65, 12, 0, 0);
    jugador_3 N3(65, 12, 0, 0);
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
            gotoxi(35, 18); printf("Presione enter para comenzar: ");
            char empezar = getch();
            if (empezar == 13) {
                system("cls");
                ocultarCursor();
                //InicializarCampoJuego(campoJuego);
                //ImprimirCampoJuego(campoJuego);
                N.pintar();
                pelota P(10, 12, 1, 0);
                bool game_over = false;
                while (!game_over) {
                    P.Puntos(N);
                    N.dibujar_puntajes();
                    P.mover();
                    P.rebote(N);
                    N.mover();
                    P.Menos(N);
                    pintar_limites();
                    resultado = N.RESULTADO();
                    if ( resultado >= 60) {
                        game_over = true;
                    }
                }
                if (resultado >= 60) {
                    system("cls");
                    tabla_Peru();
                    tabla_Argentina();
                    tabla_Ecuador();
                    tabla_Bolivia();
                    pintarLineas_2();
                    gotoxi(35, 18); printf("Presione enter para comenzar: ");
                    char empezar = getch();
                    if (empezar == 13) {
                        system("cls");
                        ocultarCursor();
                        //InicializarCampoJuego(campoJuego);
                        //ImprimirCampoJuego(campoJuego);
                        N2.pintar();
                        pelota_2 P2(10, 12, 1, 0);
                        bool game_over = false;
                        while (!game_over) {
                            P2.Puntos_2(N2);
                            N2.dibujar_puntajes();
                            P2.mover();
                            P2.rebote(N2);
                            N2.mover();
                            P2.Menos(N2);
                            pintar_limites();
                            resultado_2 = N2.RESULTADO();
                            if (resultado_2 >= 60) {
                                game_over = true;
                            }
                        }
                    }
                }
                if (resultado_2 >= 60) {
                    system("cls");
                    tabla_Peru();
                    tabla_Ecuador();
                    pintarLineas_2();
                    gotoxi(35, 18); printf("Presione enter para comenzar: ");
                    char empezar = getch();
                    if (empezar == 13) {
                        system("cls");
                        ocultarCursor();
                        //InicializarCampoJuego(campoJuego);
                        //ImprimirCampoJuego(campoJuego);
                        N3.pintar();
                        pelota_3 P3(10, 12, 1, 0);
                        bool game_over = false;
                        while (!game_over) {
                            P3.Puntos(N3);
                            N3.dibujar_puntajes();
                            P3.mover();
                            P3.rebote(N3);
                            N3.mover();
                            P3.Menos(N3);
                            pintar_limites();
                            resultado_3 = N3.RESULTADO();
                            if (resultado_3 >= 60) {
                                game_over = true;
                            }
                        }
                    }

                }
            }
        }
        system("cls");
        copa();

        system("pause>0");
        return 0;
    }
}

