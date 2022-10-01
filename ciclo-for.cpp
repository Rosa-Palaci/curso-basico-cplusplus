#include <iostream>
using namespace std;

int main (){
    int list_num[] = {1,2,3,4,5,6,7,8,9,10};
    int limite = sizeof(list_num) / sizeof(list_num[0]); //sizeof tamaño de la variable, 4 bits por entero
    for (int i = 0; i < limite; i += 1){
        list_num[i]= list_num[i]*7;
        //cout << list_num[i]<<endl;
        if(list_num[i] % 2 == 0){
        cout<<list_num[i]<<endl;
        }
    }
}