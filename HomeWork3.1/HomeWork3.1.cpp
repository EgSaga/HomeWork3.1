#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a;
    float b;
    float sum = 0;
    cout << "enter 1 ";
    cin >> a;
    int a1, b1 = 0;
    float z1, z2 = 0;
    cout << "enter 2 ";
    cin >> b;

    a1 = a;
    b1 = b;
    z1 = a - a1;
    z2 = b - b1;

    cout << "sum of integers: " << a1 + b1 << endl;
    cout << "sum of fractional: " << z1 + z2 << endl;
    return 0;
    system("pause");


    double UAH;
    cout << "Enter UAH: ";
    cin >> UAH;
    cout << (int)UAH << " grn " << (int)((UAH - (int)UAH) * 100 + 0.5) << " kop" << endl;
    system("pause");3


        unsigned int time = 86399;
    cout << "Enter time: ";
    cin >> time;
    int day = time / 24 / 3600;
    int hours = time / 3600 - day * 24;
    int min = time / 60 - hours * 60;
    int sec = time - min * 60 - hours * 3600;
    cout << day << " day " << hours << " hours " << min << " min " << sec << " sec" << endl;
    system("pause");


    int s, hours, min;
    cout << "Enter distance (km): ";
    cin >> s;
    cout << "Enter hours and min: " << endl;
    cin >> hours >> min;
    cout << s / (double)(hours + min / 60.0) << "km\\h" << endl;
    system("pause");


    const int work = 28800;
    int sec;
    cout << "Enter sec " << endl;
    cin >> sec;
    cout << "Left to work " << (work - sec) / 3600 << " hours " << endl;
    system("pause");


    double cost, kolvo, sale;
    cout << "Enter cost: ";
    cin >> cost;
    cout << "Enter kolvo: ";
    cin >> kolvo;
    cout << "Enter sale: ";
    cin >> sale;
    double summ = cost * kolvo * ((100 - sale) / 100);
    cout << "You must pay " << summ << " UAH" << endl;
    system("pause");
}