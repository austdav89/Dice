#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


void usage(void)
{
    printf("Usage: dice n\n");
    exit(1);
}

void drawDice(int n)
{
    switch(n)
    {
        case 1:
          printf("----------\n");
          printf("¦         ¦\n");
          printf("¦    O    ¦\n");
          printf("¦         ¦\n");
          printf("----------\n");
          break;
        
        case 2:
          printf("----------\n");
          printf("¦         ¦\n");
          printf("¦  O   O  ¦\n");
          printf("¦         ¦\n");
          printf("----------\n");
          break;
        
        case 3:
          printf("----------\n");
          printf("¦       O ¦\n");
          printf("¦    O    ¦\n");
          printf("¦ O       ¦\n");
          printf("----------\n");
          break;
        
        case 4:
          printf("----------\n");
          printf("¦ O     O ¦\n");
          printf("¦         ¦\n");
          printf("¦ O     O ¦\n");
          printf("----------\n");
          break;
        
        case 5:
          printf("----------\n");
          printf("¦ O     O ¦\n");
          printf("¦    O    ¦\n");
          printf("¦ O     O ¦\n");
          printf("----------\n");
          break;
        
        case 6:
        
          printf("----------\n");
          printf("¦ O     O ¦\n");
          printf("¦ O     O ¦\n");
          printf("¦ O     O ¦\n");
          printf("----------\n");
          break;
    }
    
}

void rollDice(int n)
{
    srand(time(NULL));
    
    for(int i = 0;i < n; ++i)
    {
        drawDice((rand() % 6) + 1);
    }
}

int isNum(char *s)
{
    int n = 0;
    
    while (s[n] != '\0')
    {
        if (!isdigit(s[n]))
        {
            return 0;
        }
        n++;
    }
    
    return 1;
}

int main(int argc, char *argv[])
{
    int n;
    
    if (argc == 1)
    {
        n = 1;
    }
    else if (argc == 2)
    {
        if(isNum(argv[1]))
        {
            n = atoi(argv[1]);
        }
        else
        {
            usage();
        }
    }
    else
    {
        usage();
    }
    
    rollDice(n);
    
    return 0;
}

