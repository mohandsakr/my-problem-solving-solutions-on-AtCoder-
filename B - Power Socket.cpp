/*
problem link :https://atcoder.jp/contests/abc139/tasks/abc139_b
problem name: B - Power Socket
Status: Accepted.
Author : Mohand Sakr.
** */




#include <iostream>
using namespace std;

int main() {

int x,y;
cin>>x>>y;
int cur=1;
int ans=0;
while (cur<y){
	cur+=x;
	cur-=1;
	++ans;
}
cout<<ans<<endl;

	return 0;
}
