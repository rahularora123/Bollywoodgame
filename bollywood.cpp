#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
#include<cstdlib>
using namespace std;

class movie
{
	string m;
	char c[100];
	char a;
	int counter;
	public:
		void input()
		{
			counter=0;
			int l,i;
			getline(cin,m);
			system("CLS");
			l=m.length();
			for(i=0;i<l;i++){
			
			if(m[i]=='a'||m[i]=='e'||m[i]=='i'||m[i]=='o'||m[i]=='u')
			{
				c[i]=m[i];
				counter++;
			}
			else if(m[i]==32)
			c[i]=32;
			else
			c[i]='_';
		}
		c[l]='\0';
		
		}
		void game()
		{
			int count=9;
			int i,j,l,f;
			l=m.length();
			
				
					while(counter<l && count>0)
					{
						f=0;
						cout<<c<<endl;
						cout<<"Enter Character"<<endl;
						cin>>a;
						system("cls");
						for(j=0;j<l;j++)
						{
							if(m[j]==a)
							{
								c[j]=a;
								counter++;
								f=1;
						}}
							if(f==0)
							{
								count--;
								cout<<"no matching character only "<<count<<" chances left"<<endl;
							}
						
					
					}
				if(counter==0)
				cout<<"You won"<<endl<<"Movie name-"<<c<<endl;
				else if(count==1)
				cout<<"You Lost"<<endl<<"Movie name-"<<c<<endl;
			}	
			
			};
			
int main()
{
	movie m1;
	m1.input();
	m1.game();
	return 0;
}
	

