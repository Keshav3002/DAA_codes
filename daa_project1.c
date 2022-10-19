#include<stdlib.h>
#include<stdio.h>

int main()
{
int qx,qy,n,a;
printf("Enter the length of square chess board\n");
scanf("%d",&a);
printf("Enter the no. of obstacles you want to place\n");
scanf("%d",&n);
int ox[n],oy[n];
for(int i=0;i<n;i++)
{
    printf("Enter the coordinates of the obstacles\n");
    scanf("%d %d",&ox[i],&oy[i]);
}
printf("Enter the location of the queen\n");
scanf("%d %d",&qx,&qy);
int x=qx,y=qy;
int flag=0,sum=0;
while(y>=1&&x>=1)
{
    x--;
    y--;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(x>=1&&y>=1)
    sum++;
}
flag=0;
x=qx,y=qy;
while(x>=1&&y<=a)
{
    x--;
    y++;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(x>=1&&y<=a)
    sum++;
}
flag=0;
x=qx,y=qy;
while(x<=a&&y<=a)
{
     x++;
    y++;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(x<=a&&y<=a)
    sum++;
}
flag=0;
x=qx,y=qy;
while(x<=a&&y>=1)
{
     x++;
    y--;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(x<=a&&y>=1)
    sum++;
}
flag=0;
x=qx,y=qy;
while(x<=a)
{
     x++;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(x<=a)
    sum++;
}
flag=0;
x=qx,y=qy;
while(x>=1)
{
     x--;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(x>=1)
    sum++;
}
flag=0;
x=qx,y=qy;
while(y<=a)
{
     y++;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(y<=a)
    sum++;
}
flag=0;
x=qx,y=qy;
while(y>=1)
{
     y--;
    for(int i=0;i<n;i++)
    {
        if(x==ox[i]&&y==oy[i])
        {
            flag++;
            break;
        }
    }
    if(flag>0)
    {
        break;
    }
    if(y>=1)
    sum++;
}
printf("%d",sum);
}
