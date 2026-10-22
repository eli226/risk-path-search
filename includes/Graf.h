#ifndef UNTITLED3_GRAF_H
#define UNTITLED3_GRAF_H
#include <vector>
#include <fstream>

class Graf {
private:
    int m_vertex;
    int m_edge_start /*ребро s*/;
    int m_edge_end /*ребро t*/;
    std::vector<std::pair<int, int>> edge_list;
public:
    Graf(int n, int s, int t) {
        m_vertex = n;
        m_edge_start = s;
        m_edge_end = t;
    }
    void read(std::fstream &in);
    std::vector<int> bfs(const std::vector<std::pair<int, int>> &graf,
        int s, int t, int vertex);
};

#endif //UNTITLED3_GRAF_H