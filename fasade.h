#ifndef FASADE_H
#define FASADE_H
#include "work_with_file.h"

class Fasade
{
private:
    Work_with_file file_work;
public:
    Fasade(Work_with_file fw) {
        file_work = fw;
    }
    std::string file_path;
    std::string read_operation (std::string fp) {
        return file_work.read_file(fp);
    }
};

#endif // FASADE_H
