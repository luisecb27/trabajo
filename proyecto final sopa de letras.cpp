// luis eduardo carrasco bonilla


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <time.h>
#include "motorjuegofacil.h"
#include "motorDeJuego2 medio.h"
#include "motorDeJuego3 dificil.h"
#include "guardado.h"


using namespace std;


void gotoxy ( int x , int y){                                              // se encarga de acomodar las oraciones
HANDLE hcon = GetStdHandle (STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
 SetConsoleCursorPosition(hcon, dwPos);
}

int ayuda(){
	fstream archivo;
	
	archivo.open("AYUDA.txt", ios::in);
	if(!archivo){
		cout<<endl<<"Error de apertura"<<endl;
		return -1;
	}

while(!archivo.eof()){
	system("cls");
	string tp;
	while(getline(archivo,  tp)){
		cout <<  tp  <<"\n";
	}
}

archivo.close();
}

int main (int argc, char** argv) { // se encarga de mostrar el menu para el usuario
system ("color F1");

int op;
do{
	    system("Cls");
	    gotoxy (33,5);cout<<"sopa de letras :)";
	    gotoxy (33,6);cout<< "0... ayuda.";
	    gotoxy (33,6);cout<<"1... sopa de letras nivel facil. ";
	    gotoxy (33,7);cout<<"2... sopa de letras nivel  avanzado.";
	    gotoxy (33,8);cout<<"3... sopa de letras nivel  Hardcore.";
	    gotoxy (33,9);cout<<"4... marcador de los mejores tiempos";
	    gotoxy (33,10);cout<<"5...salir del juego."<<endl<<endl;
	    gotoxy (33,12);cout<<"opcion =>";
	    cin>>op;
	    switch(op){
	    	case 0:   
	    	ayuda();
	    	system("pause");
	    	break;
	    	
	    	case 1:   
	    	sopadeletrasnivelfacil();
	    	system("pause");
	    	break;
	    	
	    	case 2:
	    		sopaMedia;
	    		system("pause");
	    		break;
	    		
	    	case 3:
			    sopaDificil();
				system("pause");
				break;
			
			case 4:
			    registros();
				system("pause");
				break;
			
			default:
			 cout<<"gracias por jugar u.u"<<endl;			
		}
		
		
} while(op!=5);

 return 0;
    }


