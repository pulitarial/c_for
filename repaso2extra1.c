#include <stdio.h> 
#include <stdbool.h> 

#define MSJ_A_DAR "Di una vuelta al parque!!!"

int main(){
    const int hasta= 7;


    for (int i = 4; i <= hasta;  ++i)
    {
        printf("%s\n", MSJ_A_DAR);
        
    }
    
    return 0; 
}