#ifndef BMP_H
#define BMP_H

#include <iostream>

using namespace std;


class Bmp
{
private:
    int ChieuRong;
    int ChieuCao;
    int soBitMau;

    char* DuLieu;

    int KichThuocFile;
    short loaiFile;


public:
    void Info();
    void LatDoc();
    void LatNgang();

    bool DocAnh(const char* File);
    bool GhiAnh(const char* File);


};

#endif // BMP_H
