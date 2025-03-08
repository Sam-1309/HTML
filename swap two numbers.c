void swap(int*,int*)
int main()
{
    int a,b;
    printf("enter value for a and b\n");
    scanf("%d%d",&a,&b);
    swap (&a ,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swap(int *x,int*y)
{
int template;
template=*x;
*x=*y;
*y=template;
}

