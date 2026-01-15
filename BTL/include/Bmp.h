#ifndef BMP_H
#define BMP_H

//A50648_Nguyễn Duy Khánh

#include <iostream>

using namespace std;


class Bmp
{
private:
    int ChieuRong;
    int ChieuCao;
    int soBitMau;

    char* DuLieu;
    char* BangMau;

    int KichThuocFile;
    short loaiFile;


public:
    int getChieuRong() const;
    int getChieuCao() const;
    int getSoBitMau() const;

    char* getDuLieu() const;
    char* getBangMau() const;

    int getKichThuocFile() const;
    short getLoaiFile() const;



    void setChieuRong(int w);
    void setChieuCao(int h);
    void setSoBitMau(int bit);

    void setDuLieu(char* data);
    void setBangMau(char* p);

    void setKichThuocFile(short kt);
    void setLoaiFile(short loai);


    void Info();
    void LatDoc();
    void LatNgang();



};

#endif // BMP_H
