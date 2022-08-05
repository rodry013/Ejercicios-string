
/*4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.*/

#include <stdio.h>

int main()
{
   char palabra[30]; //declaracion de variables

   
    printf("Ingresar la primera palabra: ");
    fgets(palabra , 30 , stdin);
    
     int i = 0;
     int j = 0;
     int acum = 0;
     
     
      while (palabra[i++] != '\0');  
      
      for (j = 0 ; j < i ; j++)
      {
          if(palabra[j] == 'a')
           {
             acum ++;  
           }
      }

    if (acum != 0)
     {
         printf("La palabra posee %d letras A minusculas",acum);
     }
    else
    {
        printf("La palabra no posee letras A minusculas");
    }
     
    
}




