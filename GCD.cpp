#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n1=9;
    int n2=12;
    int gcd;
    
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout<<gcd;

    return 0;
}


/*
formula---->

euclidean algorithm---> gcd(a,b)=gcd(a-b, b) where a>b
                        gcd(b,a)=gcd(b-a, a) where b>a
                        till one of them is 0, so that remaining number is gcd of given numbers
if (b == 0) {
		return a;
	}
	return gcd(b, a % b);


*/