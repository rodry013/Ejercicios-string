


/*6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con mayúsculas.*/


#include <stdio.h>
#include <string.h>

int main () {
                           //declaracion de variables 
    char palabra[30];
    char mayus[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int acum[26]= { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};
    int comp = 0;
    int pos = 0;
 
    int i , j;


    printf("Ingresar una palabra: ");              // ingreso de datos
    fgets(palabra , 30 , stdin);

 

     for (j = 0 ; j < strlen(palabra) ; j++ )        //recorro la palabra
       { 
          for (int k = 0 ; k < 26 ; k++)
          {
             if (palabra[j] == mayus[k])       //acumulador en base las letras que se repiten en el vector mayus[]
              {
                  acum[k]++;
              }          
                
             if(acum[k] > comp)                 //busqueda acumulador es mas grande
              {        
                comp = acum[k];
                pos = k;
              }
          }

       }


    printf("\nLa letra que aparece mayor cantidad de veces es la letra %c",mayus[pos]);  //salida en pantalla

}
