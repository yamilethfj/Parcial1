#include <stdio.h>
#include <iostream>
float promedio(int valores[], int cantidad) {
    int i;
    float suma = 0.0;

    for (i = 0; i < cantidad; ++i)
        suma += valores[i];

    return suma / (float) cantidad;
}


int main() {

    int notas[10];
    char nombre[20];
    char codigo[20];
    char apellido[20];
    char curso[20];
    char opcion[3];
    char mensaje[20];
    int n, i;

    do {
    	system("cls");
    	printf("Ingreso de notas alumnos \n");
    	
        printf("Ingrese codigo del alumno: ");
        scanf("%s", codigo);
        
        printf("Ingrese nombre del alumno: ");
        scanf("%s", nombre);
        
        printf("Ingrese apellido del alumno: ");
        scanf("%s", apellido);
        
        printf("Ingrese curso del alumno: ");
        scanf("%s", curso);

        for (i = 0; i < 4; ++i) {
            printf("  Nota %d: ", i + 1);
            scanf("%d", &notas[i]);
        }
        
        float promefinal = promedio(notas, 4);
        
		
		system("cls");
		printf("Resultado final Alumno \n");
		printf("---------------------------- \n");
		printf("Alumno con el codigo: %s \n",codigo);
		printf("Nombre: %s %s \n",nombre, apellido);
		printf("En la clase de %s \n",curso);
        printf("Promedio %.1f \n", promefinal);
        printf("---------------------------- \n");
		if(promefinal >= 60){
			printf("Resultado final del Alumno: Alumno Aprobado \n");
		}else{
			printf("Resultado final del Alumno: Alumno Reprobado \n");
		}
		printf("---------------------------- \n");
        printf("Desea calcular mas promedios (si/no)? ");
        scanf("%s", opcion);

    } while (opcion[0] == 's' || opcion[0] == 'S');

    return 0;
}
