#include <iostream>
using namespace std;
int main() {
    char i = 's';
    while (i == 's'|| i == 'S') {
    cout << "digite um npumero correspondente a sua doação" << endl;
    int num;
    cin >> num;

    switch (num) {
        case 1:
            cout << "Você doou R$ 5" << endl;
            break;
        case 2:
            cout << "Você doou R$ 10" << endl;
            break;
        case 3:
            cout << "Você doou R$ 30" << endl;
            break;
        case 4:
            cout << "Você doou R$ 50" << endl;
            break;
        case 5:
            cout << "Você doou R$ 100" << endl;
            break;

        default:
            cout <<"O valor digitado não corresponde a uma doação válida!"<< endl;
    }
    cout << "Deseja fazer outra doação? (s/n)" << endl;
    cin >> i;
    }
        cout << "Obrigado por sua doação!" << endl;
    return 0;
}