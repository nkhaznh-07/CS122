#include "Menu.h"
#include <iostream>

using namespace std;

/*
Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}
*/
void Menu::setChoice(int c)
{
    choice = c;
}

int Menu::getChoice() const
{
    return choice;
}


void Menu::menu()
{

    do
    {
        char ch;
        cout << endl;
        cout << "===== MENU =====" << endl;
        cout << "1. Quay nguoc anh" << endl;
        cout << "2. Trai sang phai" << endl;
        cout << "3. Phai sang trai" << endl;
        cout << "4. Thoat" << endl;
        cout << "Lua chon: ";
        cin >> ch;

       if (ch < '1' || ch > '4')
       {
           cout << "Lua chon khong hop le!" << endl;
           continue;
       }

       setChoice(ch - '0');
       cout << endl;

       switch (getChoice())
       {
            case 1:
                Bmp::LatDoc();
                cout << "Da quay nguoc anh" << endl;
                break;
            case 2:
                Bmp::LatNgang();
                cout << "Da chuyen tu trai sang phai" << endl;
                break;
            case 3:
                Bmp::LatNgang()
                cout << "Da chuyen tu phai sang trai" << endl;
                break;
            case 4:
                cout << "Thoat chuong trinh." << endl;
                break;
            default:
                cout << "Vui long chon lai!" << endl;
       }
    }
    while (getChoice() != 4);
}

