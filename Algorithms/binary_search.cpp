#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[1000];
    int n = 10;
    int num = 5;

    // Method 1
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (A[mid] < num)
            end = mid - 1;
        else if (A[mid] > num)
            start = mid + 1;

        else if (A[mid] == num)
            ans = mid;
    }

    // Method 2
    // Jumping Method
    // N/2 ki jump, then N/4 ki jump
    int k = 0;
    for (int b = n / 2; b >= 1; k /= 2)
    {
        while (k + b < n && A[k + b] <= num)
            k += b;
    }

    // now now
    if (A[k] == num)
        cout << k; // Work Done

    // Applications
    #pragma region application1
    // A  function, first inc then dec
    // find the index where this inc to dec happens
    // Dekh bhai, humein nikalna hai k, for which, if x<k, func inc, x>k,func dec
    // Simple hai
    int start = 0;
    int end = n - 1;
    int mid = -1;
    while (start >= end)
    {
        mid = (start + end) / 2;
        if (A[mid] < A[mid + 1])
        {
            // Yani yaha tk toh inc hi hai
            start = mid + 1;
        }
        else if (A[mid] > A[mid + 1])
            end = mid - 1;
    }

    int ans = mid + 1;
    // Jumping Method
    int x = -1;
    for (int b = n-1; b >= 1; b /= 2)
    {
        while (A[x + b] < A[x + b + 1]) x += b;
    }
    int k = x + 1;//Answer
    #pragma endregion;

    
}