#ifndef STACK_LINE_H_INCLUDED
#define STACK_LINE_H_INCLUDED

void test_line();
void test_stack();



void test_stack()
{


}




void test_line()
{
    int a[100] = {2,3,9,7,5,4,44,55,66},head=0,tail = 9;

    while(head<tail){
        cout<<a[head]<<"\t";
        head++;
        a[tail] = a[head];
        tail++;
        head++;
    }
}

#endif // STACK_LINE_H_INCLUDED
