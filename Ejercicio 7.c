
/*7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.*/


#include <stdio.h>
#include <string.h>


int main()
{
    char nombre[30];
    char nombrejoven[30];            // declaracion de varibles 
    int edad; 
    int joven;
    

    for (int i = 0 ; i < 5 ; i++)
     {
         printf("\nIngresar el nombre de la persona N°%d : ", i + 1);
         scanf("%s",nombre);                                                  //Ingreso de datos
         
         printf("Ingresar la edad de la persona N°%d : ",i + 1);
         scanf("%d",&edad);
     
         if ( i == 0)
          {
            joven = edad;                                       // caso 1, osea el que compora con lo demas 
            strcpy (nombrejoven , nombre );
          }
    
         if ( edad < joven)
          {
            strcpy( nombrejoven , nombre );                 //deteccion de nombre e copiado del string
            joven = edad;
          }
     
    }
  
   printf("\nEl nombre de la persona mas joven es %s ", nombrejoven);          //salida en pantalla
          
      
      
        

     
    
    
}



