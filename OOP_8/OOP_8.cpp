#include <string>
#include <stdlib.h>
#include <iostream>
#include <list> 
#include <iterator>

using namespace std;

class Katalog
{
public:
    string imya;
    int data;
    int kol;
};

int main()
{

    setlocale(LC_ALL, "Russian");
    Katalog kat;
    list <Katalog> L1;
    list<Katalog>::iterator ii;

    int q;
    while (1)
    {
        cout << "1. Добавить файл в каталог, жмите 1. " << endl;
        cout << "2. Удалить файлы из каталога, дата которых раньше заданой, жмите 2" << endl;
        cout << "3. Поиск файла с наибольшим количеством обращений, жмите 3" << endl;
        cout << "4. Вывод всех заявок" << endl;
        cout << "5. Закончить выполение программы" << endl;

        cin >> q;

        switch (q)
        {
        case 1:
        {
            system("cls");
            cout << "Имя файла: ";
            cin >> kat.imya;
            cout << "Дата создания: ";
            cin >> kat.data;
            cout << "Количество обращений к файлу: ";
            cin >> kat.kol;
            L1.push_front(kat);
        } break;
        case 2:
        {
            system("cls");
            int e;
            cout << "Введите дату для удаления:";
            cin >> e;
            for (ii = L1.begin(); ii != L1.end(); ++ii)
            {
                if (e > ii->data)
                {
                    cout << ii->imya << " " << ii->data << " " << ii->kol << " - файл удален" << endl;
                    L1.erase(ii);
                    ii = L1.begin();
                }
            }

        }break;

        case 3:
        {
            system("cls");
            int emax = NULL;
            cout << "Файл с наибольшим количеством обращений: ";
            for (ii = L1.begin(); ii != L1.end(); ++ii)
            {
                if (emax < ii->kol)
                {
                    emax = ii->kol;
                }

            }
            for (ii = L1.begin(); ii != L1.end(); ++ii)if (ii->kol == emax)break;
            cout << ii->imya << " " << ii->data << " " << ii->kol << endl;
        }break;

        case 4:
        {
            system("cls");
            for (ii = L1.begin(); ii != L1.end(); ++ii)
                cout << ii->imya << " " << ii->data << " " << ii->kol << endl;
        }break;

        case 5:
        {return 0;}break;
        }
    }
}