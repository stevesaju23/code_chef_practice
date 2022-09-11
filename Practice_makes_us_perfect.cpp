#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int p,count=0;
	int l[20];
	for(int i=0;i<4;i++){
	    cin>>p;
	    l[i]=p;
	}
	
	for(int i=0;i<4;i++){
	    if(l[i]>=10){
	        count++;
	    }
	}
	printf("%d ",count);
	return 0;
}
