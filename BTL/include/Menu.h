#ifndef MENU_H
#define MENU_H

#include "Bmp.h"
#include "Read_Write.h"

//A50648_Nguyễn Duy Khánh

class Menu {
private:
    int choice ;

public:

    void setChoice(int c);
    int getChoice() const;

    void menu(Bmp& img, Read_Write& rw);


};
#endif // MENU.H
