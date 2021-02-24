//Task №2
// Created by Aleksandr Kuzmenko
#include <iostream>
#include <stdio.h>

using namespace std;
//Задание №4
struct game
{
int pole[3][3] = {0};
enum value_game {0,1,2}; //Где 0 - пустое поле, 1-крестик, 2 - нолик
} game;
//Задание №5
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
int pole1_1 :2;  //Два бита необходимо, что б определить как определяется поле.
int pole1_2 :2;  // Ведь может быть всего три состояния: 1. Поле пустое. 2. Крестик. 3. Нолик
int pole1_3 :2;  // Максимальное число 2, а 2 занимает 2 бита.
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
//Задание №1
int a=10;
char b='b';
long c=35677;
short d=20;
float e = 3.1415;
double f =2.5;
unsigned int g=64000;
// По примеру unsigned можно объявить переменные, с перечисленными типами
//Задание №2
enum game {0,1,2};
enum game {empty_pole, cross, zero};
//Задание №3
int game[3][3]={0};
}
