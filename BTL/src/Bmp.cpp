#include "Bmp.h"
#include <cstring>

//A50648_Nguyễn Duy Khánh

using namespace std;


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

char* Bmp::getBangMau() const
{
    return BangMau;
}

int Bmp::getKichThuocFile() const
{
    return KichThuocFile;
}

short Bmp::getLoaiFile() const
{
    return loaiFile;
}




////////////

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


void Bmp::setDuLieu(char* data)
{
    DuLieu = data;
}

void Bmp::setBangMau(char* p)
{
    BangMau = p;
}


void Bmp::setKichThuocFile(short kt)
{
    KichThuocFile = kt;
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
    int rowSize = ((soBitMau * ChieuRong + 31) / 32) * 4;

    for (int y = 0; y < ChieuCao / 2; y++)
    {
        char* up = DuLieu + y * rowSize;
        char* down = DuLieu + (ChieuCao - y - 1) * rowSize;

        for (int i = 0; i < rowSize; i++)
        {
            swap(up[i], down[i]);
        }
    }
}


void Bmp::LatNgang()
{
    int bytesPerPixel = soBitMau / 8;
    int rowSize = ((soBitMau * ChieuRong + 31) / 32) * 4;

    for (int y = 0; y < ChieuCao; y++)
    {
        char* row = DuLieu + y * rowSize;
        for (int x = 0; x < ChieuRong / 2; x++)
        {
            for (int c = 0; c < bytesPerPixel; c++)
            {
                int left  = x * bytesPerPixel + c;
                int right = (ChieuRong - x - 1) * bytesPerPixel + c;
                swap(row[left], row[right]);
            }
        }
    }
}






