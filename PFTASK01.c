#include<stdio.h>
int main(){
    int fixedLimit,transactionAmount,totalAmount,AmountSpent,transactionCountry1,transactionCountry2,setCountry1,setCountry2,transactionInAnHour;
    setCountry1=1;
    setCountry2=2;
    printf("Enter the fixed limit:\n");
    scanf("%d",&fixedLimit);
    printf(" Enter the transaction amount:\n");
    scanf("%d",&transactionAmount);
    printf(" enter transaction country(1 for pakistan or 3-9 for others):\n");
    scanf("%d",&transactionCountry1);
    printf(" enter transaction country 2(2 for UAE or 3-9 for others):\n");
    scanf("%d",&transactionCountry2);
    printf(" enter number of transaction in an hour:\n");
    scanf("%d",&transactionInAnHour);
    printf(" enter total amount spent(before this transaction):\n");
    scanf("%d",&AmountSpent);
    totalAmount=AmountSpent+transactionAmount;
    if(totalAmount>fixedLimit){
        printf("unusual transaction \n");
    } else if(transactionCountry1!=setCountry1){
        printf("unusual transaction \n");
    } else if(transactionCountry2!=setCountry2){
        printf("unusual transaction \n");
    } else if(transactionInAnHour>3){
        printf("unusual transaction \n");
    } else{
        printf("no unusual transaction \n");
    }
    return 0;
}
    



     
     
