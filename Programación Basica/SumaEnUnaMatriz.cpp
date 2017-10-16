#include "stdio.h"
#include "conio.h"
#include"iostream"


int m[3][3];
int x,y;

void mayorfila();
void sumacolumna();
void llenar();

void llenar(){
 for ( int x=0;x<=2;x++){
    for (y=0;y<=2;y++){
        scanf("%d",&m[x][y]);
        }
        }
        }
        
        void mostrar(){
             for(x=0;x<=2;x++){
                  for(y=0;y<=2;y++){
                       printf("%d\t",m[x][y]);
                       }
                       printf("\n");
                       }
                       }
                                                 
        
    void mayorfila(){
         int mayor;
         for(x=0;x<=2;x++){
           mayor=0;
            for(y=0;y<=2;y++){
            if(m[x][y]>mayor);
            mayor=m[x][y];
            }
            printf("El mayor de la fila es %d es %d\n",x,mayor);
            }
            }
            
            void sumacolumna(){
                     int suma=0;
                     for(x=0;x<=2;x++){
                        suma=0;
                        for(y=0;y<=2;y++){
                        suma=suma+m[y][x];
                        }
                        printf("El resultado de la suma es %d \n",suma);
                        
                        }
                        }
int main(){
    llenar();
    mayorfila();
    sumacolumna();
    mostrar();
    getch();
    
    }
    
    
 
    
