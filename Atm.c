
#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
#include<string.h>
//void mini_statement(float amount)
//{
    //printf("Your Account Balance is = %.3f",amount);
//}
void check_balance(float amount)
{
    //char ch;
    printf("Account Balance=%.3f\n",amount);
    //fflush(stdin);
   // printf("Do you want mini statement(y/Y)?");
    //scanf("%c",&ch);
    //if(ch=='y'||ch=='Y')
    //{
        //mini_statement(amount);
    //}
}
void deposit_money(float *amount)
{
    float amt_dep;
    printf("Enter Deposit Money:");
    scanf("%f",&amt_dep);
    if(amount>=0)
    {
        printf("%.3f amount credited to your account",amt_dep);
        *amount+=amt_dep;
    }
    else
    {
        printf("Invalid amount");
    }
}
void withdrawal_money(float *amount)
{
    float amt_wid;
    printf("Enter withdrawal money:");
    scanf("%f",&amt_wid);
    if(amt_wid<0)
    {
        printf("-----Invalid Entry-----\n");
    }
    else if(*amount>=amt_wid)
    {
        printf("%.3f amount debited from your account",amt_wid);
        *amount-=amt_wid;
    }
    else
    {
        printf("Insufficient Balance!!!!!\n");
    }
}
void transaction()
{
    char usname[20];
    int pin,choice;
    float amount=10000.00;
    printf("---Utkarsh Finance Bank---\n");
    printf("----Start Banking----\n");
    fflush(stdin);
    printf("Enter the username:");
    scanf("%s",usname);
    printf("Enter the Pin:");
    scanf("%d",&pin);
    if(strcmp(usname,"utkarsh@91")==0 && pin==2244)
    {
        do{
        printf("1 Checking Balance\n");
        printf("2 withdrawal of Money\n");
        printf("3 Deposit Money\n");

        scanf("%d",&choice);
        if(choice==1)
        {
            check_balance(amount);
        }
        else if(choice==2)
        {
            withdrawal_money(&amount);
        }
        else if(choice==3)
        {
            deposit_money(&amount);
        }
        else
        {
            printf("Wrong choice!!!!\n");
        }
        }while(choice!=4);
    }
    else
    {
        printf("----Invalind Pin Please Try Again----\n");
    }
}

 

int main()
{
    fflush(stdin);
    transaction();

}