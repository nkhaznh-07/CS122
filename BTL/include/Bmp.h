#ifndef BMP_H
#define BMP_H

#include <iostream>

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

    int getChieuRong() const;
    int getChieuCao() const;
    int getSoBitMau() const;
    char* getDuLieu() const;
    int getKichThuocFile() const;
    short getLoaiFile() const;

    void setChieuRong(int w);
    void setChieuCao(int h);
    void setSoBitMau(int bit);
    void setLoaiFile(short loai);


    void Info();
    void LatDoc();
    void LatNgang();

    bool Read(const char* File);
    bool Write(const char* File);


};

#endif // BMP_H
