#include<stdio.h>
#include<string.h>



int sum(int a, int b, int c, int d, int e){
    int add;
    add=a+b+c+d+e;
    return add ;
}



int main()
{ 
    printf("\n             WELCOME TO  CUTM CAFE CORNER               \n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    

    int customer_id,customer_number;
    char customer_name[18];
    int i=0;
    printf("\nEnter your Name : ");
    gets(customer_name);
    printf("Enter your Ph no. : ");
    scanf("%d",&customer_number);
    printf("Enter Customer ID : ");
    scanf("%d",&customer_id);
    int catagory;
    
    /*SNACKS*/
    int snacks_total=0;
    int honey_cake,carrot_cake,cinnamon_cake,chocolate_cake,vanilla_cake;
    int hon_ck_tot=0 , caro_ck_tot=0 , cinmo_ck_tot=0  ,cho_ck_tot=0 , van_ck_tot=0;
    /*BEVERAGES*/
    int beverages_total=0;
    int tea , tea_with_mint , turkish_coffee , espresso , cappuccino;
    int tea_tot=0 , tea_wd_min_tot=0 , turki_cof_tot=0 , espre_tot=0 , cappuc_tot=0;
   for(i=1;i<100;i++)
    {  
        printf(" \nChoose your Catagory\n");
        printf(" Click 1 :- SNACKS\n Click 2 :- BEVERAGES\n");
        printf(" Click 0 :- TO show Bill\n");
       printf("\nChoose from MENU \n");
        
       //printf("%d",catagory);
        scanf("%d",&catagory);

        switch (catagory)
        {
         case 1:
             printf(" SI NO.     PRODUCT             QUANTTY        PRICE\n"); 
             printf("|+++++++|++++++++++++++++++++|+++++++++++++|+++++++++|\n");
             printf("| 1>    |     Honey Cake     |  1Ps        |      30$|\n");
             printf("| 2>    |     Carrot Cake    |  1Ps        |      35$|\n");
             printf("| 3>    |     Cinnamon Cake  |  1ps        |      35$|\n");
             printf("| 4>    |     Chocolate Cake |  1Ps        |      40$|\n");
             printf("| 5>    |     Vanilla Cake   |  1Ps        |      50$|\n");
             printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf("\nEnter Honey Cake Quantity : ");
            scanf("%d",&honey_cake);
            hon_ck_tot=honey_cake*30;
            printf("Enter Carrot Cake Quantity : ");
            scanf("%d",&carrot_cake);
            caro_ck_tot=carrot_cake*35;
            printf("Enter Cinnamon Cake Quantity : ");
            scanf("%d",&cinnamon_cake);
            cinmo_ck_tot=cinnamon_cake*35;
            printf("Enter Chocolate Cake Quantity : ");
            scanf("%d",&chocolate_cake);
            cho_ck_tot=chocolate_cake*40;
            printf("Enter Vanilla Cake Quantity : ");
            scanf("%d",&vanilla_cake);
            van_ck_tot=vanilla_cake*50;

            snacks_total= sum(hon_ck_tot , caro_ck_tot , cinmo_ck_tot , cho_ck_tot , van_ck_tot) ;
            break;

        case 2:
            printf("SI NO.         PRODUCT             QUANTTY       PRICE\n");
            printf("|+++++++++|++++++++++++++++++++|+++++++++++++|++++++++++|\n");
            printf("| 1>      |     Tea            |  1cup       |      15$ |\n");
            printf("| 2>      |     Tea With Mint  |  1cup       |      20$ |\n");
            printf("| 3>      |     Turkish Coffee |  1cup       |      30$ |\n");
            printf("| 4>      |     Espresso       |  1cup       |      20$ |\n");
            printf("| 5>      |     Cappuccino     |  1cup       |      35$ |\n");
            printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf("\nEnter Tea Quantity : ");
            scanf("%d",&tea);
            tea_tot=tea*15;
            printf("Enter Tea With Mint Quantity : ");
            scanf("%d",&tea_with_mint);
            tea_wd_min_tot=tea_with_mint*20;
            printf("Enter Turkish Coffee Quantity : ");
            scanf("%d",&turkish_coffee);
            turki_cof_tot=turkish_coffee*30;
            printf("Enter Espresso Quantity: ");
            scanf("%d",&espresso);
            espre_tot=espresso*20;
            printf("Enter Cappuccino Quantity : ");
            scanf("%d",&cappuccino);
            cappuc_tot=cappuccino*35;

            beverages_total=sum(tea_tot , tea_wd_min_tot , turki_cof_tot , espre_tot , cappuc_tot);
            break;

        default :
            printf("Invalid\n");
            break;   

        }
        if(catagory==0)
           {
            break;
           }
    }


    
    printf("****************////CUTM Cafe Corner\\\\****************\n\n");
    printf("                        FINAL BILL                      \n\n");
    printf("__________________________________________________________\n"); 
    printf("__________________________________________________________\n");
    printf("CUSTOMER NAME : %s\n",customer_name);
    printf("CUSTOMER NUMBER : %d\n",customer_number);
    printf("CUSTOMER ID : %d\n",customer_id);
    printf("**********************************************************\n");
    printf("**********************************************************\n");
    printf("     PRODUCT             Qtd   Rate   TOTAL      \n");
    printf("__________________________________________________________\n");
    if(hon_ck_tot != 0)
        printf("Honey Cake TOTAL         %d      30     = %d\n",honey_cake,hon_ck_tot);
    if(caro_ck_tot != 0)
        printf("Carrot Cake TOTAL        %d      35     = %d\n",carrot_cake,caro_ck_tot);
    if(cinmo_ck_tot != 0)
        printf("Cinnamon Cake TOTAL      %d      35     = %d\n",cinnamon_cake,cinmo_ck_tot); 
    if(cho_ck_tot != 0)
        printf("Chocolate Cake TOTAL     %d      40     = %d\n",chocolate_cake,cho_ck_tot);
    if(van_ck_tot != 0)
        printf("Vanilla Cake TOTAL       %d      50     = %d\n",vanilla_cake,van_ck_tot);
    if(tea_tot !=0)
        printf("Tea TOTAL                %d      15     = %d\n",tea,tea_tot);
    if (tea_wd_min_tot != 0)
        printf("Tea With Mint TOTAL      %d      20     = %d\n",tea_with_mint,tea_wd_min_tot); 
    if (turki_cof_tot != 0)
        printf("Turkish Coffee TOTAL     %d      30     = %d\n",turkish_coffee,turki_cof_tot);
    if(espre_tot !=0)
        printf("Espresso TOTAL           %d      20     = %d\n",espresso,espre_tot);         
    if(cappuc_tot != 0)
        printf("Cappuccino TOTAL         %d      35     = %d\n",cappuccino,cappuc_tot); 


        int grand_total=0;
        grand_total = snacks_total + beverages_total;
        printf("\nGRAND TOTAL                            = %d\n",grand_total);
    printf("*********************************************************\n");
    printf("*********************************************************\n");
    printf("                         THANK YOU                       \n");
    printf("                        VISIT AGAIN                      \n");
    printf("*********************************************************\n");
    printf("*********************************************************\n");
       
}