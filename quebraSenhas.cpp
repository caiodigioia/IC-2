#include <iostream>
#include <cstring>

using namespace std;

void findPassword(char* s, int n, int index, char* sb) {
    // se a senha atingiu o tamanho desejado, verifica a senha
    if (index == n) {
        s[index] = '\0'; // caractere nulo ao final da string
        int sucesso = system(strcat(strcpy(sb, "verif "), s));
        if (sucesso == 1) { 
            cout << "Sucesso! Senha encontrada: " << s << endl;
        }
        return;
    }

    // Gera senhas para todos os caracteres possíveis
    for (char letter = 'A'; letter <= 'Z'; letter++) {
        s[index] = letter;
        findPassword(s, n, index + 1, sb);
    }
}

int main() {
    char sb[106], s[100];
    int n;
    cout << "Entre com o tamanho da senha (maior que 1 e menor que 6): ";
    cin >> n;

    if (n < 2 || n > 6) {
        cout << "Erro no tamanho da senha." << endl;
    } else {
        findPassword(s, n, 0, sb);
    }

    return 0;
}
