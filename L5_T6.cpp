/*
6.** Написать все функции в отдельных файлах в одном пространстве имён, вызвать их на исполнение в основном файле программы используя
    указатели на функции.
*/
#include <iostream>
#include <stdarg.h>
#include <cstdlib>
#include "FirstFunction.h"
#include "SecondFunction.h"
#include "ThirdFunction.h"
#include "FourthFunction.h"
#include "FifthFunction.h"
#include "changeMas.h"
using namespace std;
const int sizearr=8;
void FirstFunction(int *mas_1, int sizearr);
void SecondFunction(int *mas_1, int sizearr);
bool ThirdFunction(int *mas_1, int sizearr);
void FourthFunction(int *mas_1, int n, int sizearr);
void FifthFunction(int sizearr, int *mas_1, ...);
void changeMas(int *mas_1, int sizearr);
int main()
{
int mas_1[sizearr]={1,0,1,0,1,0,1,0};
int n = 2;
void (*ptr_func)(int *, int);
void (*ptr_func2)(int *, int);
bool (*ptr_func3)(int *, int);
void (*ptr_func4)(int *, int , int );
void (*ptr_func5)(int , int *, ...);
void (*ptr_changeMas)(int *, int);
ptr_func = FirstFunction;
ptr_func2 = SecondFunction;
ptr_changeMas = changeMas;
ptr_func3 = ThirdFunction;
ptr_func4= FourthFunction;
ptr_func5= FifthFunction;

ptr_func(mas_1, sizearr);
ptr_func2(mas_1, sizearr);
ptr_changeMas(mas_1, sizearr);
cout<<ptr_func3(mas_1, sizearr)<<endl;
ptr_func4(mas_1, n, sizearr);
ptr_func5(sizearr, mas_1, 1,0,1,0,1,0,1,0);
return 0;
}



