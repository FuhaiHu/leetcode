#include <iostream>
#include "sort.h"
#include "stack_line.h"
#include "box.h"
#include "pass_parameters.h"
#include <vector>


using namespace std;

int main()
{
    //test_sort();
    //test_line();
    //test_dfs();
    //test_wfs();
    //test_parameters();
    vector<char> a;
    a.push_back('3');
    a.push_back('a');
    a.push_back('d');

    vector<char>::iterator ite = a.begin();
    vector<char>::iterator ite1 = a.end();
    cout<<*ite<<endl;
    *ite = '9';
    ite++;
    ite1--;
    cout<<*ite<<endl;
    cout<<*ite1<<endl;
    return 0;
}
