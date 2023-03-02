#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese");
    int num, soma = 0;

    cout << "Digite um n�mero inteiro de tr�s d�gitos: ";
    cin >> num;

    if(num < 100 || num > 999) {
        cout << "N�mero inv�lido";
        return 0;
    }

    while(num > 0) {
        soma += num % 10;
        num /= 10;
    }

    cout << "A soma dos d�gitos �: " << soma;

    return 0;
}
