#include <iostream>
#include <string> // nos permite declarar un nuevo tipo de dato para las variables
using namespace std;

int main(){
    string texto = "10";//esto funciona de escribir texto aunque poco eficiente
    cout << stoi(texto)*2;
}