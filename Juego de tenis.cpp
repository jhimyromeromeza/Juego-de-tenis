#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <windows.h>
#include "campo.h"
#include "juego.h"  
#include <stdio.h>
#include "instruciones.h";
#include "game_over.h"
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
    int option, puntuacion1;
    int resultado_2, resultado, resultado_3;
    int Seleccion;
    char* saber;
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
            if (Seleccion == 1) { saber = "Peru     "; }
            if (Seleccion == 2) { saber = "Argentina"; }
            if (Seleccion == 3) { saber = "Paraguay "; }
            if (Seleccion == 4) { saber = "Brazil   "; }
            if (Seleccion == 5) { saber = "Venezuela"; }
            if (Seleccion == 6) { saber = "Ecuador  "; }
            if (Seleccion == 7) { saber = "Bolivia  "; }
            if (Seleccion == 8) { saber = "Colombia "; }
            if (Seleccion == 9) { saber = "Uruguay  "; }
            if (Seleccion == 10) { saber = "Chile    "; }
            if (Seleccion >= 1 && Seleccion <= 10) {
                system("cls");
                gotoxi(37, 9);  printf("PAISES    | PT | PJ |");
                gotoxi(37, 10); printf("%s | 0  | 0  |", saber);
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
                    std::cout << "\033[104m";
                    ocultarCursor();
                    mostrarcampo();
                    std::cout << "\033[0m";
                    std::cout << "\033[104m";
                    jugador_1 N(65, 12, 0, 0);
                    pelota P(10, 12, 1, 0);
                    N.pintar();
                    P.pintar();
                    bool game_over = false;
                    while (!game_over) {
                        R.dibujar_referi();
                        P.Puntos(N, R);
                        N.dibujar_puntajes();
                        P.mover();
                        P.rebote(N);
                        N.mover();
                        P.Menos(N);
                        pintar_limites();
                        resultado = N.RESULTADO();
                        puntuacion1 = N.RESULTADO2();
                        if (resultado >= 60) {
                            game_over = true;
                            std::cout << "\033[0m";
                        }
                        else if (puntuacion1 == 60) {
                            game_over = true;
                            std::cout << "\033[0m";
                            Game_Over();
                        }
                    }
                    if (resultado >= 60) {
                        system("cls");
                        gotoxi(37, 9);  printf("PAISES    | PT | PJ |");
                        gotoxi(37, 10); printf("%s | %d | 1  |", saber, resultado);
                        gotoxi(37, 11); printf("Uruguay   | 60 |  0 |");
                        gotoxi(37, 12); printf("Argentina | 60 |  0 |");
                        gotoxi(37, 13); printf("Brazil    | 60 |  0 |");
                        gotoxi(32, 18); printf("Presione enter para comenzar: ");
                        char empezar = getch();
                        if (empezar == 13) {
                            system("cls");
                            std::cout << "\033[104m";
                            ocultarCursor();
                            mostrarcampo();
                            std::cout << "\033[0m";
                            std::cout << "\033[104m";
                            jugador_1 N2(65, 12, 0, 0);
                            pelota_2 P2(10, 12, 1, 0);
                            N2.pintar();
                            bool game_over = false;
                            while (!game_over) {
                                R.dibujar_referi();
                                P2.Puntos_2(N2, R);
                                N2.dibujar_puntajes();
                                P2.mover();
                                P2.rebote(N2);
                                N2.mover();
                                P2.Menos(N2);
                                pintar_limites();
                                resultado_2 = N2.RESULTADO();
                                puntuacion1 = N2.RESULTADO2();
                                if (resultado_2 >= 60) {
                                    game_over = true;
                                    std::cout << "\033[0m";
                                }
                                else if (puntuacion1 == 60) {
                                    game_over = true;
                                    std::cout << "\033[0m";
                                    Game_Over();
                                }
                            }
                        }
                    }
                    if (resultado_2 == 60) {
                        system("cls");
                        gotoxi(37, 9);  printf("PAISES    | PT | PJ |");
                        gotoxi(37, 10); printf("%s |%d| 2  |", saber, resultado_2 + 60);
                        gotoxi(37, 11); printf("Uruguay   |120| 2 |");
                        gotoxi(32, 18); printf("Presione enter para comenzar: ");
                        char empezar = getch();
                        if (empezar == 13) {
                            system("cls");
                            std::cout << "\033[104m";
                            ocultarCursor();
                            mostrarcampo();
                            std::cout << "\033[0m";
                            std::cout << "\033[104m";
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
                                puntuacion1 = N3.RESULTADO2();
                                if (resultado_3 >= 60) {
                                    game_over = true;
                                    std::cout << "\033[0m";
                                }
                                else if (puntuacion1 == 60) {
                                    game_over = true;
                                    std::cout << "\033[0m";
                                    Game_Over();
                                }
                            }
                        }
                    }
                }
            }
            premio();
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

