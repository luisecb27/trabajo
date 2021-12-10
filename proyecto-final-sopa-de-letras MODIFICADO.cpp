// luis eduardo carrasco bonilla

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <time.h>
#include<windows.h>
#include<string.h>
#include<fstream>
//#include "motorjuegofacil.h"
//#include "motorDeJuego2 medio.h"//Motor faltante ======= horzontal,vertical,diagonal
//#include "motorDeJuego3 dificil.h"//Motor faltante ======= horzontal,vertical,diagonal,al revez
//#include "guardado.h"


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
	    gotoxy (33,6);printf("1... ayuda.");
	    gotoxy (33,6);printf("1... sopa de letras nivel facil. ");
	    gotoxy (33,7);printf("2... sopa de letras nivel  avanzado.");
	    gotoxy (33,8);printf("3... sopa de letras nivel  Hardcore.");
	    gotoxy (33,10);printf("4... salir del juego.");
	    gotoxy (33,12);printf("opcion =>");
		scanf("%d",&op);
	    switch(op){
	    	case 1:
	    	//sopadeletrasnivelfacil();//no existe
	    	ayuda();
	    	system("pause");
	    	break;
	    	
	    	case 2:
	    		//sopaMedia();
	    		system("pause");
	    		break;
	    		
	    	case 3:
			    //sopaDificil();
				system("pause");
				break;
			
			case 4:
			    //registros();
				system("pause");
				break;
			
			default:
			 printf("Gracias por jugar");		
		}
		
		
} while(op!=5);

 return 0;
    }


