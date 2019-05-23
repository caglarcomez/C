#include <stdio.h>

//declare functions
void set_array(int array[4]);
void set_int(int x);

int main(void)
{
    int a = 10;
    int b[4] = {0,1,2,3};

    set_int(a);
    set_array(b);

    printf("%d %d", a, b[0]);
    //result will be 10 22
    //a variable PASSED BY VALUE to the function (copy of variable), as we dont assign set_int(a) to it self,
    //it will remain the same 10

    //an array PASSED BY REFERENCE to the function,
    //as we passed arrays it self into the function the b[0] will be 22
}

//arrays in C are PASSED BY REFERENCE in function calls
//means callee function receives the actual array, not a copy of it
void set_array(int array[4])
{
    array[0] = 22;
}

//most variables in C are PASSED BY VALUE in function calls
//means copy of the variable x passed in
void set_int(int x)
{
    x = 22;
}