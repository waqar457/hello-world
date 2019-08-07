
#define  PERIOD 10
#define PRINCIPAL 5000.00
/* MAIN PROGRAM BEGINGS*/
main()
{
 /*declaration statements*/
 int year;
 float amount , value, inrate;
 /*----assignment statement----*/
 amount=PRINCIPAL;
 inrate=0.11;
 year=0;
 /*----computation statements-------
   ------computation using while loop-----*/
   while(year<=PERIOD)
   {
       printf("%2d    %8.2f\n",year,amount);
       value=amount +inrate*amount;
       year= year+1;
       amount=value;
       // while loop ends
   }
 }

