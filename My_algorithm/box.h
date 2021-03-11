#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

void dfs(int[] ,int,int ,int[]);
void test_dfs();
void test_wfs();


void test_dfs()
{
    int book[3] = {0},ab[3]={0};
    dfs(ab,0,3,book);
}



void dfs(int a[],int step,int len,int book[])
{
    if(step == len){
        for(int i = 0;i<len;i++){
            cout<<a[i]<<"\t";
        }
        cout<<endl;
        return;
    }

    for(int i =0;i<len;i++){
        if(book[i]==0){
            a[step] = i;
            book[i] = 1;
            dfs(a,step+1,len,book);
            book[i] = 0;
        }
    }
    return;
}

struct note
{
    int x;
    int y;
    int s;
    int f;
};

void test_wfs()
{
    struct note que[1000];
    int a[5][4] = {{0,0,1,0},{0,0,0,0},{0,0,1,0},{0,1,0,0},{0,0,0,1}},book[5][5] ={0};
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

    // inital a book;

    int tail = 0,head = 0,startx = 1,starty = 1,endx = 4,endy = 2,flag = 0;
    que[tail].x = startx;
    que[tail].y = starty;
    que[tail].f = 0;
    que[tail++].s = 0;
    book[startx][starty] = 1;
    while(head<tail){
        for(int i = 0;i<4;i++){
            int tx = que[head].x +next[i][0];
            int ty = que[head].y +next[i][1];
            if(tx<0 ||tx>4 ||ty<0 ||ty>5)
                continue;
            if(a[tx][ty] ==0 && book[tx][ty]==0){
                book[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].f = head;
                que[tail++].s = que[head].s +1;
            }
            if(que[head].x==endx && que[head].y==endy){
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
        head++;
    }
    cout<<que[tail-1].s<<endl;
    cout<<que[head].x<<"\t"<<que[head].y<<endl;
}

#endif // BOX_H_INCLUDED
