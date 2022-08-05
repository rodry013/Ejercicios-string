
/*4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.*/

#include <stdio.h>

int main()
{
   char palabra[30]; //declaracion de variables

   
    printf("Ingresar la primera palabra: ");                // Ingreso de datos
    fgets(palabra , 30 , stdin);
    
     int i = 0;
     int j = 0;                //declaracion de variables
     int acum = 0; 
     
     
      while (palabra[i++] != '\0');     //recorro la palabra
      
      for (j = 0 ; j < i ; j++)
      {
          if(palabra[j] == 'a')       //si en la palabra aparece la letra A suma el acumulador
           {
             acum ++;  
           }
      }

    if (acum != 0)
     {
         printf("La palabra posee %d letras A minusculas",acum);   //salida en pantalla
     }
    else
    {
        printf("La palabra no posee letras A minusculas");
    }
     
    
}






