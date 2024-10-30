#include <stdio.h>
int main()
{
    int l, w, result1;
    printf("Enter the value of length\n");
    printf("Enter the value of width\n");
    scanf("%d%d",&l,&w);
    result1 = l * w;
    printf("The area of Rectangle is %d\n", result1);
    printf("The size of the int is %lu and %lu\n",sizeof(l),sizeof(w));
    return 0;
}
