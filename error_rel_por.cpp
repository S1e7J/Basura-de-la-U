#include "iostream"
#include <cmath>
using namespace std;
float err_por(float T, float E){
    float err = (E-T)/E;
    return err*100;
}
int main(){
    float Teo;float Exp;
    cout << "Ingrese el valor teorico"<<endl;
    cin >> Teo;
    cout << "Ingrese el valor experimental"<<endl;
    cin >> Exp;
    cout << "Su error relativo porcentual es: "<< err_por(Teo,Exp) <<endl;
    return 0;
}
