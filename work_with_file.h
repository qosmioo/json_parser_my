#ifndef WORK_WITH_FILE_H
#define WORK_WITH_FILE_H
#include <iostream>
#include <fstream>

class Work_with_file
{
private:
    std::string file_text;
public:
    std::string read_file (std::string file_name) {
        std::fstream out;
        std::string file_to_string;
        std::string last_line;
        out.open(file_name);
        while (getline(out, last_line))
        {
            file_to_string += last_line;
        }
        return file_to_string;
    }

};

#endif // WORK_WITH_FILE_H
