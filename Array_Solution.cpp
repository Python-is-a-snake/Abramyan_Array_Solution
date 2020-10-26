#include <iostream>
using namespace std;

int array_1(){
        int arr[100];
        int n;
        cout << "Enter n: ";
        cin >> n;
        for (int i=0; i<n; i++)
            arr[i] = 1 + i*2;
        for (int i=0; i<n; ++i)
            cout << "a[i]= " << arr[i] << endl;
}

int array_23(){
    int a[10];
    int l, k, n;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter l: ";
    cin >> l;

    int i;
    for (i=0; i<n; ++i){
        cout << "a[" << i+1 << "] :";
        cin >> a[i];
    }

    int sum=0;
    for (i=0; i<k-1; ++i) sum+=a[i];
    for (i=l; i<n; ++i) sum+=a[i];

}

int array_32(){
    const int size = 5;
    int mas[size];
    for(int i=0;i<size;i++)
        cin>>mas[i];
    for(int i=1;i<size-1;i++)
    {
        if(mas[i-1]>mas[i] && mas[i+1]> mas[i])
        {
            cout<<"Local minimum: "<<i<<"is "<<mas[i];
            break;
        }
    }
}

int array_51(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int A[n],B[n],C[n];
    for(int i=0;i<n;i++)
    {
        C[i]=A[i];
        A[i]=B[i];
        B[i]=C[i];
    }
}

int array_130(){
    int a[20];
    int n;
    cout << "N: ";
    cin >> n;
 
    int i;
    for (i = 0; i<n; ++i)
    {
        cout << "a[" << i + 1 << "] : ";
        cin >> a[i];
    }
 
    int i2;
    for (i = 0; i < n; ++i)
    {
        if (i + 1 < n)
        {
            if (a[i + 1] != a[i])
            {
                ++n;
                for (i2 = n - 1; i2>i; --i2) a[i2] = a[i2 - 1];
                ++i;
            }
        }
    }
    ++n;
    a[n - 1] = a[n - 2];
 
    for (i = 0; i < n; ++i)
        cout << ' ' << i + 1 << ": " << a[i] << endl;
 
}

int array_74(){
    int const n = 10;
    int arr[n] = {4,5,7,1,3,8,5,4,9,8};
    cout << "Result: ";
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;


            for (int i = 0; i < n; i++) {
                if (arr[i] > arr[maxIndex])
                    maxIndex = i;}
            int start = min(minIndex, maxIndex);
            int end = max(minIndex, maxIndex);
            for (int i = start + 1; i < end; i++)
                arr[i] = 0;
        }
        cout << arr[i] <<" " ;
    }
    cout << endl;       
}

int main()
{
    array_1();
    array_23();
    array_32();
    array_51();
    array_74();
    array_130();
    return 0;
}
