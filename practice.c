#include <stdio.h>
#include <stdlib.h>

int main()
{
     char characterName[] = "John";
     int  characterAge = 35;
	
//     printf("Hello World!\n");
       printf("There once was a man named %s.\n", characterName);
       printf("%s was %d years old.\n", characterName, characterAge);
       printf("He really liked the name %s.\n", characterName);
       printf("He didn't like being %d though.\n", characterAge);
   
       return 0;
}

