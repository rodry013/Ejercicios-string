
/*1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.*/

#include <stdio.h>
  int cantidad_letras();

int main()
{
  
   int letras;
   char palabra[20];
   
     printf("Ingresar una palabra de minimo 20 caracteres\n");
   
     printf("Ingresar una palabra :");                            // Ingreso en pantalla

 letras = cantidad_letras (palabra); //funcion
 
     printf("La palabra ingresada tiene: %d letras" , letras);   //salida en pantalla
}
    
    
int cantidad_letras(int letras)     // esta funcion esta para detectar el enter al ingresar la palabra y asi devolver la cantidad de letras
{
  for (letras = 0 ; letras < 20 ; letras++)
       {
          char finalizacion;
          finalizacion = getchar();        //funcion que detecta cuando se ingresa un enter
           
           if (finalizacion == '\n')
           {
               return letras;
           }
       }
  

}









