#include <iostream>
#include <stdio.h>
#include "pch.h"

using namespace System;
using namespace std;


void creditos() {
	system("cls");

	std::cout << "Presiona Enter para volver al menú principal...";
	std::cin.ignore(); // Ignorar cualquier entrada anterior
	std::cin.get();    // Esperar a que el usuario presione Enter
	system("cls");

}