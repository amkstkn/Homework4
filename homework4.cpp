#include <iostream>
using namespace std;

int task1()
{
    cout << "Task 1 " << endl;
    int a, b;
    cout << "enter first number - " << endl;
    cin >> a;
    cout << "enter second number - " << endl;
    cin >> b;
    if (10 < a + b < 20)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}

int task2()
{
    cout << "Task 2" << endl;
    int c = 4, d = 6;
    if ((c == 10 && d == 10) || (c + d == 10))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    };
    return 0;
}

int task31()
{
    cout << "Task 3" << endl;
    cout << "odd number ";
    for (int i = 1; i <= 50; i = i + 2)
    {
        cout << i << " ";
}
    cout  << endl;
    return 0;
}

int task32()
{
    
    cout << "Task 3" << endl; 
    cout << "odd number ";
    int i=1;
    while (i < 50)
    {
        if ((1 <= i < 50) && (i % 2 == 1))
        {
            cout << i << " ";
        }
        i++;
        
    }
    cout << endl;
    return 0;
}

int task41()
{
    cout << "Task 4" << endl; 
    int i,x=2;
    cout << "Enter number - " << endl;
    cin >> i;
    if (i < 0)
    {
        cout << i << " - not prime number" << endl;
    }
    else
        while (x < i)
        {
            if (i % x == 0)
            {
                cout << i << " - not prime number" << endl;
                break;
                x++;
            }
            else
            {
                cout << i << " - prime number" << endl;
                break;
            }
        }
    return 0;
}

int task42()
{
    cout << "Task 4" << endl;
    int i, x = 2;
    cout << "Enter number - " << endl;
    cin >> i;
    if (i < 0)
    {
        cout << i << " - not prime number" << endl;
    }
    else if (i == 1)
    {
        cout << i << " - prime number" << endl;
    }
    else if (i>0)
    {
        for (x; x < i; i++)
        {
            if (i % x == 0)
            {
                cout << i << " - not prime number" << endl;
                break;
            }
            else
            {
                cout << i << " - prime number" << endl;
                break;
            }
        }
    }
    return 0;
}

int task5()
{
    cout << "Task 5" << endl;
    int i;
    do
    {
        cout << "Enter year between 1 to 3000 - " << endl;
        cin >> i;
    }     while (3000 < i || i < 1);

    if (i%4==0 && i%100!=0 || i%400==0)
        cout << i << " - leap year" << endl;
    else
        cout << i << " - not leap year" << endl;

 /*
    if (i % 400 == 0 )
        cout << i << " - leap year" << endl;
    else if (i % 100 == 0)
        cout << i << " - not leap year" << endl;
    else if (i%4==0)
        cout << i << " - leap year" << endl;
    else
        cout << i << " - not leap year" << endl;
  */                   
  return 0;
}



int main()
{
    task1();
    task2();
    task31();
    task32();
    task41();
    task42();
    task5();
    return 0;
}

/*
1. Написать программу, проверяющую что сумма двух(введенных с клавиатуры) чисел лежит в пределах от 10 до 20 (включительно),
если да – вывести строку "true", в противном случае – "false";
2.Написать программу, выводящую на экран строку “true”, если две целочисленные константы, объявленные в её начале либо обе
равны десяти сами по себе, либо их сумма равна десяти.Иначе "false".
3.Написать программу которая выводит на экран список всех нечетных чисел он 1 до 50. Например: "Your numbers: 1 3 5 7 9 11 13 …".
Для решения используйте любой С++ цикл.
4.Со звёздочкой.Написать программу, проверяющую, является ли некоторое число - простым.Простое число — это целое 
положительное число, которое делится без остатка только на единицу и себя само.
5.Со звёздочкой.Пользователь вводит с клавиатуры число(год) : от 1 до 3000. Написать программу, которая определяет 
является ли этот год високосным.Каждый 4 - й год является високосным, кроме каждого 100 - го, при этом каждый 400 - й – високосный.
Вывести результаты работы программы в консоль.Замечание : Можно сделать в одном проекте(например разместить разные
задания в разных функциях).Или в разных проектах если это кажется удобнее.
*/