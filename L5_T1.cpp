/*
1. Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ].
    Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 (** без применения if-else, switch, () ? :);
*/
#include <iostream>

using namespace std;
const int sizearr=5;
void isPrime(bool *mas_1, int sizearr);
int main()
{
 bool mas_1[sizearr]={1,0,1,0,1};
 isPrime(mas_1, sizearr);
    return 0;
}
void isPrime(bool *mas_1, int sizearr)
{
    for(int i=0; i<5; i++)
    {
        mas_1[i]= !(mas_1[i]);
    }
}
