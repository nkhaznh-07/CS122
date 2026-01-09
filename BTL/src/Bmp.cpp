#include "Bmp.h"

using namespace std;

/*
Bmp::Bmp()
{
    //ctor
}

Bmp::~Bmp()
{
    //dtor
}
*/

int Bmp::getChieuRong() const
{
    return ChieuRong;
}

int Bmp::getChieuCao() const
{
    return ChieuCao;
}

int Bmp::getSoBitMau() const
{
    return soBitMau;
}

char* Bmp::getDuLieu() const
{
    return DuLieu;
}

int Bmp::getKichThuocFile() const
{
    return KichThuocFile;
}

short Bmp::getLoaiFile() const
{
    return loaiFile;
}



void Bmp::setChieuRong(int w)
{
    ChieuRong = w;
}

void Bmp::setChieuCao(int h)
{
    ChieuCao = h;
}

void Bmp::setSoBitMau(int bit)
{
    soBitMau = bit;
}

void Bmp::setLoaiFile(short loai)
{
    loaiFile = loai;
}

void Bmp::Info()
{
    cout << "Kich thuoc file: " << KichThuocFile << " bytes" << endl;
    cout << "Do phan giai: " << ChieuRong << "x" << ChieuCao << endl;

}

void Bmp::LatDoc()
{
    for (int y = 0 ; y < ChieuCao / 2 ; y++)
    {
        for (int x = 0; x < ChieuRong; x++)
        {
            int up = y * ChieuRong + x;
            int down = (ChieuCao - y -1 ) * ChieuRong +x;
            swap(DuLieu[up], DuLieu[down]);
        }
    }
}

void Bmp::LatNgang()
{
    for (int y = 0; y< ChieuCao; y++)
    {
        for (int x = 0; x < ChieuRong; x++)
        {
            int left = y *ChieuRong +x;
            int right = (ChieuRong - x - 1) + y*ChieuRong;
            swap(DuLieu[left], DuLieu[right]);
        }
    }
}

bool Bmp::Read(const char* File)
{

}

bool Bmp::Write(const char* File)
{

}




