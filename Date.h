#pragma once
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

	/*
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

