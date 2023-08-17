#pragma once

#include <vector>
#include <string>
#include <StormLib/src/StormLib.h>

class SWrapper {
public:
    SWrapper(const std::string& path);
    ~SWrapper();

    std::vector<char> ReadFile(std::string path);
    bool CreateFile(std::string path, std::vector<char> data);
    void Close();
private:
    HANDLE hMpq;
};