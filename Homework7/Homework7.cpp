#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int number;
    cout << "Введите номер дня недели";
    cin >> number;
    switch (number)
    {
    case 1:
        cout << "Понелельник";
        break;
    case 2:
        cout << "Вторник";
        break;
    case 3:
        cout << "Среда";
        break;
    case 4:
        cout << "Четверг";
        break;
    case 5:
        cout << "Пятница";
        break;
    case 6:
        cout << "Суббота";
        break;
    case 7:
        cout << "Воскресенье";
        break;
    }
    
    cout << "\n\n\n\n";

    int x;
    cout << "Сколько ног у пауков \n 1.4 \n 2.6 \n 3.8 \n 4.12 \n Введите номер ответа: ";
    cin >> x;
    if (x == 8) {
        cout << "В каком году появился С++ \n 1.1983 \n 2.2000 \n 3.1995 \n 4.1400 \n Введите номер ответа: ";
        cin >> x;
        if (x == 1) {
            cout << "Сколько хвостов у кошки \n 1.3 \n 2.1 \n 3.2 \n 4.5 \n Введите номер ответа: ";
            cin >> x;
            if (x == 2)
            {
                cout << "В каком году вышла Dota2 \n 1.2013 \n 2.2011 \n 3.2012 \n 4.2015 \n Введите номер ответа: ";
                cin >> x;
                if (x == 1) 
                {
                    cout << "Cколько весит взломка STALKER 2 \n 1.193гб \n 2.103гб \n 3.220гб \n 4.100гб \n Введите номер ответа: ";
                    cin >> x;
                    if (x == 1)
                    {
                        cout << "Вы выиграли";
                    }
                    else cout << "Вы проиграли";
                }
                else cout << "Вы проиграли";
            }
            else cout << "Вы проиграли";
        }
        else cout << "Вы проиграли";
    }
    else cout << "Вы проиграли";
    
}

