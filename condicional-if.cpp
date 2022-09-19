#include <iostream>
using namespace std;
//CONDICIONALES
int main(){
    //OPERACIONES LÓGICAS
    bool result = false && true; //Operacdor AND &&
    bool result2 = true || true; //Operador OR ||
    bool result3 =! false; //Operador NOT != o depende del caso se puede usar =!
    cout << result << ", " << result2 << ", " << result3 << "\n\n\n\n";
    
    //CONDICIONAL IF
    //Caso si tienes la edad para votar minimo 18 maximo 40 años
    int age = 0; //inicializar en 0
    cout << "Ingresa tu edad: ";
    cin >> age; //para pedir al usuario su edad
    //Validaciones 
    if(age < 18){
        cout <<"No puedes votar :C";
    } else if(age > 40){
        cout <<"No puedes votar :C";
    } else {
        cout <<"Puedes votar C:";
    } 
}