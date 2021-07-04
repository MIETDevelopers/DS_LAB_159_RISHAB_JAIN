/*CREATOR: RISHAB JAIN
IMPLEMENTING A MULTIPLE STACK*/

#include <stdio.h>
#include <stdlib.h>
#define Max 5
void insert();
void pop();
void view();
void insert2();
void pop2();
void view2();
int Stack[Max], Top = -1, ch, val, i, Top2 = Max;

int main()
{
    do
    {
        printf("\nmain menu");
        printf("\n1.Enter Number 1 to push(Insert) Element To Stack A");
        printf("\n2.Enter Number 2 to pop(Delete) Element To Stack A");
        printf("\n3.Enter Number 3 to Display Element From Stack A");
        printf("\n4.Enter Number 4 To insert push(Insert) To Stack B");
        printf("\n5.Enter Number 5 To pop(delete) from stack B");
        printf("\n6.Enter Number 6 To display element from stack B");
        printf("\n7.Enter Number 7 To Exit");

        printf("\n>>enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            pop();
            break;
        case 3:
            view();
            break;
        case 4:
            insert2();
            break;
        case 5:
            pop2();
            break;
        case 6:
            view2();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("invalid statement\n");
        }
    } while (1);
}
void insert()
{
    if (Top == Top2 - 1)
    {
        printf(">>stack overflow\n ");
    }
    else
    {
        printf(">>enter number which you want to insert\n");
        scanf("%d", &val);
        Top = Top + 1;
        Stack[Top] = val;
    }
}
void pop()
{
    if (Top == -1)
    {
        printf(">>stack is underflow\n");
    }
    else
    {
        printf(">>enter number to pop\n");
        scanf("%d", &val);
        Top = Top - 1;
        val = Stack[Top];
    }
}
void view()
{
    if (Top == -1)
    {
        printf(">>stack empty\n");
    }
    else
    {
        for (i = Top; i >= 0; i--)
        {
            printf("%d\t", Stack[i]);
        }
    }
}
void insert2()
{
    if (Top2 - 1 == Top)
    {
        printf(">>Stack Is Overflow");
    }
    else
    {
        printf(">>Enter Number Which You Want To enter\n");
        scanf("%d", &val);
        Top2 = Top2 - 1;
        Stack[Top2] = val;
    }
}
void pop2()
{
    if (Top2 == Max)
    {
        printf(">>Stack Is Underflow");
    }
    else
    {
        printf(">>Enter Number Which You Want To Remove\n");
        scanf("%d", &val);
        Top2 == Top2 + 1;
        Stack[Top2] = val;
    }
}
void view2()
{
    if (Top2 == Max)
    {
        printf(">>Stack is Empty\n");
    }
    else
    {
        for (i = Top2; i < Max; ++i)
        {
            printf("%d\t", Stack[i]);
        }
    }
}