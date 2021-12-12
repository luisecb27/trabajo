#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;


void gotoxy_4(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);
}

int sopaDificil(){ 
	//string con letras
	string letras_sopa[10]={"pato","casa","dedo","luis","mesa","solo","copa","caro","pera","risa"};
	
	system("Cls");
	system ("color F1");
	gotoxy_4(20,2);printf("NIVEL DIFICIL");
	
	gotoxy_4(36,13);printf("p");
	gotoxy_4(36,12);printf("a");
	gotoxy_4(36,11);printf("t");
	gotoxy_4(36,10);printf("o");
	//
	gotoxy_4(26,5);printf("c");
	gotoxy_4(28,5);printf("a");
	gotoxy_4(30,5);printf("s");
	gotoxy_4(32,5);printf("a");
	//
	gotoxy_4(30,14);printf("d");
	gotoxy_4(32,14);printf("e");
	gotoxy_4(34,14);printf("d");
	gotoxy_4(36,14);printf("o");
	//
	gotoxy_4(30,9);printf("l");
	gotoxy_4(28,8);printf("u");
	gotoxy_4(26,7);printf("i");
	gotoxy_4(24,6);printf("s");
	//
	gotoxy_4(26,12);printf("m");
	gotoxy_4(24,12);printf("e");
	gotoxy_4(22,12);printf("s");
	gotoxy_4(20,12);printf("a");
	//
	gotoxy_4(24,7);printf("s");
	gotoxy_4(24,8);printf("o");
	gotoxy_4(24,9);printf("l");
	gotoxy_4(24,10);printf("o");
	//
	gotoxy_4(26,8);printf("c");
	gotoxy_4(28,9);printf("o");
	gotoxy_4(30,10);printf("p");
	gotoxy_4(32,11);printf("a");
	//
	gotoxy_4(20,8);printf("c");
	gotoxy_4(20,7);printf("a");
	gotoxy_4(20,6);printf("r");
	gotoxy_4(20,5);printf("o");
	//
	gotoxy_4(26,11);printf("p");
	gotoxy_4(28,11);printf("e");
	gotoxy_4(30,11);printf("r");
	gotoxy_4(32,11);printf("a");
	//
	gotoxy_4(32,6);printf("r");
	gotoxy_4(34,6);printf("i");
	gotoxy_4(36,6);printf("s");
	gotoxy_4(38,6);printf("a");
	
	//Letras completar
	gotoxy_4(38,5);printf(":)");
	gotoxy_4(34,10);printf("z");
	gotoxy_4(32,10);printf("l");
	gotoxy_4(28,10);printf("h");
	gotoxy_4(38,8);printf("a");
	gotoxy_4(36,8);printf("p");
	gotoxy_4(34,8);printf("i");
	gotoxy_4(32,8);printf("u");
	gotoxy_4(30,8);printf("y");
	gotoxy_4(38,7);printf("t");
	gotoxy_4(36,7);printf("r");
	gotoxy_4(34,7);printf("e");
	gotoxy_4(32,7);printf("w");
	gotoxy_4(30,7);printf("q");
	gotoxy_4(24,9);printf("l");
	gotoxy_4(22,5);printf("x");
	gotoxy_4(22,6);printf("g");
	gotoxy_4(22,7);printf("c");
	gotoxy_4(22,8);printf("w");
	gotoxy_4(22,9);printf("d");
	gotoxy_4(22,10);printf("p");
	gotoxy_4(22,11);printf("x");
	gotoxy_4(20,13);printf("z");
	gotoxy_4(22,13);printf("u");
	gotoxy_4(24,13);printf("c");
	gotoxy_4(26,13);printf("v");
	gotoxy_4(28,13);printf("e");
	gotoxy_4(30,13);printf("r");
	gotoxy_4(32,13);printf("k");
	gotoxy_4(34,13);printf("l");
	gotoxy_4(36,13);printf("p");
	gotoxy_4(38,13);printf("r");
	gotoxy_4(20,14);printf("x");
	gotoxy_4(22,14);printf("z");
	gotoxy_4(24,14);printf("o");
	gotoxy_4(26,14);printf("f");
	gotoxy_4(28,14);printf("z");
	gotoxy_4(38,14);printf("p");
	gotoxy_4(24,6);printf("s");
	gotoxy_4(26,6);printf("r");
	gotoxy_4(28,6);printf("t");
	gotoxy_4(30,6);printf("c");
	gotoxy_4(32,6);printf("r");
	gotoxy_4(26,9);printf("q");
	gotoxy_4(28,9);printf("o");
	gotoxy_4(30,9);printf("l");
	gotoxy_4(32,9);printf("m");
	gotoxy_4(34,9);printf("c");
	gotoxy_4(36,9);printf("d");
	gotoxy_4(38,9);printf("r");
	gotoxy_4(20,9);printf("o");
	gotoxy_4(20,10);printf("l");
	gotoxy_4(20,11);printf("r");
	gotoxy_4(24,5);printf("d");
	gotoxy_4(24,11);printf("o");
	gotoxy_4(26,10);printf("p");
	gotoxy_4(34,5);printf("r");
	gotoxy_4(36,5);printf("t");
	gotoxy_4(26,7);printf("i");
	gotoxy_4(28,7);printf("p");
	gotoxy_4(28,8);printf("c");
	gotoxy_4(26,8);printf("c");
	gotoxy_4(34,6);printf("i");
	gotoxy_4(36,6);printf("s");
	gotoxy_4(36,10);printf("o");
	gotoxy_4(38,10);printf("s");
	gotoxy_4(34,11);printf("p");
	gotoxy_4(36,11);printf("t");
	gotoxy_4(38,11);printf("d");
	gotoxy_4(28,12);printf("f");
	gotoxy_4(30,12);printf("s");
	gotoxy_4(32,12);printf("p");
	gotoxy_4(34,12);printf("m");
	gotoxy_4(36,12);printf("a");
	gotoxy_4(38,12);printf("d");
	gotoxy_4(20,9);printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	//
	
	int intentos=3;
	string palabra="";

	while(intentos!=0){
		gotoxy_4(20,30);printf("Ingrese palabra :");
		gotoxy_4(20,31);getline(cin,palabra);
		
		if(palabra=="pato" || palabra=="casa" || palabra=="dedo"|| palabra=="luis"|| palabra=="mesa"|| palabra=="solo"|| palabra=="copa"|| palabra=="caro"|| palabra=="pera"|| palabra=="risa"){
				gotoxy_4(20,32);printf("Palabra      Correcta");
				gotoxy_4(20,33);printf("Intentos:%d",intentos);
		}else{
				intentos=intentos-1;
				gotoxy_4(20,32);printf("Palabra no encontrada");
				gotoxy_4(20,33);printf("Intentos:%d",intentos);
			}	
	}
	gotoxy_4(20,34);printf("Game Over :( HAS TERMINADO EL ULTIMO VALES MIL TQM");
}
