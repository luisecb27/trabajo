//Motor de juego 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;


void gotoxy_3(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);
}

int sopaAvanzada(){ 
	//string con letras
	string letras_sopa[10]={"taco","casa","dado","saul","alma","mala","rata","gato","pera","piso"};
	
	system("Cls");
	system ("color F1");
	gotoxy_3(20,2);printf("NIVEL MEDIO");
	
	
	gotoxy_3(20,5);printf("t");
	gotoxy_3(20,6);printf("a");
	gotoxy_3(20,7);printf("c");
	gotoxy_3(20,8);printf("o");
	//
	gotoxy_3(26,11);printf("c");
	gotoxy_3(28,11);printf("a");
	gotoxy_3(30,11);printf("s");
	gotoxy_3(32,11);printf("a");
	//
	gotoxy_3(38,5);printf("d");
	gotoxy_3(38,6);printf("a");
	gotoxy_3(38,7);printf("d");
	gotoxy_3(38,8);printf("o");
	//
	gotoxy_3(26,6);printf("s");
	gotoxy_3(28,7);printf("a");
	gotoxy_3(30,8);printf("u");
	gotoxy_3(32,9);printf("l");
	//
	gotoxy_3(22,8);printf("a");
	gotoxy_3(24,9);printf("l");
	gotoxy_3(26,10);printf("m");
	gotoxy_3(28,11);printf("a");
	//
	gotoxy_3(22,11);printf("m");
	gotoxy_3(24,12);printf("a");
	gotoxy_3(26,13);printf("l");
	gotoxy_3(28,14);printf("a");
	//
	gotoxy_3(22,14);printf("r");
	gotoxy_3(24,14);printf("a");
	gotoxy_3(26,14);printf("t");
	gotoxy_3(28,14);printf("a");
	//
	gotoxy_3(32,10);printf("g");
	gotoxy_3(34,11);printf("a");
	gotoxy_3(36,12);printf("t");
	gotoxy_3(38,13);printf("o");
	//
	gotoxy_3(26,5);printf("p");
	gotoxy_3(28,5);printf("e");
	gotoxy_3(30,5);printf("r");
	gotoxy_3(32,5);printf("a");
	//
	gotoxy_3(30,7);printf("p");
	gotoxy_3(32,7);printf("i");
	gotoxy_3(34,7);printf("s");
	gotoxy_3(36,7);printf("o");
	
	//Letras completar
	gotoxy_3(36,14);printf("h");
	gotoxy_3(34,14);printf("d");
	gotoxy_3(32,14);printf("c");
	gotoxy_3(30,14);printf("d");
	gotoxy_3(26,12);printf("v");
	gotoxy_3(22,12);printf("e");
	gotoxy_3(20,12);printf("f");
	gotoxy_3(32,8);printf("t");
	gotoxy_3(34,8);printf("q");
	gotoxy_3(36,8);printf("m");
	gotoxy_3(34,10);printf("w");
	gotoxy_3(30,10);printf("j");
    gotoxy_3(28,10);printf("p");	
	gotoxy_3(24,10);printf("a");
	gotoxy_3(24,8);printf("y");
	gotoxy_3(24,7);printf("x");
	gotoxy_3(22,5);printf("x");
	gotoxy_3(22,6);printf("g");
	gotoxy_3(22,7);printf("a");
	gotoxy_3(22,8);printf("a");
	gotoxy_3(22,9);printf("d");
	gotoxy_3(22,10);printf("p");
	gotoxy_3(22,11);printf("m");
	gotoxy_3(20,13);printf("z");
	gotoxy_3(22,13);printf("u");
	gotoxy_3(24,13);printf("c");
	gotoxy_3(26,13);printf("l");
	gotoxy_3(28,13);printf("e");
	gotoxy_3(30,13);printf("r");
	gotoxy_3(32,13);printf("k");
	gotoxy_3(34,13);printf("l");
	gotoxy_3(36,13);printf("q");
	gotoxy_3(38,13);printf("o");
	gotoxy_3(20,14);printf("x");
	gotoxy_3(22,14);printf("r");
	gotoxy_3(24,14);printf("a");
	gotoxy_3(26,14);printf("t");
	gotoxy_3(28,14);printf("a");
	gotoxy_3(38,14);printf("a");
	gotoxy_3(24,6);printf("z");
	gotoxy_3(26,6);printf("s");
	gotoxy_3(28,6);printf("t");
	gotoxy_3(30,6);printf("c");
	gotoxy_3(32,6);printf("y");
	gotoxy_3(26,9);printf("m");
	gotoxy_3(28,9);printf("l");
	gotoxy_3(30,9);printf("a");
	gotoxy_3(32,9);printf("l");
	gotoxy_3(34,9);printf("c");
	gotoxy_3(36,9);printf("d");
	gotoxy_3(38,9);printf("r");
	gotoxy_3(20,9);printf("o");
	gotoxy_3(20,10);printf("l");
	gotoxy_3(20,11);printf("r");
	gotoxy_3(24,5);printf("d");
	gotoxy_3(24,11);printf("o");
	gotoxy_3(26,10);printf("m");
	gotoxy_3(34,5);printf("r");
	gotoxy_3(36,5);printf("t");
	gotoxy_3(26,7);printf("p");
	gotoxy_3(28,7);printf("a");
	gotoxy_3(28,8);printf("t");
	gotoxy_3(26,8);printf("t");
	gotoxy_3(34,6);printf("p");
	gotoxy_3(36,6);printf("z");
	gotoxy_3(36,10);printf("p");
	gotoxy_3(38,10);printf("s");
	gotoxy_3(34,11);printf("a");
	gotoxy_3(36,11);printf("w");
	gotoxy_3(38,11);printf("r");
	gotoxy_3(28,12);printf("f");
	gotoxy_3(30,12);printf("s");
	gotoxy_3(32,12);printf("p");
	gotoxy_3(34,12);printf("m");
	gotoxy_3(36,12);printf("t");
	gotoxy_3(38,12);printf("a");
	gotoxy_3(20,9);printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	//
	
	int intentos=3;
	string palabra="";

	while(intentos!=0){
		gotoxy_3(20,30);printf("Ingrese palabra encontrada :");
		gotoxy_3(20,31);getline(cin,palabra);
		
		if(palabra=="taco" || palabra=="casa" || palabra=="dado"|| palabra=="saul"|| palabra=="alma"|| palabra=="mala"|| palabra=="rata"|| palabra=="gato"|| palabra=="pera"|| palabra=="piso"){
				gotoxy_3(20,32);printf("Palabra      Correcta");
				gotoxy_3(20,33);printf("Intentos:%d",intentos);
		}else{
				intentos=intentos-1;
				gotoxy_3(20,32);printf("Palabra no encontrada");
				gotoxy_3(20,33);printf("Intentos:%d",intentos);
			}	
	}
	gotoxy_3(20,34);printf("Game Over :(");
}
