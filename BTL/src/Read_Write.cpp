#include "Read_Write.h"

#include <fstream>
#include <iostream>

//A50648_Nguyễn Duy Khánh

// Class này em có dùng đến hỗ trợ của ChatGPT
//do em không thể làm được phần này nên có gì sai xót mong thầy chỉ lỗi cho em để em nâng cao kinh nghiệm
// Em cảm ơn thầy đã đọc.

using namespace std;

bool Read_Write::Read(const char* filename, Bmp& img)
{
    ifstream file(filename, ios::binary);
    if (!file) return false;

    unsigned char header[54];
    file.read((char*)header, 54);

    if (header[0] != 'B' || header[1] != 'M') return false;

    int w   = *(int*)&header[18];
    int h   = *(int*)&header[22];
    short b = *(short*)&header[28];
    int offset = *(int*)&header[10];

    if (b != 8 && b != 24) return false;

    img.setChieuRong(w);
    img.setChieuCao(h);
    img.setSoBitMau(b);


    if (b == 8)
    {
        char* palette = new char[256 * 4];
        file.read(palette, 256 * 4);
        img.setBangMau(palette);
    }

    int rowSize = ((b * w + 31) / 32) * 4;
    int dataSize = rowSize * h;

    char* data = new char[dataSize];
    file.seekg(offset, ios::beg);
    file.read(data, dataSize);
    file.close();

    img.setDuLieu(data);
    return true;
}

bool Read_Write::Write(const char* filename, const Bmp& img)
{
    ofstream file(filename, ios::binary);
    if (!file) return false;

    int w = img.getChieuRong();
    int h = img.getChieuCao();
    int b = img.getSoBitMau();

    int rowSize  = ((b * w + 31) / 32) * 4;
    int dataSize = rowSize * h;

    int offset = 54;
    if (b == 8) offset += 1024;

    unsigned char header[54] = {0};
    header[0] = 'B';
    header[1] = 'M';

    *(int*)&header[2]  = offset + dataSize;
    *(int*)&header[10] = offset;
    *(int*)&header[14] = 40;
    *(int*)&header[18] = w;
    *(int*)&header[22] = h;
    *(short*)&header[26] = 1;
    *(short*)&header[28] = b;

    file.write((char*)header, 54);

    if (b == 8)
        file.write(img.getBangMau(), 1024);

    file.write(img.getDuLieu(), dataSize);
    file.close();

    return true;
}
