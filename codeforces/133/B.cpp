#include <iostream>
using namespace std;
int ans,x=1;
char c,a[333];
int main()
{
	a['>']=8;
	a['<']=9;
	a['+']=10;
	a['-']=11;
	a['.']=12;
	a[',']=13;
	a['[']=14;
	a[']']=15;
	while(cin>>c)
		ans=(ans*16+a[c])%1000003;
	cout<<ans<<endl;
	return 0;
}