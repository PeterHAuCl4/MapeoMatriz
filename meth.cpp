#include<rafiki.h>

int mole[filas][columnas];
int k , l , comedor = 0 , coliflor = 0;
int Guardado[filas*columnas][2] = {'\0'};

int crearMatriz(){

        srand(time(NULL)); //Genera el número aleatorio.

        for(int i = 0; i < filas ; i++){
            for(int j = 0; j < columnas; j++){

                int variable = 0+rand()%(2); // definir el rango de los números aleatorios.
                mole[i][j] = variable;
            }
        }

        cout << "Matriz a evaluar: \n";

        for(int i = 0; i < filas ; i++){
            //cout << i << ".- ";
            for(int j = 0; j < columnas; j++){
                cout << mole[i][j] << "  ";
                if( j%3 == 0){
                    //cout << "-";
                }
            }
            cout << " \n";
        }

    return 0;
}

void mapeoPro(){

    coliflor ++;

    for(k = 1; k < filas-1; k+=3){
        for(l = coliflor + 1; l < columnas-1; l+=3){

            if(mole[k][l] == Gioba){
                Pos(k,l);
                mapeoVecinos();
            }else{
                continue;
            }
        }
    }
}

void mapeoVecinos(){

    for(int i = k-1; i <= k+1; i++){
        for(int j = l-1; j <= l+1; j++){

            if(mole[i][j] == Gioba){
                Pos(i,j);
            }else{
                continue;
            }
        }
    }
}

void Pos(int x, int y){

    comedor++;

    Guardado[comedor][0] = x;
    Guardado[comedor][1] = y;

}
void Mostrar(){

    int matAux[comedor][2] = {'\0'};
    int comadre = 0;
    bool barbacoa = false;

    for(int i = 0; i < comedor; i++){

        for(int j = 0; j < comedor; j++){
            if((Guardado[i][0] == matAux[j][0]) && (Guardado[i][1] == matAux[j][1])){
                barbacoa = true;
                break;
            }
        }

        if(barbacoa == false){
            matAux[comadre][0] = Guardado[i][0];
            matAux[comadre][1] = Guardado[i][1];
            comadre++;
        }
        barbacoa = false;
    }

    for(int i = 0; i < comedor; i++){
        if((matAux[i][0] == '\0') && (matAux[i][1] == '\0')){
            break;
        }else{
            cout << /*"Los vecinos son: " << */matAux[i][0] << "," << matAux[i][1] << "    ";
        }
        if(i%3 == 0 )
            cout << "\n";
    }
cout << "\n" << endl;
}

void mapeoN(){

//    for(){
//        for(){
//
//        }
//    }
}

int contarNu(){

    int cont = 0;

    cout << "Se buscará el número de repiticiones del número 1\n";

    for(int i = 0; i < filas ; i++){
        for(int j = 0; j < columnas; j++){
            cout << mole[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < columnas; i ++){
        for(int j = 0; j < filas; j++){
            switch (mole[i][j]) {
            case 1:
                cont++;
                break;
            default:
                continue;
                break;
            }
        }
    }

    cout << "El número de 1's es: " << cont << endl;
return 0;
}
