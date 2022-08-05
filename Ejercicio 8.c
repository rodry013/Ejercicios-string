
/*8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.*/

#include <stdio.h>
#include <string.h>

int main()
{
      char primero[30];
      char final[5] = "FIN\n";           // declaracion de variables 
      char ingresado[30];
     
      
   printf("Ingresar el primer nombre de la lista: ");
   fgets(primero , 30 , stdin);                                  // ingreso de nombres 
    
    do {
    
           printf("Ingresar los demás nombres de la lista: ");
           fgets(ingresado , 30 , stdin);
           
           
           if(strcmp(ingresado, final) == 0)    // pregunto si texto ingresado es igual a FIN antes de realizar la comparacion 
                break;
                
                if (strcmp (primero , ingresado) > 0 )        // comparacion
                  {
                      
                      strcpy (primero , ingresado);           // orden alfabetico
                      
                  }
      
   } while (1) ;  // while infinito 
    
  
   printf("El primer nombre fue: %s " , primero);      // salida en pantalla
   
}








