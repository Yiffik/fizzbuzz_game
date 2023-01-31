
#include <conio.h>
using namespace std;
//введенное число последнее в игре
//делится на 3 кринж
//делится на 5 база
//делитса на оба кринжбаза
//в логике тернарный оператор
int _tmain(int argc, _TCHAR* argv[])
{   int n;
	cout<<"Fun game BazaCringe limit"<<endl;
	cin>>n;
	cout<<n<<" Cringe limit"<<endl;


	for (int i = 1; i <= n; i++)
		{
	  (i%3==0)&&(i%5==0)?cout<<i<<" CringeBaza"<<endl : (i%3==0)?cout<<i<<" Cringe"<<endl : (i%5==0)?cout<<i<<" Baza"<<endl : cout<<i<<endl;
		}
   getche();
   return 0 ;
}
