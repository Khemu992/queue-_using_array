
#include <iostream>
using namespace std;

struct queue{
  int size,front,rare;
  int *Q;
}q;
void create()
{
    q.front=-1;
    q.rare=-1;
    cout<<"Enter size "<<endl;
    cin>>q.size;
    q.Q=new int[q.size];
    
}
 
void enqueue(struct queue *q, int x)
{
    if(q->rare==q->size-1)
    {
        cout<<"queue is full "<<endl;
    }
    else {
        q->rare++;
        q->Q[q->rare]=x;
    }
}
int dequeue(struct queue *q)
{
    int x;
    if(q->rare==q->front)
    {
        cout<<"Queue is Empty can't delete"<<endl;
    }
    else{
        q->front++;
         x=q->Q[q->front];
    }
    return x;
}
void Display(struct queue q)
{
    if(q.front==q.rare)
    {
        cout<<"Queue is Empty"<<endl;
    }
    else {
        for(int i=q.front+1; i<=q.rare; i++)
        {
            cout<<q.Q[i]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    create();
    enqueue(&q,3);
    Display(q);
    
    enqueue(&q,4);
    Display(q);
    
    enqueue(&q,5);
    Display(q);
    
    cout<<"deleted ele is "<<dequeue(&q)<<endl;
    Display(q);

    return 0;
}
