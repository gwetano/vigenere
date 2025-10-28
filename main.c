#include <stdio.h>
#include <string.h>

#define KEY "chiave"

void encode(char* str, char* key){
	int len = strlen(str);
    for(int i = 0; i < len; i++){
        int k  = i % strlen(key);
            
        int val_str = (int) str[i] - 97;
        int val_key = (int) key[k] - 97;
        int tok = (val_str + val_key) % 26;
        
        str[i] = (char) (tok + 97);
    }
}

void decode(char* str, char* key){
	int len = strlen(str);
    for(int i = 0; i< len; i++){
        int k = i % strlen(key);
        int val = 0;
        if (str[i] < key[k])
            val = 26; 
        int tok = (val+(str[i] - key[k])) % 26;
        str[i] = (char) (tok + 97);
    }
}

int main(int argc, char **argv){
    
    if(argc < 3 || argc > 5){
        printf("Invalid number of arguments\nAccepted command: vigenere [-e/-d] [word] [key]\n");
        return 1;
    }

    char* k = NULL;
    
    if (argc > 3)
        k = argv[3];
    else{
        printf("Key missing, fallback key (chiave) used\n");
        k = KEY;
    }
    
    if(strcmp(argv[1],"-e") == 0)
        encode(argv[2],k);
    else {
        if(strcmp(argv[1],"-d") == 0)
            decode(argv[2],k);
        else{
            printf("Invalid command\nvigenere [word] [key] [-e/-d]\nUse (-e) to encode or (-d) to decode");
            return 1;
        }
    }
    printf("%s\n",argv[2]);
    
    return 0;
}
