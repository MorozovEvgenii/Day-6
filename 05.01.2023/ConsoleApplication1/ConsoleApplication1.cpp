/*
* Требования к программному коду:
* 1. Указываете свое ФИО
* 2. Группа и учебный год
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
*/

#include <iostream>
#include <cmath>
#include <numeric> // https://en.cppreference.com/w/cpp/numeric
#include "uih.h"
#include "YMN.h"
#include "DEL.h"
#include "SQRT.h"
#include "POW.h"
#include "Cos.h"
#include "vector"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::cout << "28 декабря 2022\n" << std::endl;

    long double numberA = -100;
    long double numberB = 100;
    long double numberC = -350;
    long double numberD = 760;
    long double numberE = -870;
    long double numberF = 4;
    long double numberG = 7;

    long double numberLE = 9;

    long double numberLY = 3;

    long double numberX = -10.99;
    long double numberY = 0.00599;
    long double numberZ = 30.9999999;

    long double resultOfuih = numberuih(numberA, numberB, numberC, numberD);
    std::cout << "Результат сложения чисел = " << resultOfuih << std::endl;

    long double resultOfDEL = numberDEL(numberA, numberB, numberC, numberD);
    std::cout << "Результат деления чисел = " << resultOfDEL << std::endl;

    long double resultOfYMN = numberYMN(numberA, numberB, numberC, numberD);
    std::cout << "Результат умножения чисел = " << resultOfYMN << std::endl;

    long double resultOfSQRT = numberSQRT(numberA);
    std::cout << "Результат возведения чисел в квадрат = " << resultOfSQRT << std::endl;

    long double resultOfPOW = numberPOW(numberF, numberG);
    std::cout << "Результат возведения чисел в 7 степень = " << resultOfPOW << std::endl;

    long double resultOfCos = numberCos(numberLE);
    std::cout << "Результат числа = " << resultOfCos << std::endl;

 
    vector <long double> pent(6);
    pent[0] = resultOfuih;
    pent[1] = resultOfDEL;
    pent[2] = resultOfYMN;
    pent[3] = resultOfSQRT;
    pent[4] = resultOfPOW;
    pent[5] = resultOfCos;
    pent.pop_back();

    std::vector<std::string> clangs = { "То что заменяеться" };
    std::vector<std::string> ilangs = { "1","5","7"};
    clangs.swap(ilangs);    // clangs = { "JavaScript", "Python", "PHP"};
    for (std::string n : clangs)
        std::cout << n << "\t";
    std::cout << std::endl;

    for (int i = 0; i < 6; i++) {
        std::cout << pent[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl; 

    system("pause");
}