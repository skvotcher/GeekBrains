/*
5.** Написать функцию из первого задания так, чтобы она работала с аргументом переменной длины.
*/
#include <iostream>
#include <stdlib.h>
#include <stdarg.h>
using namespace std;
const int sizearr=5;
void FifthFunction(int sizearr, bool *mas_2, ...);
int main()
{
    bool mas_2[sizearr]={0};
FifthFunction(sizearr, mas_2, 0,1,0,1,0);
    return 0;
}
void FifthFunction(int sizearr, bool *mas_2, ...)
{
    va_list list;
    va_start(list, sizearr);
    for(int i=0; i<sizearr; i++)
    {
        mas_2[i]= !(va_arg(list, int));
    }
    va_end(list);
}
