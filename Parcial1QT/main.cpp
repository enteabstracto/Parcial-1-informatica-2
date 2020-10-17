#include <iostream>
# include <math.h>

using namespace std;
int funcioncañosnofensivo(int altura, int angulos, int posicioni);
int main()
{
int op=-1;
while(op!=0){
    cout<<" 1 para Generar disparos que comprometan la integridad del cañón defensivo"<<endl;
    cout<<" 2 para Generar disparos que comprometan la integridad del cañón ofensivo."<<endl;
    cout<<" 3 para generar disparos defensivos sin importar si el cañón ofensivo pueda ser destruido."<<endl;
    cout<<" 4 para generar disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos."<<endl;
    cin>>op;
    int H,angulo,x1,i,DD;
    int parametrosDD[]={};
    cout<<"ingrese la altura, la posicion y el angulo de el cañon ofensivo";
    cin >>H;
    cin>>angulo;
    cin>>x1;
    cout<< "segun nuestros parametros inicie con altura, lugo angulo y por ultimo posicion: DD"<<endl;
    while(i<3){
       cin>>DD;
       parametrosDD[i]=DD;
       i+=1;
    }
    int Parametros[4]={funcioncañosnofensivo(H, angulo, x1)};
    switch (op) {

    case 1:{
    break;}

    case 2:{
        int velDD= cos(angulo);
        int tiempoDD=(Parametros[1]-parametrosDD[1])/velDD;
        cout<<"la el tiempo de choque de el disparo es de : "<<tiempoDD<<endl;
        cout<<"la velocidad con al que choca el ddisparo a el cañon ofensivo es de: "<<velDD<<endl;
        break;}
    }
}
    return 0;}
int funcioncañosnofensivo(int altura, int angulos, int posicioni){
    int velx=cos(angulos);
    int posx=posicioni+(velx*2.5);             //se toma el 2,5 debido a lo que tarda en llegar la informacion
    int vely=sin(angulos)-(9.8*2.5);
    int posy=altura+(vely*2.5)-(0.5*9.8*2.5*2.5);
    return velx,posx,vely,posy;
    }
