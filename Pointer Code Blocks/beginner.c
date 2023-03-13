
#include <stdio.h>

int main(){ 
    int age = 25; 
    int* ptr = &age; 

    printf("Addrees: %p\n", ptr); 

    printf("Value: %d", *ptr); 

    return 0; 
}
// change value (25) using the pointer into 31

#include <stdio.h>

int main (){ 

    int age = 25; 

    int* ptr = &age; 

    *ptr = 31; 

    printf ("%d", age); 

    return 0;
}

