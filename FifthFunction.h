
void FifthFunction(int sizearr, int *mas_1, ...)
{
    va_list list;
    va_start(list, sizearr);
    for(int i=0; i<sizearr; i++)
    {
        mas_1[i]= !(va_arg(list, int));
    }
    va_end(list);
}
