#include <bits/stdc++.h>

using namespace std;

//Kadane Algorithm
//To find max sum of continuous elements of an array

// dekh bhai, simple terms mein hum ye krte hai ki hum ek end fix krdete hai
// then hum kya krte hai ki iss end pe khtm honi wale subarray ka max sum kya ho skta hai
// jiske 2 jawab ho skte hai
// 1. ki wo single element subarray hua, yani wahi element is the only element, ye jab hoga agar usse pehle wale element tk ka best subarray sum negative ho
// 2. ki jo usse pehle element ka tha usme + wo element
// aise krke hum har element ke liye nikalenge ki uss element pe khtm hone wale subarray ka max sum kya ho skta hai
// and the best of these sums is the maximum continuous subarray sum
// Hum maximum subarray directly nahi dhoondh rahe.
// Hum har END ke liye best subarray dhoondh rahe hain.


int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    int n;
    cin>>n;
    int num[1000];
    for (int i=0;i<n;i++){
        cin>>num[i];
    }

    int sum = num[0];
    int max_sum = num[0];
    
    for (int i=1;i<n;i++){
        sum = max(num[i],sum+num[i]);    
        max_sum = max(sum,max_sum);    
    }

    cout<<max_sum;

    system("pause");
}