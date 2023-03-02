#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
    int num, soma = 0;

    cout << "Digite um número inteiro de três dígitos: ";
    cin >> num;

    if(num < 100 || num > 999) {
        cout << "Número inválido";
        return 0;
    }

    while(num > 0) {
        soma += num % 10;
        num /= 10;
    }

    cout << "A soma dos dígitos é: " << soma;

    return 0;
}
