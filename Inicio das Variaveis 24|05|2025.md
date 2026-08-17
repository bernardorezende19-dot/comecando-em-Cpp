#include <iostream>
using namespace std;

int main()
{
    int varInt = 130;
    char c = 'z';
    double pflututante = 5.99;
    cout << "O valor da variável é: " << varInt << endl;
    cout << "O valor da variável é c é: " << c << endl;
    cout << "O valor da variável é  pflutuante é: " << pflututante << endl;

    cout << "Memória da variável varInt: " << sizeof(varInt) << endl;
    cout << "Memória da variável c: " << sizeof(c) << endl;
    cout << "Memória da variável pflutuante: " << sizeof(pflututante) << endl;
    
    return 0;
}
