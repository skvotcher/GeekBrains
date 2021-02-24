//Task ¹2
// Created by Aleksandr Kuzmenko
#include <iostream>
#include <stdio.h>

using namespace std;
//Çàäàíèå ¹4
struct game
{
int pole[3][3] = {0};
enum value_game {0,1,2}; //Ãäå 0 - ïóñòîå ïîëå, 1-êðåñòèê, 2 - íîëèê
} game;
//Çàäàíèå ¹5
union value_pole
{
  short i;
  char j;
};
union value_pole value_pole;
value_pole.i=0;
value_pole.j='X';
struct game
{
int pole1_1 :2;  //Äâà áèòà íåîáõîäèìî, ÷òî á îïðåäåëèòü êàê îïðåäåëÿåòñÿ ïîëå.
int pole1_2 :2;  // Âåäü ìîæåò áûòü âñåãî òðè ñîñòîÿíèÿ: 1. Ïîëå ïóñòîå. 2. Êðåñòèê. 3. Íîëèê
int pole1_3 :2;  // Ìàêñèìàëüíîå ÷èñëî 2, à 2 çàíèìàåò 2 áèòà.
int pole2_1 :2;
int pole2_2 :2;
int pole2_3 :2;
int pole3_1 :2;
int pole3_2 :2;
int pole3_3 :2;
};
int main()
{
setlocale(LC_ALL, "Russian");
printf("%d\n", sizeof(int));
printf("%d\n", sizeof(char));
printf("%d\n", sizeof(long));
printf("%d\n", sizeof(float));
printf("%d\n", sizeof(double));
//Çàäàíèå ¹1
int a=10;
char b='b';
long c=35677;
short d=20;
float e = 3.1415;
double f =2.5;
unsigned int g=64000;
// Ïî ïðèìåðó unsigned ìîæíî îáúÿâèòü ïåðåìåííûå, ñ ïåðå÷èñëåííûìè òèïàìè
//Çàäàíèå ¹2
enum game {0,1,2};
enum game {empty_pole, cross, zero};
//Çàäàíèå ¹3
int game[3][3]={0};
}
