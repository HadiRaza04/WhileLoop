#include <ioStream>
using namespace std;

int main()
{
	int n, range;
	
	cout<<"Enter Table of: ";
	cin>>n;
	
	cout<<"Enter Range: ";
	cin>>range;
	
	int i=1;
	while(i<=range){
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		i++;
	}
	return 0;
	
}
