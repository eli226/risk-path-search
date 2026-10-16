#include "../includes/Graf.h"
#include <iostream>
#include <fstream>

int main() {
    std::fstream in;
    std::ofstream out;
    in.open("../data/data.txt");
    out.open("../data/out.txt");

    int vertex, s, t;

    if (in.is_open()) {
        in >> vertex >> s >> t;
        Graf obj(vertex, s, t);
        obj.read(in);
    }

    in.close();
    out.close();
    return 0;
}