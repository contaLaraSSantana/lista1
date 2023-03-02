#include <iostream>
#include <string>
using namespace std;
int main() {
setlocale (LC_ALL, "Portuguese");
string nome;
int idade;
cout << "Digite o nome da pessoa: ";
getline(cin, nome);
cout << "Digite a idade da pessoa: ";
cin >> idade;
if (idade < 18) {
cout << nome << ", você é menor de idade" << endl;
}
else if (idade >= 18 && idade <= 65) {
cout << nome << ", você é adulto(a)" << endl;
}
else {
cout << nome << ", você é idoso(a)" << endl;
}
return 0;
}
