#include <iostream>
using namespace std;

int suma(int a, int b){
    return a + b ;
}//funcion de suma de dos valores

float multiplicacion (float a, float b = 2){
    return a * b;
}

int main(){
    //cout<< suma(2, 782)<<endl;
    cout << multiplicacion(200,6)<<endl;
}