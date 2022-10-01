#include <iostream>
using namespace std;

int main(){
    while(true){
        char respuesta;
        cout<<"Deseas terminar?"<<endl;
        cin >> respuesta;
        if(respuesta == 'y'){
            cout <<"Bye bye"<<endl;
            break;
        }
    }
}