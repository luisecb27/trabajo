// luis eduardo carrasco bonilla

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string.h>
#include "motorjuegofacil.h"
#include "motorDeJuego2 medio.h" // MOTOR NIVEL 2
//#include "motorDeJuego3 dificil.h"//Motor faltante ======= horzontal,vertical,diagonal,al revez


using namespace std;

void gotoxy(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);
}

int ayuda(){
	fstream archivo;
	
	archivo.open("AYUDA.txt", ios::in);
	if(!archivo){
		printf("Error de apertura");
		return -1;
	}
	
while(!archivo.eof()){
	system("cls");
	string tp;
	while(getline(archivo,tp)){
		printf("%s\n",tp.c_str());
	}
}

archivo.close();
}

int main (int argc, char** argv) { // se encarga de mostrar el menu para el usuario
system ("color F1");

int op;
do{
	    system("Cls");
	    gotoxy (33,5);printf("SOPA DE LETRAS:");
	    gotoxy (33,7);printf("1... ayuda.");
	    gotoxy (33,8);printf("2... sopa de letras nivel facil. ");
	    gotoxy (33,9);printf("3... sopa de letras nivel  avanzado.");
	    gotoxy (33,10);printf("4... sopa de letras nivel  Hardcore.");
	    gotoxy (33,11);printf("5... salir del juego.");
	    gotoxy (33,12);printf("opcion =>");
		scanf("%d",&op);
	    switch(op){
	    	case 1:
	    	ayuda(); // MENU QUE MANDA A TRAER LA EXXPLICACION DEL PROGRAMA
	    	system("pause");
	    	break;
	    	
	    	case 2:
	    		sopasdeletrasnivelfacil();
	    		system("pause");
	    		break;
	    		
	    	case 3:
			    sopaAvanzada();
				system("pause");
				break;
			
			case 4:
			    //sopaDificil();
				system("pause");
				break;
			
			default:
			 printf("Gracias por jugar, vuelve a intentar o sube de nivel crack");		
		}
		
		
} while(op!=5);

 return 0;
}


