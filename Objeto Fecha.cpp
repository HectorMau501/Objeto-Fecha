
#include <iostream>
#include <stdlib.h>
#include "Date.h"
#include <memory>


int main()
{

    int opction{};
    int month, day, year;

    std::cout << "\t\tBienvenido" << std::endl;
    std::cout << "\t\tHector Mauricio Rodriguez Salazar 21310416" << std::endl;
    std::cout << "\t\tEste es un programa para calcular la fecha actual al insertar dias, meses o anios" << std::endl;
    std::cout << "\t\t\t---------------------------------------------------------" << std::endl;

    std::cout << "Menu" << std::endl;
    std::cout << "Ingrese la fecha actual ejemplo(month/day/year)=(04/22/2022)" << std:: endl;
    std::cout << "Ingrese el mes:" << std::endl;
    std::cin >> month;
    std::cout << "Ingrese el dia:" << std::endl;
    std::cin >> day;
    std::cout << "Ingrese el anio:" << std::endl;
    std::cin >> year;


    do
    {

        std::cout << "Usted debera escoger una de las opciones a realizar" << std::endl;
        std::cout << "1. Sumarle a la fecha" << std::endl;
        std::cout << "2. Restar fecha" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "\n";
        std::cin >> opction;

        Date date1(month, day, year);

        switch (opction) {

        case 1:
            /*
            cout << "Sumar dia"<<endl;
            date1.incrementday();
            cout << date1 << endl;*/
            break;

        case 2:
            break;

        case 3:
            std::cout << "Vuelva pronto:)" << std::endl;
            break;

        default:
            std::cout << "Usted escogio una opcion que no esta en el menu";

        }


    } while (opction != 3);



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

     cout << "Integer value is" << *smartIntPtr << endl;
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