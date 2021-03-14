#include <iostream>
#include <fstream>
int main(int argc, char* argv[])
{
    int i=0;
    std::ofstream fos("example_1.txt");
    if (!fos.is_open())
        std::cout << "Файл не может быть открыт!"<<std::endl;
    else
    {
        fos << "In December 2019, an outbreak of coronavirus disease 2019 (COVID-19) was identified in Wuhan, China. The World Health Organization (WHO) declared this outbreak a significant threat to international health. COVID-19 is highly infectious and can lead to fatal comorbidities especially acute respiratory distress syndrome (ARDS). Thus, fully understanding the characteristics of COVID-19-related ARDS is conducive to early identification and precise treatment.";

    }
    fos.close();
    std::ofstream fos1("example_2.txt");
    if (!fos1.is_open())
        std::cout << "Файл не может быть открыт!"<<std::endl;
    else
    {
        fos1 << "We aimed to describe the characteristics of COVID-19-related ARDS and to elucidate the differences from ARDS caused by other factors. COVID-19 mainly affected the respiratory system with minor damage to other organs.";
        fos1.close();
    }
   char *ptr1 = (char *) calloc(216, sizeof(char ));
    if( ptr1 == nullptr)
       std::cout<< "Не достаточно памяти"<< std::endl;
   else {
           std::ifstream fin2("example_2.txt");
        if (!fin2.is_open())
            std::cout << "Файл не может быть открыт!" << std::endl;
        else{
            while (!fin2.eof()) {
                fin2.get(ptr1[i]);
                i++;
            }
            fin2.close();
          //  for(i=0; i<216; i++) {
          //      std::cout << ptr1[i];
          //  }
        }
    }
    std::ofstream fos3("example_1.txt", std::ofstream::app);
    if (!fos3.is_open())
        std::cout << "Файл не может быть открыт!"<<std::endl;
    else
    {
        fos3<<std::endl;
        for(i=0; i<216; i++) {
            fos3 << ptr1[i];
        }
    }
    fos3.close();

    system("pause");
    return 0;
}
