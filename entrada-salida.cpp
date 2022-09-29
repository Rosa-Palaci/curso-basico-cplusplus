#include <iostream>
using namespace std;

int main(){
    int option = 0;
    cout << "Enter an option: "<<endl;
    cin >> option;
    //Validar la solucion de usuario
    switch (option)
    {
    case 1:
        cout << "Option 1"<<endl;
        break; //una vez que termine de ejecutar termine el switch o condicional
    case 2:
        cout << "Option 2"<<endl;
        break;
    default:
        cout << "Invalid option"<<endl;
    }
}