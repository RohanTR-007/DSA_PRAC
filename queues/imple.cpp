#include<bits/stdc++.h>
using namespace std;
class Queue
{
    public:
    vector<int>arr{4};
    int front,rear;
    int MAX=4;
    Queue()
    {
        front=0;
        rear=-1;
    }
    void enqueue(int ele)
    {
        if(rear == MAX-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        arr[++rear]=ele;
    }
    void dqueue()
    {
        if(rear<front)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        ++front;
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


class CircleQ
{
    public:
    vector<int>arr{4};
     int front = 0, rear = 0;
     int MAX=4;
    CircleQ()
    {
        front=0;
        rear=0;
    }
     bool full()
    {
        if(front == 0 && rear == MAX)
        {
            cout<<"Queue full"<<endl;
            return 1;
        }
        else if(front - rear == 1) 
        {
            cout << "Queue full" << endl;
            return 1;
        }
        else
        {
            // cout << "Queue is not full" << endl;
            return 0;
        }
    }
     bool empty()
    {
        if(rear == 0 && front == 0)
        {
            cout<<"Queue empty"<<endl;
            return 1;
        }
        else if(rear == 0 && front == MAX)
        {
            cout << "Queue empty" << endl;
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void enqueue(int ele)
    {
        if(!full())
        {
            arr[rear]=ele;
            ++rear;
            if(rear == MAX)
            {
                display();
                rear=0;
            }
        }
    }
    void dqueue()
    {
        if(!empty())
        {
            cout<<"Deleted element is "<<arr[front]<<endl;
            front++;
            if(front == MAX)
            {
                front =0;
            }
        }
    }
    void display()
    {
        if(front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            
        }
        else{
            for (int i = front; i <MAX; i++)
            {
                cout << arr[i] << " ";
            }
            for (int i = 0; i < rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout<<endl;
        }
    }

};
int main()
{
    // Queue q1;
    // q1.dqueue();
    // q1.enqueue(2);
    // q1.enqueue(7);
    // q1.enqueue(89);
    // q1.display();
    // int n=3;
    // while(n--)
    // {
    //     q1.dqueue();
    // }
    // q1.dqueue();
    // n=3;
    // while (n--)
    // {
    //     q1.enqueue(12);
    // }
    // q1.display();
    // q1.enqueue(1);

    CircleQ cq;
    int n=4;
    while (n--)
    {
        cq.enqueue(90);
    }
    // cq.display();
    cq.enqueue(89);
    n=4;
    while (n--)
    {
        cq.dqueue();
    }
    cq.enqueue(89);
    cq.display();

    return 0;
}