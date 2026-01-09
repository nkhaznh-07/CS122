#ifndef MENU_H
#define MENU_H

class Menu
{
private:
    int choice = 0;

public:

    void setChoice(int c);
    int getChoice() const;

    void menu();

};


#endif // MENU_H
