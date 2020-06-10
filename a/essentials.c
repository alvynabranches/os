#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <dos.h>

char *convert(unsigned int num, int base)
{
    static char Representation[] = "0123456789ABCDEF";
    static char buffer[50];
    char *ptr;

    ptr = &buffer[49];
    *ptr = '\0';

    do
    {
        *--ptr = Representation[num%base];
        num /= base;
    } while(num != 0);
    return(ptr);
}

void print(char* format, ...)
{
    char * traverse;
    unsigned int i;
    char *s;

    // Module 1: Initializing printf's arguments
    va_list arg;
    va_start(arg, format);
    
    for( traverse = format; *traverse != '\0'; traverse++ )
    {
        while( *traverse != '%' )
        {
            putchar(*traverse);
            traverse++;
        }

        traverse++;

        // Module 2: Fetching and executing arguments
        switch(*traverse)
        {
            case 'c': 
                i = va_arg(arg, int);
                putchar(i);
                break;

            case 'd':
                i = va_arg(arg, int);
                if(i < 0)
                {
                    i = -i;
                    putchar('-');
                }
                puts(convert(i, 10));
                break;
            
            case 'o':
                i = va_arg(arg, unsigned int);
                puts(convert(i, 8));
                break;
            
            case 's': 
                s = va_arg(arg, char *);
                puts(s);
                break;

            case 'x':
                i = va_arg(arg, unsigned int);
                puts(convert(i, 16));
                break;
        }
    }
    // puts("\n");
    //Module 3: Closing argument list to necessary clean-up
    va_end(arg);
}

int scan(const char *str, ...)
{
    
}

struct date dt;

void main()
{
    time_t time_now;
    time(&time_now);
    // printf(getdate());
    printf("Seconds since January 1, 1970 = %l\n", time_now);
}