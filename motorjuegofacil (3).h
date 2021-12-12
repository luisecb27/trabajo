//Motor de juego 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;


void gotoxy_2(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);
}

int sopasdeletrasnivelfacil(){ 
	//string con letras
	string letras_sopa[10]={"taco","casa","dado","saul","alma","mala","rata","gato","pera","piso"};
	
	system("Cls");
	system ("color F1");
	gotoxy_2(20,2);printf("NIVEL FACIL");
	//Cordenadas extremas == (20,5)    (58,5)
	//                       (20,25)   (58,25) 
	
	gotoxy_2(20,5);printf("t");
	gotoxy_2(20,6);printf("a");
	gotoxy_2(20,7);printf("c");
	gotoxy_2(20,8);printf("o");
	//
	gotoxy_2(26,11);printf("c");
	gotoxy_2(28,11);printf("a");
	gotoxy_2(30,11);printf("s");
	gotoxy_2(32,11);printf("a");
	//
	gotoxy_2(38,5);printf("d");
	gotoxy_2(38,6);printf("a");
	gotoxy_2(38,7);printf("d");
	gotoxy_2(38,8);printf("o");
	//
	gotoxy_2(30,14);printf("s");
	gotoxy_2(32,14);printf("a");
	gotoxy_2(34,14);printf("u");
	gotoxy_2(36,14);printf("l");
	//
	gotoxy_2(20,12);printf("a");
	gotoxy_2(22,12);printf("l");
	gotoxy_2(24,12);printf("m");
	gotoxy_2(26,12);printf("a");
	//
	gotoxy_2(30,8);printf("m");
	gotoxy_2(32,8);printf("a");
	gotoxy_2(34,8);printf("l");
	gotoxy_2(36,8);printf("a");
	//
	gotoxy_2(24,7);printf("r");
	gotoxy_2(24,8);printf("a");
	gotoxy_2(24,8);printf("t");
	gotoxy_2(24,10);printf("a");
	//
	gotoxy_2(28,10);printf("g");
	gotoxy_2(30,10);printf("a");
	gotoxy_2(32,10);printf("t");
	gotoxy_2(34,10);printf("o");
	//
	gotoxy_2(26,5);printf("p");
	gotoxy_2(28,5);printf("e");
	gotoxy_2(30,5);printf("r");
	gotoxy_2(32,5);printf("a");
	//
	gotoxy_2(30,7);printf("p");
	gotoxy_2(32,7);printf("i");
	gotoxy_2(34,7);printf("s");
	gotoxy_2(36,7);printf("o");
	
	//Letras completar
	gotoxy_2(24,9);printf("l");
	gotoxy_2(22,5);printf("x");
	gotoxy_2(22,6);printf("g");
	gotoxy_2(22,7);printf("c");
	gotoxy_2(22,8);printf("w");
	gotoxy_2(22,9);printf("d");
	gotoxy_2(22,10);printf("p");
	gotoxy_2(22,11);printf("x");
	gotoxy_2(20,13);printf("z");
	gotoxy_2(22,13);printf("u");
	gotoxy_2(24,13);printf("c");
	gotoxy_2(26,13);printf("v");
	gotoxy_2(28,13);printf("e");
	gotoxy_2(30,13);printf("r");
	gotoxy_2(32,13);printf("k");
	gotoxy_2(34,13);printf("l");
	gotoxy_2(36,13);printf("q");
	gotoxy_2(38,13);printf("r");
	gotoxy_2(20,14);printf("x");
	gotoxy_2(22,14);printf("z");
	gotoxy_2(24,14);printf("o");
	gotoxy_2(26,14);printf("f");
	gotoxy_2(28,14);printf("z");
	gotoxy_2(38,14);printf("p");
	gotoxy_2(24,6);printf("z");
	gotoxy_2(26,6);printf("r");
	gotoxy_2(28,6);printf("t");
	gotoxy_2(30,6);printf("c");
	gotoxy_2(32,6);printf("y");
	gotoxy_2(26,9);printf("q");
	gotoxy_2(28,9);printf("l");
	gotoxy_2(30,9);printf("a");
	gotoxy_2(32,9);printf("m");
	gotoxy_2(34,9);printf("c");
	gotoxy_2(36,9);printf("d");
	gotoxy_2(38,9);printf("r");
	gotoxy_2(20,9);printf("o");
	gotoxy_2(20,10);printf("l");
	gotoxy_2(20,11);printf("r");
	gotoxy_2(24,5);printf("d");
	gotoxy_2(24,11);printf("o");
	gotoxy_2(26,10);printf("p");
	gotoxy_2(34,5);printf("r");
	gotoxy_2(36,5);printf("t");
	gotoxy_2(26,7);printf("p");
	gotoxy_2(28,7);printf("p");
	gotoxy_2(28,8);printf("t");
	gotoxy_2(26,8);printf("t");
	gotoxy_2(34,6);printf("p");
	gotoxy_2(36,6);printf("z");
	gotoxy_2(36,10);printf("p");
	gotoxy_2(38,10);printf("s");
	gotoxy_2(34,11);printf("p");
	gotoxy_2(36,11);printf("w");
	gotoxy_2(38,11);printf("d");
	gotoxy_2(28,12);printf("f");
	gotoxy_2(30,12);printf("s");
	gotoxy_2(32,12);printf("p");
	gotoxy_2(34,12);printf("m");
	gotoxy_2(36,12);printf("k");
	gotoxy_2(38,12);printf("d");
	gotoxy_2(20,9);printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	//
	
	int intentos=3;
	string palabra="";

	while(intentos!=0){
		gotoxy_2(20,30);printf("Ingrese palabra :");
		gotoxy_2(20,31);getline(cin,palabra);
		
		if(palabra=="taco" || palabra=="casa" || palabra=="dado"|| palabra=="saul"|| palabra=="alma"|| palabra=="mala"|| palabra=="rata"|| palabra=="gato"|| palabra=="pera"|| palabra=="piso"){
				gotoxy_2(20,32);printf("Palabra      Correcta");
				gotoxy_2(20,33);printf("Intentos:%d",intentos);
		}else{
				intentos=intentos-1;
				gotoxy_2(20,32);printf("Palabra no encontrada");
				gotoxy_2(20,33);printf("Intentos:%d",intentos);
			}	
	}
	gotoxy_2(20,34);printf("Game Over :(");
}
