#include <rafiki.h>

int main(){

    int n , x = 0;

    crearMatriz();
    //contarNu();
    mapeoPro();
    Mostrar();

    while(x == 0){
        cout << "¿Deseas dar otra vuelta de análisis? (Presiona 1, de lo contrario presiona 0" << endl;

        cin >> n;

        if(n == 1){
            mapeoPro();
        }else{
            x = 1;
            Mostrar();
        }
    }

    return 0;
}
