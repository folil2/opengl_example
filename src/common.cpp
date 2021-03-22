#include "common.h"
#include <fstream>
#include <sstream>

std::optional<std::string> LoadTextFile(const std::string& filename){
    std::ifstream fin(filename);
    if(!fin.is_open()) {
        SPDLOG_ERROR("failde to open file:{}", filename);
        return {};
    }
    std::stringstream text;
    text << fin.rdbuf();
    return text.str();
}    