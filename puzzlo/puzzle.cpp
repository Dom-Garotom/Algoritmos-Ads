#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<int>> objetivo = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 0}
};

pair<int, int> encontrar_vazio(const vector<vector<int>>& tabuleiro) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (tabuleiro[i][j] == 0) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

bool estado_objetivo(const vector<vector<int>>& tabuleiro) {
    return tabuleiro == objetivo;
}

vector<vector<int>> mover(const vector<vector<int>>& tabuleiro, int vazio_i, int vazio_j, int novo_i, int novo_j) {
    vector<vector<int>> novo_tabuleiro = tabuleiro;
    swap(novo_tabuleiro[vazio_i][vazio_j], novo_tabuleiro[novo_i][novo_j]);
    return novo_tabuleiro;
}

void imprimir_tabuleiro(const vector<vector<int>>& tabuleiro) {
    for (const auto& linha : tabuleiro) {
        for (int num : linha) {
            cout << num << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector<string> resolver_8_puzzle(const vector<vector<int>>& inicial) {
    queue<pair<vector<vector<int>>, vector<string>>> fila;
    set<vector<vector<int>>> visitados;
    fila.push({inicial, {}});
    visitados.insert(inicial);

    vector<pair<int, int>> movimentos = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<string> direcoes = {"Cima", "Baixo", "Esquerda", "Direita"};
    
    while (!fila.empty()) {
        auto [estado_atual, caminho] = fila.front();
        fila.pop();

        if (estado_objetivo(estado_atual)) {
            return caminho;
        }

        auto [vazio_i, vazio_j] = encontrar_vazio(estado_atual);

        for (int i = 0; i < 4; ++i) {
            int novo_i = vazio_i + movimentos[i].first;
            int novo_j = vazio_j + movimentos[i].second;

            if (novo_i >= 0 && novo_i < 3 && novo_j >= 0 && novo_j < 3) {
                vector<vector<int>> novo_estado = mover(estado_atual, vazio_i, vazio_j, novo_i, novo_j);

                if (visitados.find(novo_estado) == visitados.end()) {
                    visitados.insert(novo_estado);
                    vector<string> novo_caminho = caminho;
                    novo_caminho.push_back(direcoes[i]);
                    fila.push({novo_estado, novo_caminho});
                }
            }
        }
    }

    return {};  
}

int main() {
    vector<vector<int>> estado_inicial = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 5, 8}
    };

    vector<string> solucao = resolver_8_puzzle(estado_inicial);

    
    if (!solucao.empty()) {
        cout << "Solução encontrada em " << solucao.size() << " passos:" << endl;
        for (const string& passo : solucao) {
            cout << passo << endl;
        }
    } else {
        cout << "Nenhuma solução encontrada." << endl;
    }

    return 0;
}
