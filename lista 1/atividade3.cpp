#include <iostream>

using namespace std;

int main() {
    int num, i;
    bool primo = true;
    setlocale (LC_ALL, "Portuguese");

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            primo = false;
            break;
        }
    }

    if(primo) {
        cout << "O n�mero � primo";
    } else {
        cout << "O n�mero n�o � primo";
    }

    return 0;
}
