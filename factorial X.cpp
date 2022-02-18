// primer program de elemplo C++
#include <iostream>
using namespace std;
int main ()
{
int n,i;
long double factorial //se declara para poder representar numeros grandes

cout<<"introducee un numero";
cin>>n;
factorial=1;
	for(i=1;i<=n;i++)
	factorial=factorial*i;
	cout<<endl<<"factorial de"<<n<<"->"<<factorial<<endl;
	system("pause");
}
