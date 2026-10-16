#include "../includes/Graf.h"
#include <fstream>

void Graf::read(std::fstream &in) {
    int v1, v2;
    while (!in.eof()) {
        in >> v1 >> v2;
        edge_list.emplace_back(v1, v2);
    }
}

