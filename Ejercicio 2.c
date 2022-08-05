

/*2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".*/


#include <stdio.h>

int main()
{
   
   char palabra[15];  //declaracion de variables 
   
   printf("Ingresar una palabra: ");   //ingreso de datos
   fgets(palabra , 15 , stdin);
   
   int i = 0;
   
   while (palabra[i++] != '\0');  // palabra[i++] para que llegue al final de la cadena (\0)
    
       printf ("La palabra escrita al reves es: ");
    
   while (i >= 0)  // impresion al reves
       
        printf("%c",palabra[i--]);  //salida en pantalla
}







