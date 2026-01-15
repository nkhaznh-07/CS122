#include "Menu.h"
#include "Bmp.h"
#include "Read_Write.h"

#include <iostream>

//A50648_Nguyễn Duy Khánh

using namespace std;

void Menu::setChoice(int c)
{
    choice = c;
}

int Menu::getChoice() const
{
    return choice;
}



void Menu::menu(Bmp& img, Read_Write& rw)
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
                img.LatDoc();
                rw.Write("output.bmp", img);
                cout << "Da quay nguoc anh" << endl;
                break;

            case 2:
                img.LatNgang();
                rw.Write("output.bmp", img);
                cout << "Da chuyen tu trai sang phai" << endl;
                break;

            case 3:
                img.LatNgang();
                rw.Write("output.bmp", img);
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
