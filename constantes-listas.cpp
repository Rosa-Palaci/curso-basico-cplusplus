#include <iostream>
using namespace std;

int main(){
    int age = 0;
    age = 21;
    
    char letter = 'R';
    cout << age << endl; //estructura basica de la variable
    cout << letter << " "; // ^ endl da un salto de linea
    //Forma para que los valores no se puedan editar para fijar, esto es depende de las necesidades por ejemplo para que no se rompa depende del caso
    //CONSTANTE
    const char letterV = 'v';
    //letterR = 'Aa'; ERROR: Esta variable no se puede modificar ya que esta fija por el const
    cout << letterV << endl;

    //LISTAS
    int ages_list[] = {28, 34, 18, 4}; //Lista de valores uno tras otro y indicar al lenguajes que es una lista con los [] {} 
    //cout << ages_list; //imprime la dirección en memoria de la lista ages_list
    //Como imprir un valor de una lista: accediendo al numero de lista conocido como el indice que se cuenta del 0 al ...
    //Reasignarle un nuevo valor a un elemento de la lista de la siguiente forma y se programa antes de cout que imprime el valor porque sino imprime el valor original
    ages_list[3] = 5;
    cout << ages_list[3];
}