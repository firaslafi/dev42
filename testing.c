


#include <unistd.h>


void    *ft_memmove(void *dest, const void *src, int n)
{

        char    *tmp;
        write(1, "S:", 2);
        write(1, src, 5);
        write(1, "\n", 1);
        write(1, "D:", 2);
        write(1, dest, 5);
        write(1, "\n", 1);
        write(1, "after", 5);
        write(1, "\n", 1);
        tmp = (char*) src;
        (char * ) (dest = tmp);
       write(1, dest, 5);
       //write(1, "\n", 1);
       //write(1, dest, 5);
 }

int main(void)
{

    char *s = "hello";
    char *d = "xxxxx";
    ft_memmove(d, s, 3);
    
    //write(1, "\n", 1);
    //write(1, d, 5);
    //write(1, s, 5);
}
