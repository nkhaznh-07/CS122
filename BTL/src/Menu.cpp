#include <iostream>
#include "Menu.h"
#include "Bmp.h"

using namespace std;

void menu() {
    int choice;
    do {
        cout << " " << endl;
        cout << "===== MENU =====" << endl;
        cout << "1. Quay nguoc anh" << endl;
        cout << "2. Trai sang phai" << endl;
        cout << "3. Phai sang trai" << endl;
        cout << "4. Thoat" << endl;
        cout << "Lua chon: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:

                cout << "Da quay nguoc anh" << endl;
                break;

            case 2: case 3:

                cout << "Da lat anh" << endl;
                break;

            case 4:
                cout << "Thoat chuong trinh." << endl;
                break;

            default:
                cout << "Vui long chon lai " << endl;
        }

    } while (choice != 4);
}
