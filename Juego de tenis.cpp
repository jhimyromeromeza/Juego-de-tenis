#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "campo.h"
#include "juego.h"  
#include <stdio.h>
#include "instruciones.h";
#include "copa.h"
#include "creditos.h"

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
    jugador_1 N(65, 12, 0, 0);
    referi R(38, 5);
    
    do {
        // Mostrar el menú
        presentacion();
        gotoxi(24, 5 + 17);
        printf("Elige una opcion: ");
        cin >> option;

        // Procesar la opción seleccionada
        switch (option) {
        case 1:
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
                gotoxi(37, 9);  printf("PAISES    | PT | PJ |");
                gotoxi(37, 10); printf("%d         | 0  | 0  |", Seleccion);
                gotoxi(37, 11); printf("Uruguay   | 0  |  0 |");
                gotoxi(37, 12); printf("Argentina | 0  |  0 |");
                gotoxi(37, 13); printf("Brazil    | 0  |  0 |");
                gotoxi(37, 14); printf("Chile     | 0  |  0 |");
                gotoxi(37, 15); printf("Venezuela | 0  |  0 |");
                gotoxi(37, 16); printf("Ecuador   | 0  |  0 |");
                gotoxi(37, 17); printf("Colombia  | 0  |  0 |");
                gotoxi(37, 18); printf("Paraguay  | 0  |  0 |");
                gotoxi(37, 19); printf("Bolivia   | 0  |  0 |");
                gotoxi(32, 22); printf("Presione enter para comenzar: ");
                char empezar = getch();
                if (empezar == 13) {
                    system("cls");
                    ocultarCursor();
                    mostrarcampo();
                    pelota P(10, 12, 1, 0);
                    jugador_1 N2(65, 12, 0, 0);
                    N2.pintar();
                    bool game_over = false;
                    while (!game_over) {
                        R.dibujar_referi();
                        P.Puntos(N2, R);
                        N2.dibujar_puntajes();
                        P.mover();
                        P.rebote(N2);
                        N2.mover();
                        P.Menos(N2);
                        pintar_limites();
                        resultado = N2.RESULTADO();
                        if (resultado >= 60) {
                            game_over = true;
                        }
                    }
                    if (resultado >= 60) {
                        system("cls");
                        system("cls");
                        gotoxi(37, 9);  printf("PAISES    | PT | PJ |");
                        gotoxi(37, 10); printf("%d         | 0  | 0  |", Seleccion);
                        gotoxi(37, 11); printf("Uruguay   | 0  |  0 |");
                        gotoxi(37, 12); printf("Argentina | 0  |  0 |");
                        gotoxi(32, 18); printf("Presione enter para comenzar: ");
                        char empezar = getch();
                        if (empezar == 13) {
                            system("cls");
                            ocultarCursor();
                            mostrarcampo();
                            N.pintar();
                            pelota_2 P2(10, 12, 1, 0);
                            bool game_over = false;
                            while (!game_over) {
                                R.dibujar_referi();
                                P2.Puntos_2(N, R);
                                N.dibujar_puntajes();
                                P2.mover();
                                P2.rebote(N);
                                N.mover();
                                P2.Menos(N);
                                pintar_limites();
                                resultado_2 = N.RESULTADO();
                                if (resultado_2 >= 60) {
                                    game_over = true;
                                }
                            }
                        }
                    }
                    if (resultado_2 == 60) {
                        system("cls");
                        tabla_Peru();
                        tabla_Ecuador();
                        pintarLineas_2();
                        gotoxi(35, 18); printf("Presione enter para comenzar: ");
                        char empezar = getch();
                        if (empezar == 13) {
                            system("cls");
                            ocultarCursor();
                            mostrarcampo();
                            jugador_1 N3(65, 12, 0, 0);
                            pelota_3 P3(10, 12, 1, 0);
                            N3.pintar();
                            bool game_over = false;
                            while (!game_over) {
                                R.dibujar_referi();
                                P3.Puntos(N3, R);
                                N3.dibujar_puntajes();
                                P3.mover();
                                P3.rebote(N3);
                                N3.mover();
                                P3.Menos(N3, R);
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
            break;
        case 2:
            system("cls");
            reglas();
            break;
        case 3:
            system("cls");
            creditos(); 
            break;
        case 4:
            std::cout << "Saliendo del juego. ¡Hasta luego!\n";
            break;
        default:
            std::cout << "Opción no válida. Inténtalo de nuevo.\n";
            break;
        }
    } while (option != 4);

    
    system("pause>0");
    return 0;
}

