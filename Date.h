#pragma once
#include <iostream>


class Date
{
	// Atributos de clase Fecha
private:
	int day, month, year;
	std::string dateInString;

	//Constructor,Metodos y operadores de clase Fecha
public:

	//Contructor para fecha
	Date(int inMonth, int inDay, int inYear) : month(inMonth), day(inDay), year(inYear) {};

	//Retorna el dia
	void formaDate()
	{
		std::cout << month << "/" << day << "/" << year;
		//return day;
	}

	void IncremMonth()
	{
		month++;
		day = 1;
	}
	void IncremDay()
	{
		day++;
	}









	//Aumenta el dia
	void incrementday()
	{
		if (day == 31 && month == 12)
		{
			day = 1;
			month = 1;
			year++;


		}
		else
		{
			//Para el año biciesto 
			if (year % 4 == 0)
			{
				//Meses que tienen 31 dias 
				if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				{
					if (day == 31)
					{
						IncremMonth();
					}
					else
					{
						IncremDay();
					}
				}
				//Estos son los meses que tienen 30 dias
				else if (month == 4 || month == 6 || month == 9 || month == 11)
				{
					if (day == 30)
					{
						IncremMonth();
					}
					else
					{
						IncremDay();
					}
				}
				else
				{
					if (month == 2 && day == 29)
					{
						IncremMonth();
					}
					else
					{
						IncremDay();
					}
				}
			}
			//Para un año normal
			else
			{
				//Meses que tienen 31 dias 
				if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				{
					if (day == 31)
					{
						IncremMonth();
					}
					else
					{
						IncremDay();
					}
				}
				//Estos son los meses que tienen 30 dias
				else if (month == 4 || month == 6 || month == 9 || month == 11)
				{
					if (day == 30)
					{
						IncremMonth();
					}
					else
					{
						IncremDay();
					}
				}
				else
				{
					if (month == 2 && day == 28)
					{
						IncremMonth();
					}
					else
					{
						IncremDay();
					}
				}
			}
		}
	}





	void DecremYear()
	{
		if (day == 1 && month == 1)
		{
			year--;
			month = 12;
			day = 31;
		}
		else 
		{
			if (day == 1)
			{
				switch (month)
				{
				case 1:
					month = 12;
					day = 31;
					break;

				case 2:
					month--;
					day = 31;
					break;
					//Para el año biciesto 
				case 3:
					if (year % 4 == 0)
					{
						day = 29;
					}
					//Para el año normal
					else
					{
						day = 28;
					}
					break;
				case 4:
					month--;
					day = 31;
					break;
				case 5:
					month--;
					day = 30;
					break;
				case 6:
					month--;
					day = 31;
					break;
				case 7:
					month--;
					day = 31;
					break;
				case 8:
					month--;
					day = 31;
					break;
				case 9:
					month--;
					day = 31;
					break;
				case 10:
					month--;
					day = 30;
					break;
				case 11:
					month--;
					day = 31;
					break;
				case 12:
					month--;
					day = 30;
					break;
				}
			}
			else
			{
				day--;
			}
		}
	}











		
	/*
	Date operator +(int daysToAdd) {
		Date newDate(month, day+daysToAdd, year);
		return newDate;
	}
	*/




	//Operadores 

	//Esto es el operador de Prefix
	/*Si es prefix, simplemente devolvemos el objeto realizamos las
	modificaciones que tenemos que hacer y se devuelve asi mismo.
		Prefix es si ponemos si ponemos antes del objeto
	*/

	/*
	Date& operator ++()
	{
		++day;
		return *this;
	}

	Date& operator --()
	{
		--day;
		return *this;
	}
	*/

	//Esto es el operador Profix
	/*Es despues de la variable*/

	/*
	Date& operator ++(int)
	{
		Date copy(month,day,year);
		++day;
		return copy;
	}

	Date& operator --(int)
	{
		Date copy(month, day, year);
		--day;
		return copy;
	}
	*/

	/*/
	//Operador de conversion
	operator const char* ()
	{
		std::ostringstream formatDate;
		formatDate << month << "/" << day << "/" << year;
		dateInString = formatDate.str();
			return dateInString.c_str();
	}
	*/

};

