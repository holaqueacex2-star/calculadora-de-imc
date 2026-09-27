#include <stdio.h>

    float AreaRectangulo(float longitud, float altura){
        return longitud * altura;
    } float PerimetroTectangulo(float longitud, float altura){
        return 2 * (longitud + altura);
    } float AreaCiruculo(float radio){
        return 3.14 * radio * radio;
    } float PerimetroCirculo(float radio){
        return 2 * 3.14 * radio;
    }
    void ImprimirResultados(float area, float perimetro){
        printf("el area es: %.2f\n", area);
        printf("el perimetro es: %.2f\n", perimetro);
        
    }
    
int main(void){    
    int opcion;
    float radio, perimetro, altura, area, longitud;
    
    printf("seleccione una figura:\n");
    printf("1.Rectangulo\n");
    printf("2.circulo\n");
    
    printf("seleccione una opcion: ");
    scanf("%d", &opcion);
    
    while (opcion != 1 && opcion != 2){
        printf("opcion incorrecta, ingrese una valida:");
        scanf("%d", &opcion);
    }
    if (opcion == 1){
        printf("ingrese la longitud:");
        scanf("%f", &longitud);
        
        printf("ingrese la altura:");
        scanf("%f", &altura);
        
        area=AreaRectangulo(longitud, altura);
        perimetro=PerimetroTectangulo(longitud, altura);
        
    } else if (opcion == 2){
        printf("ingrese el radio: ");
        scanf("%f", &radio);
        
        area=AreaCiruculo(radio);
        perimetro=PerimetroCirculo(radio);
    }
    ImprimirResultados(area, perimetro);
    return 0;
}