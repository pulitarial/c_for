#include <stdio.h> 
#include <stdbool.h> 

#define MSJ_HOLA "Hola!"

int main(){
    const int hasta= 10;


    for (int i = 1; i <= hasta;  ++i)
    {
        printf("%s\n", MSJ_HOLA);
    }
    
    return 0; 
}