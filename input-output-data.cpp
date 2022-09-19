#include <iostream>
using namespace std;

int main(){
    int age = 0; //inicializar la variable en 0
    cout << "Introduce tu edad: ";
    //Ahora que la variable age existe podemos asignarle nuevos valores utilizando cin
    cin >> age; //Lo que va a suceder es que la terminal de comandos va a recibir el dato, el sistema operativo se lo va a stremear a nuestro programa y va a recibirlo en nuestro programar para tenerlo ahora en su propia memoria
    /*¿Como yo se que realmente se introduce una edad correcta?
    Podemos hacer un feeedback al usuario, de forma que pueda se muestre la edad que introdujó anteriormente  */
    cout << "Tu edad es: " << age << endl;
    }