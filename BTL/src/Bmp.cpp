#include "Bmp.h"

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
            int l = y *ChieuRong +x;
            int r = (ChieuRong - x - 1) + y*ChieuRong;
            swap(DuLieu[l], DuLieu[r]);
        }
    }
}


bool Bmp::DocAnh(const char* File)
{

}

bool Bmp::GhiAnh(const char* File)
{

}






