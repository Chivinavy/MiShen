#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int x, y;
    setlocale(LC_ALL, "Russian");
    unsigned short int number, radius, points, pointsall;
    cout << "Добро пожаловать в MiShen!" << endl << "У вас есть пять выстрело. Запишите в пробел координаты, по которым будет произведён выстрел (например, 3 -1). Существует вероятность промаха от -5 до 5 для каждой координаты. Центр находится в точке 0 0" << endl;
    cout << "НАЧАЛИ!" << endl;
    pointsall = 0;
    for (number=1; number<6; number++)
    {
        cout << "Номер выстрела " << number << endl;
        cin >> x >> y;
        srand(time(0));
        x = x + (rand() % 11) - 5;
        y = y + (rand() % 11) - 5;
        points = 0;
        radius = 5;
        cout << "Вы попали в точку с координатами " << x << " " << y << endl;
        if (x * x + y * y <= radius * radius)
        {
            points = floor(6 - sqrt(x * x + y * y));
        }
        cout << "Очки заработанные за последний выстел " << points << endl;
        pointsall = pointsall + points;
        cout << "Общее количество очков, заработанных до сих пор " << pointsall << endl;
    }
    if (pointsall < 10)
    {
        cout << "Вы проиграли!" << endl;
    }
    else
    {
        cout << "Вы выйграли!" << endl;
    }
    return 0;
}

