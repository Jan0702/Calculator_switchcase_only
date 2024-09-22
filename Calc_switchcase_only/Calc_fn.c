#include<stdio.h>

void cont(char,double,double,double); //Explicity Decalared as compiler was giving warning during Implicit declaration.
int enter(char op,int f, double num1) //Takes the input from the user, Calculates and Passes it to cont()
{


    double num2 ;
    double result;

    switch(f)
                {


                   case 1 :
                        printf("Enter the number \n");
                        scanf("%lf",&num1);
                        break ;
                   default :
                         break ;
                }




                printf(" Enter the Operation to be performed on %lf or press e to exit \n",num1);
                scanf("%s",&op); // <1>

                switch(op)
                 {
                   case 'e' :

                       return 'e' ;

                 }


                printf(" Enter the next number \n ");
                scanf("%lf",&num2);// <2>

                switch(op)
                {



                   case '+' :
                        result = num1 + num2;
                        break;
                   case '-' :
                        result = num1 - num2;
                        break;
                    case '*' :
                        result = num1 * num2;
                        break;
                    case '/' :
                         result = num1/num2;
                         break;
                    case 'e' :

                        return 'e' ;


                    default:
                          printf("invalid operation \n");
                          enter(op,f=0,num1);
                }

               cont(op,num1,num2,result);

}

void cont(char op, double num1,double num2, double result) //Prints the output and calls the enter() for further calculation.
{

    printf("The result of %lf %c %lf = %lf \n",num1, op,num2, result);

             printf("\n \n ");

            int f = 0;
             num1 = result ;

             enter(op,f,result);


}

int main()
{
    char op;
    double num1;
    int f = 1 ;
    while(op!='e')
        {
        printf("Enter 1 to start calculator, e to exit \n");
        scanf("%s",&op);

        switch(op)
        {
           case 'e' :
           break;

        case '1' :
           op = enter(op,f,num1=0);
           break;

        default:
               printf("Invalid Value \n");

               continue;
        }


    }


    return 0;
}
