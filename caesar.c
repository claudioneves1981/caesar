#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;

    }

    for(int i = 0 , n = strlen(argv[1]); i < n; i++){
        if((argv[1][i] > 64 && argv[1][i] < 91) || ( argv[1][i] > 96 && argv[1][i] < 123)){
             printf("Usage: ./caesar key\n");
             return 1;
         }

     }

    string ch;
    string p = get_string("Plaintext: ");
    char c[strlen(p)];
    long k = strtol(argv[1], &ch, 10);

    for(int i = 0, n = strlen(p); i <= n; i++){

      if(((char)p[i] > 96 && (char)p[i] < 123)){
            if((p[i]+(k%26))%123 <= 26){
            c[i] = (p[i]+(k%26))%123 + 97;
            }else{
            c[i] = (p[i]+(k%26))%123;
            }
      }else if(((char)p[i] > 64 && (char)p[i] < 91)){
            if((p[i]+(k%26))%91 <= 26){
            c[i] = (p[i]+(k%26))%91 + 66;
            }else{
            c[i] = (p[i]+(k%26))%91;
            }
      }else{
        c[i] = p[i];
      }

    }
    printf("Ciphertext:%s\n", c);
    return 0;
}