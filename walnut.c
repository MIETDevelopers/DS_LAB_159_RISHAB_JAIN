#include<stdio.h>   //standard input and output library
#include<stdlib.h>  //standard library

struct info
{
char name[30];
int price;
struct info *next;    //creating node
};
struct info *temp,*disp,*head;

void addrecord();
void display();

int main()
{
  int ch;
  while (1)   //to create an infinite loop...nd will only terminate manually
    {
      printf("\n~Akhrot tracker~\n");
      printf("\n 1. To add records");
      printf("\n 2. To view the records");
      printf("\n 3. To exit");
      printf("\n Enter your choice: ");
      scanf("%d",&ch);
      
      fflush(stdin);      //fflush() is typically used for output stream only. Its purpose is to clear (or flush) the output buffer.
                            //though it is an undefined behaviour by language to use it, still if it is successful, it returns zero...nd if not it shows error.
      switch(ch)
            {
              case 1:
                  addrecord();
                      break;

              case 2:
                  display();
                      break;

              case 3:
                  exit(0);
                      break;

              default:
                  printf("Invalid choice! :/");

            }

    }
return 0;
}

void addrecord()
{
  struct info *add;
  add=(struct info*)malloc(sizeof(struct info));
  
  printf("\n Enter the name of dealer: ");
  gets(add->name);            //gets()is used to read a string from a stream
  fflush(stdin);
  printf("\n Enter the price of akhrot: ");
  scanf("%d",&add->price);
  fflush(stdin);

    if(head==NULL|| head->price>=add->price)
      {
        add->next=head;
        head=add;
      }
    else
      {
        temp=head;
          
          while(temp->next!=NULL && temp->next->price < add->price)
            {
              temp=temp->next;
            }

        add->next=temp->next;
        temp->next=add;

      }
  return;
 }

void display()
{
  if(head==NULL)
    {
      printf("\n No records to view\n");
      return;
    }

  for(disp=head;disp!=NULL;disp=disp->next)
    {
      printf("\nName of dealer: %s",disp->name);
      printf("\nPrice of akhrot: %d \n",disp->price);
    }
return;
}