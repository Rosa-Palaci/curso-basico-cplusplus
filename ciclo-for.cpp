#include <iostream>
using namespace std;

int main (){
    int list_num[] = {1,2,3,4,5,6,7,8,9,10};
    // int limite = 0;
    // cout << "Limite: "<<endl;
    // cin >> limite;
    // cout<<"\n";
    int limite = sizeof(list_num) / 4; //sizeof tamaño de la variable, 4 bits por entero
    for (int i = 1; i < limite; i += 1){
        cout<<list_num[i]*2<<endl;
    }
}