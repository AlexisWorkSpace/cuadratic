#include<stdio.h>
#include<math.h>

typedef struct {
        float cuadratic = 0;
        float lineal = 0;
        float independent = 0;
} function;

float horizontal_vertice(float, float);
float vertical_vertice(float, float, float, float);

int main(){

        function coefficient;

        printf("ingrese el coeficiente cuadratico-> "); scanf("%f", &coefficient.cuadratic);
        printf("ingrese el coeficiente lineal-> "); scanf("%f", &coefficient.lineal);
        printf("ingrese el coeficiente independiente-> "); scanf("%f", &coefficient.independent);

        float hVertices = horizontal_vertice(coefficient.cuadratic, coefficient.lineal);
        float vVertices = vertical_vertice(coefficient.cuadratic, coefficient.lineal, coefficient.independent, hVertices);

        printf("vertice en eje x-> %.2f\n", hVertices);
        printf("vertice en eje y-> %.2f\n", vVertices);
        return 0;
}

float horizontal_vertice(float a, float b) {
        return (-b)/(2 * a);
}

float vertical_vertice(float a, float b, float c, float horizontal_vertice){
        return (a * pow(horizontal_vertice, 2) + b * horizontal_vertice + c);
}
