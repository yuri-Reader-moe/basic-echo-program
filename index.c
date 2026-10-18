#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#define strcasecmp _stricmp
#else
#include <strings.h>
#endif


int main(void) {
    char text[16];
    while (1) {
        printf ("we call this the really basic echo program\n");
        printf ("type exit to quit\n");
        if (scanf("%15s", text) != 1) {
            break;
        }

        /*yandere dev level of coding ahead!*/

        if (strcasecmp("exit", text) == 0) {
            char choice[16];
            printf ("are you sure? (y/n)\n");
            while (1) {
                if (scanf("%15s", choice) != 1) {
                    return 0;
                }
                if (strcasecmp("n", choice) == 0) {
                    printf ("__________________________________\n");
                    break;
                } 
                else if (strcasecmp("y", choice) == 0) {
                    break;
                }
                else {
                    printf ("please type either y or n\n");
                }
            }
            
            if (strcasecmp("y", choice) == 0) {
                break;
            }

            if (strcasecmp("n", choice) == 0) {
                continue;
            }
        }

        /*it ends here*/
        
        printf ("\n%s \n", text);
        printf ("__________________________________\n");
    }
    printf ("see you next time!\n");
    return 0;
}
