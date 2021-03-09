
//2. Задать пустой целочисленный массив размером 8. Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22;

#include <iostream>
#include <stdlib.h>
using namespace std;
const int sizearr=8;
void arr_writer(int *arr, int sizearr);
int main()
{
    setlocale(LC_ALL, "russian");
    int arr[sizearr]={0};
    arr_writer(arr, sizearr);
return 0;
}
void arr_writer(int *arr, int sizearr)
{
    int j=1;
    for (int i=0; i<sizearr; i++)
    {
        arr[i]=j;
        j += 3;
    }
}
