#include <stdio.h>

int main() {
    int age;
    printf("Kitne saal ke ho bhaishaab: ");
    scanf("%d", &age);
    if(age>18)
    {
        printf("Aap vote de sakte hai");
    }
    else{
        printf("Agar aapki modiji se setting hai toh vote dedena");
    }

    return 0;
}
