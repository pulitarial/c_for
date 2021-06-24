#include <stdio.h> 
#include <stdbool.h> 

#define MSJ_A_DAR "Di una vuelta al parque!!!"

int main(){
    const int hasta= 7;


    for (int i = 1; i <= hasta;  ++i)
    {
        printf("%s\n", MSJ_A_DAR);
        printf("Vuelta numero %i\n", i );
        
    }
    
    return 0; 
}