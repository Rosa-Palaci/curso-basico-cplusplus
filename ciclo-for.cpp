#include <iostream>
using namespace std;

int main (){
    int list_num[] = {1,2,3,4,5,6,7,8,9,10};
    int limite = 0;
    cout << "Limite: "<<endl;
    cin >> limite;
    cout<<"\n";
    
    for (int i = 1; i < limite; i += 1){
        cout<<list_num[i]*2<<endl;
    }
}