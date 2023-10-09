#include <iostream>

using namespace std;

void recHanoi(int discos, int inicio, int fim, int temporario) {

    if (discos > 0) {
        recHanoi(discos-1, inicio, temporario, fim);
        cout << "Mova o disco " << discos << " da torre " << inicio << " para a torre " << fim << endl;
        recHanoi(discos-1, temporario, fim, inicio);
    }
}

int main() {
    recHanoi(5, 1, 3, 2);

    return 0;
}
