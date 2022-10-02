#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
    float ranx = 0, rany= 0, ranz= 0, x, y, acum2, acum1, suma;
    int turno = 1, turno2 = 0, pl1, pl2;
    while(turno <= 3){
        ranx = (float)(rand()% (7000 - 1000) + 1000);
        ranx = ranx / 1000;
        rany = (float)(rand() % (7000 - 1000) + 1000);
        rany = rany / 1000;
        ranz = (float)(rand() % (7000 - 1000) + 1000);
        ranz = ranz / 1000;
        printf("Turno %d Jugador 1\n", turno++);
        printf("Ingresa X: ");
        scanf("%f", &x);
        printf("Ingresa Y: ");
        scanf("%f", &y);
        if(ranz >= 0.5){
            x = x + ranx;
            y = y + rany;
            suma = pow(x, 2) + pow(y , 2);
            acum1 = sqrt(suma);
        }else if(ranz < 0.5){
            x = x - ranx;
            y = y - rany;
            suma = (pow(x, 2) + pow(y, 2));
            acum1 = sqrt(suma); 
        }
        if(acum1 < 2 && acum1 >-2){
            pl1+=10;
        }else if(acum1 >= 2 && acum1 < 6){
            pl1+=5;
        }else if(acum1 >= 6 && acum1 < 10){
            pl1+=1;
        }else{
            pl1+=0;
        }
    
        while(turno2 < 3){
            printf("Turno %d jugador 2\n", ++turno2);
            printf("Ingresa X: ");
            scanf("%f", &x);
            printf("Ingresa Y: ");
            scanf("%f", &y);
            turno2 += 3;
            if(ranz >= 0.5){
                x = x + ranx;
                y = y + rany;
                suma = pow(x, 2) + pow(y, 2);
                acum2 = sqrt(suma);
            }else if(ranz < 0.5){
                x = x - ranz;
                y = y - rany;
                suma = (pow(x, 2) + pow(y, 2));
                acum2 = sqrt(suma);
            }
            if (acum2 < 2 && acum2 > -2){
                pl2 += 10;
            }else if(acum2 >= 2 && acum2 < 6){
                pl2 += 5;
            }else if(acum2 >= 6 && acum2 < 10){
                pl2 += 1;
            }else{
                pl2 += 0;
            }
        }
        turno2 -= 3;
    }
    if (pl1 > pl2){
        printf("Ganó el jugador 1 con: %d", pl1);
    }else if(pl2 > pl1){
        printf("Ganó el jugador 2 con: %d", pl2);
    }else{
        printf("Empataron con: J1 %d y J2 %d", pl1, pl2);
    }   
    return 0;
}