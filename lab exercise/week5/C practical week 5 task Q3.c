#include<stdio.h>
int main(){
    int NTS,FSC;
    printf("Enter NTS marks : ");
    scanf("%d",&NTS);
    printf("Enter F.sc marks : ");
    scanf("%d",&FSC);

    if(FSC > 70){
        if(NTS > 70){
            printf("You are eligible for a seat in IT,ELECTRONICS,TELECOMMUNICATION in OXFORD\n");
            printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT\n");
        }else if(NTS > 60){
            printf("You are eligible for a seat in ELECTRONICS,TELECOMMUNICATION in OXFORD\n");
            printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT\n");
        }else if(NTS > 50){
            printf("You are eligible for a seat in TELECOMMUNICATION in OXFORD\n");
            printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT\n");
        }else{
            printf("You are not eligible for OXFORD\n");
            printf("You are not eligible for MIT\n");
        }
    }else if ((FSC<=70 && FSC>=60) && (NTS >50)){
        printf("You are eligible for a seat in IT,CHEMICAL,COMPUTER in MIT\n");    
    } else if((FSC<60 && FSC>=50) && (NTS > 50)){
        printf("You are eligible for a seat in CHEMICAL,COMPUTER in MIT\n");
    }else if((FSC<50 && FSC>40) && (NTS > 50) ){
        printf("You are eligible for a seat in COMPUTER in MIT only\n");
    }else{
        printf("You are not eigible for MIT\n");
         printf("You are not eigible for OXFORD\n");
    }           
}
