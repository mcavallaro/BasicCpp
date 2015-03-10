#include <stdio.h>
void modify(int* c){
    *c = 6; //*c dereferenced pointer or Indirection ("object pointed to by a")
}
int main()
{
    int d = 10;
    printf("%d\n",d);
    modify(&d);  //adress of d
    printf("%d\n",d);
    return 1; // in gcc the return is not implicit and if you comment this you get a warning
}

