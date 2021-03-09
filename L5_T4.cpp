/*
4.* Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным),
    при этом функция должна циклически сместить все элементы массива на n позиций.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
const int sizearr=5;
void changePosition(int n, int sizearr, int *arr);
int main()
{
    int n = 2;
    setlocale(LC_ALL, "russian");
    int arr[sizearr]={1,2,3,4,5};
    changePosition(n, sizearr, arr);
return 0;
}
void changePosition(int n, int sizearr, int *arr)
{
    int temp=0;
   if(n ==0 || n>sizearr)
    {
        return;
    }
    else if (n>0)
    {
    do
    {
        temp=arr[0];
    for (int i=0; i <= (sizearr-1); i++)
    {

        arr[i]=arr[i+1];
    }
    arr[sizearr-1]=temp;
    n--;
    }
   while(n !=0 );
    }
    else
    {
    do
    {
        temp=arr[sizearr-1];
    for(int i=(sizearr-1); i>=0; i--)
    {
      arr[i]=arr[i-1];
    }
    arr[0]=temp;
    n++;
    } while(n != 0);

    }
}
