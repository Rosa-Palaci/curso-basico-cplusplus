#include <iostream>
using namespace std;

int main(){
    for(int i=0;i< 10000;i++){
        char respuesta = 'a';
        cout<<"Deseas terminar?"<<endl;
        cin >> respuesta;
        if(respuesta == 'y'){
            cout <<"Bye bye"<<endl;
            break;
        }
    }
}