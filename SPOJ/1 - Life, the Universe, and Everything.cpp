/*
  1 - Life, the Universe, and Everything
  Sphere Online Judge
  Esteban Arango Medina
  Print integers as input till you encouter a 42.
*/
#include <stdio.h>
#include <string>

using namespace std;


int main(){
	//for(int n;scanf("%d",&n)&&n!=42;printf("%d\n",n));
	int n;
	while(cin>>n)
	{
		if(n==42)
			break;
		cout<<n<<endl;
	}
	return 0;
}
