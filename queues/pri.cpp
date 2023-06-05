#include <bits/stdc++.h>
using namespace std;
int heap[250];
int hsize = -1;

//Priority queue implementation using max-heap array


int parent(int ind)
{
    return (ind - 1) / 2;
}
int left(int ind)
{
    return (2 * ind) + 1;
}
int right(int ind)
{
    return (2 * ind) + 2;
}
void print_heap(int hsize)
{
    for (int i = 0; i <= hsize; ++i)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
}
void enque(int ele)
{

    hsize++;
    heap[hsize] = ele;
    int tmp = hsize;
    int pind = parent(tmp);
    while (pind >= 0)
    {
        if (heap[tmp] > heap[pind])
        {
            swap(heap[tmp], heap[pind]);
        }
        else
        {
            break;
        }
        tmp = pind;
        pind = parent(pind);
    }
    print_heap(hsize);
}
int dqueue()
{
    int del = heap[0];
    heap[0] = heap[hsize];
    int pind = 0;
    hsize--;
    
    while (pind <= hsize)
    {
        int l = left(pind);
        if ((heap[l] > heap[pind]) && l > 0)
        {
            swap(heap[l], heap[pind]);
        }
        int r = right(pind);
        if ((heap[r] > heap[pind]) && r > 0)
        {
            swap(heap[r], heap[pind]);
            pind=r;
            print_heap(hsize);
            continue;
        }
        pind=l;
        print_heap(hsize);
    }
    return del;
}
int main()
{
    cout<<"------ Priority queue implementation using max-heap array ------"<<endl;
    int arr[] = {31, 6, 5, 40, 50, 25, 16, 9};
    cout<<"----------Enqueue--------"<<endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        enque(arr[i]);
    }
    cout<<"----------Dqueue--------"<<endl;
    dqueue();
    return 0;
}
