#include <stdio.h>
#include<math.h>

int main(){
    
    float lado1;
    float lado2;
    float lado3;
    

    printf ("informe o lado 1 do triangulo: ");
    scanf ("%f", &lado1);

    printf ("informe o lado 2 do triangulo: ");
    scanf ("%f", &lado2);

    printf ("informe o lado 3 do triangulo: ");
    scanf ("%f", &lado3);



    if ( lado1 == lado2 && lado2 == lado3) {
        printf ("equilatero");
    }

    else if ( lado1 == lado2 || lado2 == lado3 || lado1 == lado3 ) {
        printf ("isosceles");
    }


    else if ( lado1 != lado2 && lado2 != lado3) {
        printf ("escaleno");

}

    


}