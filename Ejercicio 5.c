
/*5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.*/

#include <stdio.h>

int main()
{
   char palabra[30]; //declaracion de variable
   
   
   
    printf("Ingresar la primera palabra:");    //Ingreso de datos
    fgets(palabra , 30 , stdin);
    
     int j = 0;
     int acum1 = 0;
     int acum2 = 0;
     
     
      for (j = 0 ; j <= 30 && palabra[j] != '\0' ; j++); // recorro la palabra ingresada
      
          for (int k = 0 ; k < j ; k++)  // recorro las letras de la palabra 1 por 1. 
          {
             if(palabra[k] == 'a' || palabra[k] ==palabra[k] == 'e' || palabra[k] =='i' || palabra[k] =='o' || palabra[k] =='u')
              {
                acum1++;
              }                                                   //comparacion
          
             if(palabra[k] == 'A' || palabra[k] == 'E' || palabra[k] == 'I' || palabra[k] =='O' || palabra[k] == 'U')
              {
                acum2++;
              }
          }
        
          
      if (acum1 != 0)      //distinto de cero es cuando la palabra tenga vocales
     {
         printf("\n-La palabra posee %d vocales minusculas",acum1);
     }
    else
     {
        printf("\n-La palabra no posee vocales minusculas");
     }
    
    if (acum2 != 0)      //distinto de cero es cuando la palabra tenga vocales
     {
         printf("\n-La palabra posee %d vocales mayusculas",acum2);
     }
    else
     {
        printf("\n-La palabra no posee vocales mayusculas");
     }
}


