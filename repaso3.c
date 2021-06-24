#include <stdio.h> 
#include <stdbool.h> 



int main(){
    int consumo_app= 0;
    int bateria_restante=0;
    int cantidad_usos= 0;
    const int TOTAL_BATERIA= 100;

    printf("Ingrese el consumo de la app en su celular: \n");
    scanf("%i", &consumo_app);

    for (int i = consumo_app;i <= TOTAL_BATERIA; i= i+ consumo_app)
    {
    	printf("Bateria: %i \n", i);
    }


    
    
    return 0; 
}