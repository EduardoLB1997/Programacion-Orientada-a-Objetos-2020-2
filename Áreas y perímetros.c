#include <stdioh>
#include <stdlib>
/* #include "Figuras.h"

int main (){
int opc;
do {
   printf("Que tipo de figura quieres?", \n);
   printf("1. Circulo \n 2. Cuadrado \n 3. Triángulo \n 4. Rectangulo \n 5. Pentagono \n 6. Hexagono \n 7. Salir del programa");
   scanf(%d, opc);
}
while(opc=!7);
   switch(opc){
   case 1:
   areaCirculo(float radio);
   perimetroCirculo(float radio);
   break;
   
   case 2:
   areaCuadrado(float lado);
   perimetroCuadrado(float lado);
   break;
   
   case 3:
   areaTriangulo(float base, float altura);
   perimetroTriangulo(float, base);
   break;
   
   case 4:
   areaRectangulo(float base, float altura);
   perimetroRectangulo(float base, float altura);
   break;
   
   case 5:
   areaPentagono(float base, float apotema);
   perimetroRectangulo(float base);
   break;
   
   case 6:
   areaHexagono(float base, float apotema);
   perimetroRectangulo(float base);
   break;
}
return 0;
}
