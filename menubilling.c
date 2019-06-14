#include<stdio.h>
#include<string.h>

char indianDishes[5][15]={{"Biryani"},{"Dosa"},{"Samosa"},{"Tandoori"},{"Palak Paneer"} };
char chineseDishes[5][15] = {{"Noodles"},{"Fried Rice"},{"Dumplings"},{"Spring Rolls"},{"Mushroom Soup"}};
char italianDishes[5][15] = {{"Pizza"},{"Pasta"},{"Spaghetti"},{"Lasagna"},{"Meat Balls"}};

int indianDishPrices[5] = {100,40,15,200,80};
int chineseDishPrices[5] = {40,45,50,70,60};
int italianDishPrices[5] = {300,100,110,200,80};

int choice , option , quantity=1,total=0,grandTotal=0 ;
char c;

char dish[5][15];
int price[5];

void displayMenu();
void calculateTotal();

void indianMenu();
void chineseMenu();
void italianMenu();


main()
{
do
    {
label1: printf("\n--Menu--\n");
printf("Press 0 for Indian food \n");
printf("Press 1 for Chinese food \n");
printf("Press 2 for Italian food \n");
scanf("%d",&choice);

if(choice==0)
{
    indianMenu();
}
else if(choice==1)
{
    chineseMenu();
}
else if(choice==2)
{
    italianMenu();
}
else
{
    printf("Please enter valid input \n");
    goto label1;
}

printf("Press 'Y' to order more\n");
scanf("%c,&c");
c = getchar();
c = tolower(c);
    }
while(c=='y');
printf("Your grand total is Rs %d\n" , grandTotal);
}

void displayMenu()
{

int i;

 switch(choice)
 {
  case 0:
      for(i=0;i<5;i++)
        {
        strcpy(dish[i],indianDishes[i]);
        price[i] = indianDishPrices[i];
        }
      break;
  case 1:
    for(i=0;i<5;i++)
        {
        strcpy(dish[i],chineseDishes[i]);
        price[i] = chineseDishPrices[i];
        }
        break;
  case 2:
    for( i=0;i<5;i++)
        {
        strcpy(dish[i],italianDishes[i]);
        price[i] = italianDishPrices[i];
        }
    break;
 }
 label2: for(i=0;i<5;i++)
{
 printf("Press %d for %s - Rs %d \n",i,dish[i],price[i]);
}
 scanf("%d",&option);
 if(option<0 || option>4)
    {
    printf("Enter valid order\n");
    goto label2;
    }

label3: printf("How many?\n");
 scanf("%d",&quantity);

 if(quantity<=0)
    {
    printf("Enter a valid quantity\n");
    goto label3;
    }

 printf("You have ordered %d %s \n",quantity,dish[option]);
}

void calculateTotal()
{
 total = price[option]*quantity ;
 printf("Your Total is Rs %d\n",total);
 grandTotal = grandTotal+total;
}

void indianMenu()
{
  displayMenu();
  calculateTotal();
}

void chineseMenu()
{
    displayMenu();
    calculateTotal();
}

void italianMenu()
{
    displayMenu();
    calculateTotal();
}




