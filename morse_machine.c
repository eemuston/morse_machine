#include <stdio.h>

void morse_machine(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (i > 0)
            printf(" ");
        if (str[i] == 'a' || str[i] == 'A')
            printf(".-");
        else if (str[i] == 'b' || str[i] == 'B')
            printf("-...");
        else if (str[i] == 'c' || str[i] == 'C')
            printf("-.-.");
        else if (str[i] == 'd' || str[i] == 'D')
            printf("-..");
        else if (str[i] == 'e' || str[i] == 'E')
            printf(".");
        else if (str[i] == 'f' || str[i] == 'F')
            printf("..-.");
        else if (str[i] == 'g' || str[i] == 'G')
            printf("--.");
        else if (str[i] == 'h' || str[i] == 'H')
            printf("....");
        else if (str[i] == 'i' || str[i] == 'I')
            printf("..");
        else if (str[i] == 'j' || str[i] == 'J')
            printf(".---");
        else if (str[i] == 'k' || str[i] == 'K')
            printf("-.-");
        else if (str[i] == 'l' || str[i] == 'L')
            printf(".-..");
        else if (str[i] == 'm' || str[i] == 'M')
            printf("--");
        else if (str[i] == 'n' || str[i] == 'N')
            printf("-.");
        else if (str[i] == 'o' || str[i] == 'O')
            printf("---");
        else if (str[i] == 'p' || str[i] == 'P')
            printf(".--.");
        else if (str[i] == 'q' || str[i] == 'Q')
            printf("--.-");
        else if (str[i] == 'r' || str[i] == 'R')
            printf(".-.");
        else if (str[i] == 's' || str[i] == 'S')
            printf("...");
        else if (str[i] == 't' || str[i] == 'T')
            printf("-");
        else if (str[i] == 'u' || str[i] == 'U')
            printf("..-");
        else if (str[i] == 'v' || str[i] == 'V')
            printf("...-");
        else if (str[i] == 'w' || str[i] == 'W')
            printf(".--");
        else if (str[i] == 'x' || str[i] == 'X')
            printf("-..-");
        else if (str[i] == 'y' || str[i] == 'Y')
            printf("-.--");
        else if (str[i] == 'z' || str[i] == 'Z')
            printf("--..");
        else if (str[i] == '1')
            printf(".----");
        else if (str[i] == '2')
            printf("..---");
        else if (str[i] == '3')
            printf("...--");
        else if (str[i] == '4')
            printf("....-");
        else if (str[i] == '5')
            printf(".....");
        else if (str[i] == '6')
            printf("-....");
        else if (str[i] == '7')
            printf("--...");
        else if (str[i] == '8')
            printf("---..");
        else if (str[i] == '9')
            printf("----.");
        else if (str[i] == '0')
            printf("-----");
        else if (str[i] == '.')
            printf(".-.-.-");
        else if (str[i] == ',')
            printf("--..--");
        else if (str[i] == '?')
            printf("..--..");
        else if (str[i] == ' ')
            printf("/");
        else
            printf("?");
        i++;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    int i;

    if (argc < 2)
    {
        printf("Not enough arguments\n");
        return (1);
    }
    i = 1;
    while (argv[i])
    {
        morse_machine(argv[i]);
        i++;
    }
    return (0);
}