#include <iostream>
# include <math.h>

using namespace std;

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
    cout<< "segun nuestros parametros: DD"<<endl;
    while(i<3){
       cin>>DD;
       parametrosDD[i]=DD;
       i++;
    }
    int Parametros[3]={H,angulo,x1};
    switch (op) {

    case 1:{
    break;}

    case 2:{

        break;}
    }
}
    return 0;}
int funcioncañosnofensivo(int arreglo[]){
    int velx=cos(arreglo[1]);
    int posx=arreglo[2]+(velx*2.5);             //se toma el 2,5 debido a lo que tarda en llegar la informacion
    int vely=sin(arreglo[1])-(9.8*2.5);
    int posy=arreglo[0]+(vely*2.5)-(0.5*9.8*2.5*2.5);
    return velx, posx, vely, posy;
}
