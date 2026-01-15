#include "Bmp.h"
#include "Read_Write.h"
#include "Menu.h"

//A50648_Nguyễn Duy Khánh

using namespace std;

int main()
{
    Bmp img;
    Read_Write rw;
    Menu menu;

    if (!rw.Read("input.bmp", img))
    {
        cout << "Khong doc duoc anh" << endl;
        return 0;
    }

    img.Info();
    menu.menu(img, rw);

    return 0;
}
