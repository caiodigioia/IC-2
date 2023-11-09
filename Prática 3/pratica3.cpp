#include <iostream>
using namespace std;


void somaMatrizes(float **matrizA, float **matrizB, int n, float **resultadoSomaMatrizes) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultadoSomaMatrizes[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void multiplicacaoMatrizes(float **matrizA, float **matrizB, int n, float **resultadoMultMatrizes) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            float somaParcial = 0;
            for (int k = 0; k < n; k++) {
                somaParcial += matrizA[i][k] * matrizB[k][j];
            }
            resultadoMultMatrizes[i][j] = somaParcial;
        }
    }
}

void somaTracosMatrizes(float **matrizA, float **matrizB, int n, float *resultadoTraco) {
    for (int i = 0; i < n; i++) {
        *resultadoTraco = matrizA[i][i] + matrizB[i][i];
    }
}

int main () {
    int n;
    cout << "Digite a ordem das matrizes A e B: ";
    cin >> n;

    
    float **matrizA = new float*[n];
    float **matrizB = new float*[n];

        for (int i = 0; i < n; i++) {
            matrizA[i] = new float[n]; 
            matrizB[i] = new float[n];
            for (int j = 0; j < n; j++) {
                cout << "Digite o elemento da linha " << i << " e coluna " << j << " da matriz A: "; 
                cin >> matrizA[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << "Digite o elemento da linha " << i << " e coluna " << j << " da matriz B: "; 
                cin >> matrizB[i][j];
            }
        }

    int opcao = 0;

    while (opcao != 1 && opcao != 2 && opcao != 3 && opcao !=4) {
        cout << "Qual operação deseja fazer? " << "\n" << "1) Soma de Matrizes" << endl << "2) Multiplicação de Matrizes" << endl << "3) Soma dos Traços das Matrizes" << endl << "4) Todos" << endl;
        cin >> opcao;
        cout << endl;
        }

        float **resultadoSoma;
        float **resultadoMult;
        float resultadoTraco;

        switch(opcao) {
            case 1:
                resultadoSoma = new float *[n];
                for (int i = 0; i < n; i++) {
                    resultadoSoma[i] = new float[n];
                }
                somaMatrizes(matrizA, matrizB, n, resultadoSoma);

                for (int i = 0; i < n; i++) {
                    cout << "\n";
                    for (int j = 0; j < n; j++) {
                        cout << resultadoSoma[i][j] << " ";
                    }
                }
                break;
            case 2:
                resultadoMult = new float *[n];
                for (int i = 0; i < n; i++) {
                    resultadoMult[i] = new float[n];
                }
                multiplicacaoMatrizes(matrizA, matrizB, n, resultadoMult);

                for (int i = 0; i < n; i++) {
                    cout << "\n";
                    for (int j = 0; j < n; j++) {
                        cout << resultadoMult[i][j] << " ";
                    }
                }
                break;
            case 3:
                somaTracosMatrizes(matrizA, matrizB, n, &resultadoTraco);
                cout << resultadoTraco;
                break;
            case 4:
                resultadoSoma = new float *[n];
                for (int i = 0; i < n; i++) {
                    resultadoSoma[i] = new float[n];
                }
                somaMatrizes(matrizA, matrizB, n, resultadoSoma);

                cout << "Soma das matrizes: " << endl;
                for (int i = 0; i < n; i++) {
                    cout << "\n";
                    for (int j = 0; j < n; j++) {
                        cout << resultadoSoma[i][j] << " ";
                    }
                }

                resultadoMult = new float *[n];
                for (int i = 0; i < n; i++) {
                    resultadoMult[i] = new float[n];
                }
                cout << endl;
                multiplicacaoMatrizes(matrizA, matrizB, n, resultadoMult);

                cout << endl << "Multiplicação das matrizes: " << endl;
                for (int i = 0; i < n; i++) {
                    cout << "\n";
                    for (int j = 0; j < n; j++) {
                        cout << resultadoMult[i][j] << " ";
                    }
                }
                cout << endl;

                somaTracosMatrizes(matrizA, matrizB, n, &resultadoTraco);
                cout << endl << "Soma dos traços das matrizes: ";
                cout << resultadoTraco;
                break;
        }
    
    
    return 0;

}
