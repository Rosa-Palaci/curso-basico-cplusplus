#include <iostream>
using namespace std;

int main(){
    //OPERADOR ARITMERICO
    int x = 12;
    float y = 3.1416;
    float z = x - y;
    cout << z << endl;

    //OPERADOR RELACIONALES DE TRUE AND FALSE
    bool relations = x > y;
    cout << relations << endl;
    // Imprime un 0 o 1 booleano true= 1 en binario o false = 0 en binario porque C++ es un lenguaje de bajo nivel 

    //OPERADORES DE ASIGNACIÓN 
    /*Asignan un nuevo valor a la variable apartir del valor anterior más un cambio que queramos agregar */
    x *= 10; // la variable x por 10  = 120 
    cout << x << endl;

    //Size Of
    /*Son operadores especiales dentro de C++ que nos perimite saber cosas sobre las variables.
    En este caso size of obtiene el tamaño en bits de un valor de un dato*/
    int b =  2;
    cout << "El tamano del valor de 2 es de: " << sizeof(b) << " bits" <<endl; // Esto es util por que sizeof nos permite realizar alguna operaciones por ejemplo con listas 
    //Ejemplo de utilidad de sizeof: si yo quisiera saber cuantos elemento tiene una lista podría utlizar sizeof y una operación de división para obtener cuantos elementos tiene de forma inteligente a continuación de la realización de esto:
    int ages_list[] = {12, 18, 32, 4, 57};
    //¿Cuántos elementos tiene la lista ages_list?
    cout << "Cantidad de la lista: " << sizeof(ages_list) / sizeof(ages_list[0]) << " elementos" << endl; //obtengo 5 elementos 
}