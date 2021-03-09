
bool ThirdFunction(int *mas_1, int sizearr)
{
    int sum=0;
    int afteraction=0;
    for (int i=0; i<sizearr; i++)
    {
        sum += mas_1[i];
    }
    for (int i=0; i<sizearr; i++)
    {
        sum -=mas_1[i];
        afteraction +=mas_1[i];
         if( (sum == afteraction))
         {
            return true;
         }
    }

 return false;
}
