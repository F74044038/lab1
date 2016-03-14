#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
        unsigned long long int i,j,put,put2,change,max=0,length=0;
        while(scanf("%lld %lld\n",&put,&put2)!=EOF){
        printf("%lld %lld ",put,put2);
        if(put>put2){
        change=put2;
        put2=put;
        put=change;
        }
        for(i=put;i<=put2;i++){
                j=i;
                if(j==1){
                max=1;
                continue;
                }
                star:
                        length++;
                        if((j%2)==0){
                        j=(j/2);
                        }
                        else{
                        j=3*j+1;
                        }
                        if(j!=1){
                                goto star;
                        }
                        length++;
                        if(length>max){
                        max=length;
                        }
                        length=0;
                }
        printf("%lld\n",max);
        max=0;
        }

}

