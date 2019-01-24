#include <iostream>
using namespace std;
int main()
{
	int secenek;
	string kelimeler[5]={"cam","kum","buz","toz","yaz"};
	char cam[3]={'c','a','m'}, kum[3]={'k','u','m'}, buz[3]={'b','u','z'}, toz[3]={'t','o','z'}, yaz[3]={'y','a','z'}, tire[3]={'-','-','-'};
	cout<<"1-5 arasinda bir tam sayi giriniz: ";
	cin>>secenek;
	cout<<"3 harfli kelimeyi tahmin edebilir misin?"<<endl<<"----"<<endl;
	for(int i=1; i<=29;i++)
	{
		char harf;
		cout<<"Bir harf giriniz:";
		cin>>harf;
		for (int j=0;j<3;j++)
		{
			if (harf==(kelimeler[secenek-1])[j])tire[j]=harf;
		}
		for(int k=0; k<3;k++)
		{
			cout<<tire[k];
		}
		if(((kelimeler[secenek-1])[0]==tire[0])&&((kelimeler[secenek-1])[1]==tire[1])&&((kelimeler[secenek-1])[2]==tire[2]))
		{
			cout<<"Tebrikler...";
			break;
		}
	}
	return 0;
}

