#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <iostream>
using namespace std;

void test_sort();
void ton_sort(int [],int len);
void quick_sort(int [],int start,int end);
void show(int[],int);

void show(int a[],int len)
{
    for(int i=0;i<len;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}



void test_sort()
{
    int a[] = {2,3,78,7,5,4,44,55,66};
    //ton_sort(a,6);
    quick_sort(a,0,8);
    show(a,9);

}
void ton_sort(int a[],int len)
{
    int a1[len];
    for(int i=0;i<len;i++){
        a1[i] = 0;
    }
    for(int i=0;i<6;i++)
    {
        a1[i]++;
    }
    for(int i=0;i<len;i++)
    {
        cout<<a1[i];
    }
}

void quick_sort(int sorcearry[],int start,int end)
{
    int i = start;
    int j = end;
    if(i>j) return;
    int index = sorcearry[i];
    while(i!=j)
    {
        while(i<j&& sorcearry[j]>=index){
            j--;
        }
        while(i<j && sorcearry[i]<=index){
            i++;
        }
        if(i<j){
            int temp = sorcearry[i];
            sorcearry[i]=sorcearry[j];
            sorcearry[j] = temp;
        }
    }

    sorcearry[start] = sorcearry[i];
    sorcearry[i]= index;
    quick_sort(sorcearry,start,i-1);
    quick_sort(sorcearry,i+1,end);
}

#endif // SORT_H_INCLUDED
