#include<stdio.h>
int main(){

int investment = 4500;
float dividend = 7.5;
int share_value = 100;
int discount = 10;
int final_amount = share_value - discount*share_value/100;

int number_of_shares = investment/final_amount;

float annual_income = (number_of_shares) * (dividend) * (share_value)/100;

printf("number of shares = %d\n",number_of_shares);

printf("annual income is %.1f",annual_income); 

}









