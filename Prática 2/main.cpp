#include <iostream>

using namespace std;

int Buscador(int V[], int *x, int *n, int *contador) {
    int indice;
    *contador = 0;
    
    for (int i = 0; i < *n && *contador != 2; i++) {
        
        
        if (V[i] == *x) {
            (*contador)++;
            indice = i;
        }
        
        
    }
    
    if (*contador != 2) {
        return -1;
    }
    
    else {
        return indice+1; // deixei "começando do 1" para ficar mais usual 
    }
}

int main() {   
    int x, n;
    int contador_registro_vetor = 0;
    cout << "Digite a chave de busca: ";
    cin >> x;
    
    cout << "Digite o número de elementos do vetor: ";
    cin >> n;
    
    int V[n];
    
    for (int i = 0; i < n && contador_registro_vetor !=2; i++) {
        cout << "Digite o valor da posição " << i+1 << " do vetor: "; // deixei "começando do 0" para ficar mais usual
        cin >> V[i];
        
        if (V[i] == x) {
            contador_registro_vetor++;
        }
    }
    
    int Resultado = Buscador(V, &x, &n, &contador_registro_vetor);
    
    if (Resultado != -1) {
        cout << "O índice da 2ª aparição da chave de busca é: " << Resultado << "\n";
    }
    
    else {
        cout << "A chave de busca não possui 2 aparições (" << Resultado << ")";
     }
    
    
    return 0;

}
