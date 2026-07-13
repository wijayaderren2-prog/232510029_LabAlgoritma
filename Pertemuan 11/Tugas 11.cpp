#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <utility>

using namespace std;

struct Edge {
    int tujuan;
    int bobot;
};

int main() {

    // Nama kota
    string kota[7];
    kota[0] = "Cibinong";
    kota[1] = "Cilebut";
    kota[2] = "Tanah Sareal";
    kota[3] = "Bogor Tengah";
    kota[4] = "Bogor Utara";
    kota[5] = "Baranangsiang";
    kota[6] = "Tajur";

    // Graph
    vector<Edge> graph[7];

    Edge e;

    e.tujuan = 1; e.bobot = 4;
    graph[0].push_back(e);

    e.tujuan = 4; e.bobot = 6;
    graph[0].push_back(e);

    e.tujuan = 2; e.bobot = 3;
    graph[1].push_back(e);

    e.tujuan = 3; e.bobot = 2;
    graph[2].push_back(e);

    e.tujuan = 5; e.bobot = 4;
    graph[4].push_back(e);

    e.tujuan = 6; e.bobot = 2;
    graph[5].push_back(e);

    e.tujuan = 6; e.bobot = 5;
    graph[3].push_back(e);

    const int INF = 999999;

    int dist[7];
    int prev[7];
    bool visited[7];

    for (int i = 0; i < 7; i++) {
        dist[i] = INF;
        prev[i] = -1;
        visited[i] = false;
    }

    dist[0] = 0;

    // Algoritma Dijkstra
    for (int i = 0; i < 7; i++) {

        int u = -1;
        int min = INF;

        for (int j = 0; j < 7; j++) {
            if (!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }
        }

        if (u == -1)
            break;

        visited[u] = true;

        for (int j = 0; j < graph[u].size(); j++) {

            Edge x = graph[u][j];

            if (dist[x.tujuan] > dist[u] + x.bobot) {

                dist[x.tujuan] = dist[u] + x.bobot;
                prev[x.tujuan] = u;

            }

        }

    }

    int jalur[10];
    int jumlah = 0;

    int tujuan = 6;

    while (tujuan != -1) {

        jalur[jumlah] = tujuan;
        jumlah++;
        tujuan = prev[tujuan];

    }

    cout << "===== Jalur Terpendek =====\n\n";

    for (int i = jumlah - 1; i >= 0; i--) {

        cout << kota[jalur[i]];

        if (i != 0)
            cout << " -> ";

    }

    cout << endl;
    cout << "\nTotal Bobot = " << dist[6] << endl;

    return 0;
}
