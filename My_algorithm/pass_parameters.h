#ifndef PASS_PARAMETERS_H_INCLUDED
#define PASS_PARAMETERS_H_INCLUDED

//statement


void class_array(int arr[],int len);  //һά���鴫����
void class_pointer(int* p,int len);  //һάָ�봫����
void class_reference(int (&a)[10],int len);  //һά���õ�����
void test_parameters();
void show_parameters(int *,int );

void show_parameters(int *sorr,int len)
{
    for(int i =0;i<len;i++){
        cout<<*(sorr+i)<<"\t";
    }
    cout<<endl;
}

void test_parameters()
{
    int a[] = {5,3,6,2,7,8,7,45,33,22}; //13
    show_parameters(a,10);
    class_array(a,10);
    show_parameters(a,10);

    class_pointer(a,10);
    show_parameters(a,10);

    class_reference(a,10);
    show_parameters(a,10);



}

void class_array(int arr[],int len)
{
    if(len<=2) return ;

    for(int i = 1;i<len;i++){
        for(int j = 0;j<len -i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void class_pointer(int* p,int len)
{
    if(len<=2) return ;
    for(int i = 1;i<len;i++){
        for(int j = 0;j<len -i;j++){
            if(*(p+j)<*(p+j+1)){
                int temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}
void class_reference(int (&arr)[10],int len)
{
    if(len<=2) return ;

    for(int i = 1;i<len;i++){
        for(int j = 0;j<len -i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

#endif // PASS_PARAMETERS_H_INCLUDED
