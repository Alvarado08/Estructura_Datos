#include <iostream>

using namespace std;

void binario (int n){
if (n>1) binario (n/2);
cout << n%2;
}

int main()
{
    int n;
    do{
    cout << "DAME UN NUMERO" << endl;
    cin >> n;
    if (n<0)
        cout << "\nNUMERO ERRONEO\n";
    }while (n<0);
    cout << "\nNUMERO: " << n;
    cout << "\nBINARIO: ";
    binario(n);
    return 0;
}
