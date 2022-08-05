

/*3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.*/

#include <stdio.h>

int main()
{

   char palabra1[30]; //declaracion de variables
   char palabra2[30];
   
    printf("Ingresar la primera palabra a comparar: ");
    fgets(palabra1 , 30 , stdin);
                                                                  //Ingreso de datos
    printf("\nIngresar la segunda palabra a comparar: ");
    fgets(palabra2 , 30 , stdin);
  
    int i = 0;
    int j = 0;
    int acum = 0;
   
   
    while (palabra1[i++] != '\0');  
    while (palabra2[j++] != '\0');   // Se recorren las palabras

    if (i == j)
      {
          for (i = 0 ; i < j ; i++)
           {
               if (palabra1[i] == palabra2[i])      // comparacion
                {
                    acum ++;
                }
           }
      }
    
    if (acum == j)    
     {
         printf("Las palabras son iguales");
     } 
    else                                                //salida en pantalla
     {
        printf("Las palabras son distintas");
     }
    
       
}


