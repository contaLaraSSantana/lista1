#include <iostream>

using namespace std;

int main() {
    int num, i;
    bool primo = true;
    setlocale (LC_ALL, "Portuguese");

    cout << "Digite um número inteiro: ";
    cin >> num;

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            primo = false;
            break;
        }
    }

    if(primo) {
        cout << "O número é primo";
    } else {
        cout << "O número não é primo";
    }

    return 0;
}
