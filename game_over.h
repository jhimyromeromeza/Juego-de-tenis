#include <stdio.h>

void Game_Over() {
	system("cls");
	printf("GAME OVER");
	std::cout << "Presiona Enter para volver al men� principal...";
	std::cin.ignore(); // Ignorar cualquier entrada anterior
	std::cin.get();    // Esperar a que el usuario presione Enter
	system("cls");
}
