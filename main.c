#include <bits/stdc++.h>

int main(){
    int res = 0;
    char binary[250];
    gets(binary);
    for(int i = strlen(binary) - 1; i >= 0; i--){

        if(binary[i] == '1') {
            res += pow(2,strlen(binary) - 1 - i);
        }
    }
   printf("%d", res);
    return 0;
}
