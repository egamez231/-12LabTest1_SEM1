#include <stdio.h>

void fnRate (float,float*);
float fnGrossTax (float,float,float*);
void PrintResult(long int,float,float);

int main()
{
    long int ic;
    float inc,rt,gtx_pay;


    printf("Insert IC number: ");
    scanf("%ld",&ic);
    printf("Insert annual income: RM ");
    scanf("%f",&inc);

    fnRate(inc,&rt);
    fnGrossTax (inc,rt,&gtx_pay);
    PrintResult( ic,rt,gtx_pay);


return 0;

}

void fnRate(float inc, float *rt)
{

    if(inc <= 100000)

        *rt = 0.05;

    else if(inc <= 200000 && inc >= 100001)

        *rt = 0.10;

    else if(inc <= 300000 && inc >= 200001)

        *rt = 0.15;

    else

        *rt = 0.20;

}

float fnGrossTax(float inc, float rt, float *gtxpay)
{
    *gtxpay = inc * rt;

return (*gtxpay);
}

void PrintResult(long int ic, float rt, float gtxpay)
{
    printf("\nIC No. : %ld",ic);
    printf("\nIncome Tax Rate: RM %.2f",rt);
    printf("\nGross Tax Payable : RM %.2f",gtxpay);

}
