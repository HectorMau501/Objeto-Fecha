
#include <iostream>
#include <stdlib.h>
#include "Date.h"
#include <memory>


int main()
{

    int opction{};
    int m_nmonth{};
    int m_nday{};
    int m_nyear{};

    std::cout << "\t\tBienvenido" << std::endl;
    std::cout << "\t\tHector Mauricio Rodriguez Salazar 21310416" << std::endl;
    std::cout << "\t\tEste es un programa para calcular la fecha actual al insertar dias, meses o anios" << std::endl;
    std::cout << "\t\t\t---------------------------------------------------------" << std::endl;

    Date date1(m_nmonth, m_nday, m_nyear);

    std::cout << "Menu" << std::endl;
    std::cout << "Ingrese la fecha actual ejemplo(month/day/year)=(4/22/2022)" << std:: endl;
    std::cout << "Ingrese el mes:" << std::endl;
    std::cin >> m_nmonth;
    std::cout << "Ingrese el dia:" << std::endl;
    std::cin >> m_nday;
    std::cout << "Ingrese el anio:" << std::endl;
    std::cin >> m_nyear;

   

    while (opction != 7)
    {
        std::cout << "Usted debera escoger una de las opciones a realizar" << std::endl;
        std::cout << "1. Sumar dias" << std::endl;
        std::cout << "2. Sumar meses" << std::endl;
        std::cout << "3. Sumar anios" << std::endl;
        std::cout << "4. Restar dias" << std::endl;
        std::cout << "5. Restar meses" << std::endl;
        std::cout << "6. Restar anios" << std::endl;
        std::cout << "7. Salir" << std::endl;
        std::cout << "\n";
        std::cin >> opction;



        switch (opction) {



        case 1:

            date1.AddDay();
            std::cout << date1 << std::endl;
            break;

        case 2:
            date1.AddMonth();
            std::cout << date1 << std::endl;
            break;


        case 3:
            date1.AddYear();
            std::cout << date1 << std::endl;
            break;

        case 4:
            date1.ResteDay();
            std::cout << date1 << std::endl;
            break;

        case 5:
            date1.ResteDay();
            std::cout << date1 << std::endl;
            break;

        case 6:
            date1.RestYear();
            std::cout << date1 << std::endl;
            break;

        case 7:
            std::cout << "Vuelva pronto:)" << std::endl;
            break;


        default:
            std::cout << "Usted escogio una opcion que no esta en el menu";

        }

    }



/*
Date a(04, 07, 2022);
Date b(a+10);
cout << a << endl;
cout << b << endl;
*/


/*

//puntero inteligente
 std::unique_ptr<int> smartIntPtr(new int);
     * smartIntPtr = 42;

     std::cout << "Integer value is" << *smartIntPtr <<std:: endl;
     std::unique_ptr<Date> smartDatePtr(new Date(04, 07, 2022));
     smartDatePtr->formaDate();

     int a = 5 , b = 6;
     int c = a + b;
 */






 /*
 Date a(04, 07, 2022);
 a.increment();
 a.increment();
 ++a;
 --a;
 a++;
 a--;
 cout << a.formaDate() << endl;
 */






 /*
int b = 0;
int c = b++;
int d = ++b;
cout << c << " " << d << " "<< b <<endl;
*/

std::cout << "\n";
system("pause");
}