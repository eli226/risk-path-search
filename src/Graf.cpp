#include "Graf.h"
#include <fstream>
#include <iostream>

void Graf::read(std::fstream &in) {
    int v1, v2;
    while (!in.eof()) {
        in >> v1 >> v2;
        edge_list.emplace_back(v1, v2);
    }
}

std::vector<int> Graf::bfs(const std::vector<std::pair<int, int>> &graf, int s, int t, int vertex) {
    std::vector<std::vector<int>> tmp(vertex + 1);
    for (int i = 0; i < graf.size(); i++) {
        tmp[graf[i].first].push_back(graf[i].second);
        tmp[graf[i].second].push_back(graf[i].first);
    }
    std::queue<int> q;
    std::vector<int> dist(vertex + 1, -1);
    std::vector<int> pre; //вектор предков, что бы восстановить путь от s до t

    dist[s] = 0;
    q.push(s);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int to : tmp[v]) {
            if (dist[to] == -1) {
                q.push(to);
                dist[to] = dist[v] + 1;
            }
        }
    }
    return dist;
}