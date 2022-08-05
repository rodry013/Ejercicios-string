
/*9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // declaracion de variables
    char palabra[30];
    char letras[]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','w', 'x','y','z'};
    int i , j;
    
    printf("Ingresar texto a encriptar: ");
    fgets(palabra,30,stdin);
    
    //for correspondiente a la palabra 
    for (i = 0 ; i < strlen(palabra) ; i++) // strlen para recorrer el for la cantidad de caracteres que haya en la palabra
    {
        //for correspondiente a las letras
        for(j = 0 ; j <= 26 ; j++ )
        {
            if(palabra[i] == letras[j]) // si la palabra es igual a las letras se suman 3 a su valor.
            {
                int cod = (j + 3) % 26;     // codificacion en cesar, divido por 26 para que de la z se pueda ir de manera correcta hacia la letra designada correctamente
                palabra[i] = letras[cod];
                break;
        }
    }
}
    
     printf("El texto codificado es %s ", palabra) ;   //salida en pantalla
     
}

  


