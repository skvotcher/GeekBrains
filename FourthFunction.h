
void FourthFunction(int *mas_1, int n, int sizearr)
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
        temp=mas_1[0];
    for (int i=0; i <= (sizearr-1); i++)
    {

        mas_1[i]=mas_1[i+1];
    }
    mas_1[sizearr-1]=temp;
    n--;
    }
   while(n !=0 );
    }
    else
    {
    do
    {
        temp=mas_1[sizearr-1];
    for(int i=(sizearr-1); i>=0; i--)
    {
      mas_1[i]=mas_1[i-1];
    }
    mas_1[0]=temp;
    n++;
    } while(n != 0);

    }
}
