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

int main()
{
    array_1();
    array_23();
    array_32();
    array_51();
    
    return 0;
}
