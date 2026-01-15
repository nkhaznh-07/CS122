#ifndef READ_WRITE_H
#define READ_WRITE_H

#include "Bmp.h"

//A50648_Nguyễn Duy Khánh

class Read_Write
{
private:

public:

    bool Read(const char* filename, Bmp& img);
    bool Write(const char* filename, const Bmp& img);


};

#endif // READ_WRITE_H
