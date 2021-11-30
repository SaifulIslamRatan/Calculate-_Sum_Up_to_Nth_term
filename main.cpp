#include <iostream>
#include <math.h>

using namespace std;
int sum = 0;
int Calculate_Sum_Up_to_Nth_term (int Fri_Ele,int Sec_Ele,int Thi_Ele,int n){

    if(n==0){
        return sum;
    }
    else{
        int temp =Fri_Ele*Sec_Ele*Thi_Ele;
        cout<<temp<< (n!=1? " + " : "");
        sum=sum+temp+Calculate_Sum_Up_to_Nth_term (Fri_Ele*2,Sec_Ele+2,Thi_Ele-1,n-1);

    }
}
 int main()
{
    int n,Fri_Ele=2,Sec_Ele=3,Thi_Ele=4;
    cout<<"Please Enter the number:";
    cin >> n;
    Calculate_Sum_Up_to_Nth_term(Fri_Ele,Sec_Ele,Thi_Ele,n);
    cout<<" = "<<sum;
    return 0;
}

