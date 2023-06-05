#include <bits/stdc++.h>
#include<chrono>
using namespace std::chrono;
using namespace std;
void min_max(int a[], int *min, int *max, int low, int high)
{
    int mid;
    int min1, max1;
    mid = (low + high) / 2;
    if ((high - low + 1) == 1)
    {
        min1 = max1 = a[low];
        if (min1 < *min)
        {
            *min = min1;
        }
        if (max1 > *max)
        {
            *max = max1;
        }
        // cout<<"{n=1}min :"<<min1<<"max :"<<max1<<endl;
        return;
    }
    else if ((high - low + 1) == 2)
    {
        if (a[low] > a[high])
        {
            min1 = a[high];
            max1 = a[low];
            if (min1 < *min)
            {
                *min = min1;
            }
            if (max1 > *max)
            {
                *max = max1;
            }
            // cout<<"{n=2 ,i}min :"<<*min<<"max :"<<*max<<endl;
        }
        else
        {
            min1 = a[low];
            max1 = a[high];
            if (min1 < *min)
            {
                *min = min1;
            }
            if (max1 > *max)
            {
                *max = max1;
            }
            // cout<<"{n=2 ,e} min1 :"<<min1<<"max1 :"<<max1<<endl;
        }
        return;
    }
    else
    {
        // cout<<"min "<<*min<<"max "<<max<<endl;
        min_max(a, min, max, low, mid);
        min_max(a, min, max, mid + 1, high);
    }
}
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int min = a[0], max = a[0],min1=a[0],max1=a[0];
    auto start = high_resolution_clock::now();
    min_max(a, &min, &max, 0, n - 1);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end-start);
    cout<<"min :"<<min<<"max :"<<max<<"Time taken:"<<duration.count()<<endl;
     auto start1 = high_resolution_clock::now();
    for(int i =0;i<n;++i)
    {
        if(a[i]<min1)
        {
            min1 = a[i];
        }
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end-start);
    cout<<"min :"<<min<<"max :"<<max<<"Time taken:"<<duration1.count()<<endl;
     
    return 0;
}
