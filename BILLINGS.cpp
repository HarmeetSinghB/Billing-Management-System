#include <iostream>
#include <stdlib.h>
//#include<conio.h>
//#include<bits/stdc++.h>
using namespace std;
void menu();
void appetizers();
void dinner_special();
void desserts();
void beverages();
void order();
void finalbill(float);
void bill(float);
class restaurant
{
	char ch1;
public:
	void display();
};
void restaurant::display()
{
	cout<<"**********************************************"<<endl;
	cout<<"      Welcome To 'THE INDIAN RESTAURANT'      "<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"      Click (M) For MENU Or (E) For EXIT      "<<endl;
start1:
	cout<<"-----------------------------------------------"<<endl;
	cin>>ch1;
	cout<<"-----------------------------------------------"<<endl;
	switch(ch1)
	{
		case 'M':
			menu();
			break;
		case 'E':
			goto stop1;
		default:
			cout<<"     *** Click Only Between (M) Or (E) ***     "<<endl;
			goto start1;
	}
	stop1:;
}
void menu()
{
	char ch2;
	cout<<"Choose your ITEM As You Want: "<<endl;
	cout<<"(A). Appetizers or Staters"<<endl<<"(D). Dinner Special"<<endl<<"(S). Desserts"<<endl<<"(B). Beverages"<<endl;
start2:
	cin>>ch2;
	cout<<"-----------------------------------------------"<<endl;
	switch(ch2)
	{
	case'A':
		appetizers();
		break;
	case'D':
		dinner_special();
		break;
	case'S':
		desserts();
		break;
	case'B':
		beverages();
		break;
	default:
		cout<<"* Click Only Between (A) or (D) or (S) or (B) *"<<endl;
		goto start2;
	}
}
int Paneer_Tikka=150,Gobi_Manchurian=200,Chilli_Paneer=400,Dahi_Vada=300,Boti_Kebab=100;
void appetizers()
{
	cout<<"             APPETIZERS & STATERS              "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"(A). Paneer Tikka   \t\t   Rs150/-"<<endl<<"(B). Gobi Manchurian  \t\t   Rs200/-"<<endl<<"(C). Chilli Paneer   \t\t   Rs400/-"<<endl<<"(D). Dahi Vada   \t\t   Rs300/-"<<endl<<"(E). Boti Kebab   \t\t   Rs100/-"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	order();
}
int Lemon_Chicken =300,Dal_Tadka=250,Palak_Paneer=500;
void dinner_special()
{
	cout<<"                DINNER SPECIAL                "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"(F). Lemon Chicken    \t\t   Rs300/-"<<endl<<"(G). Dal Tadka   \t\t   Rs250/-"<<endl<<"(H). Palak Paneer   \t\t   Rs500/-"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	order();
}
int Gulab_Jamun=80,Jalebi=200,Rasmalai=150;
void desserts()
{
	cout<<"                   DESSERTS                   "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"(I). Gulab Jamun  \t\t   Rs80/-"<<endl<<"(J). Jalebi   \t\t\t   Rs200/-"<<endl<<"(K). Rasmalai   \t\t   Rs150/-"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	order();
}
int Gin_and_Tonic=150,Lassi=50,Masala_Chai=30;
void beverages()
{
	cout<<"                   BEVERAGES                  "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"(L). Gin and Tonic   \t\t   Rs150/-"<<endl<<"(M). Lassi   \t\t\t   Rs50/-"<<endl<<"(N). Masala Chai   \t\t   Rs30/-"<<endl;
	cout<<"-----------------------------------------------"<<endl;
	order();
}
int sum=0;
void order()
{
	int n;
	bool cond {false};
	char ch2;
	do{
		cout<<"How Many ITEMS You Want: "<<endl;
	    cin>>n;
		if (cin.good()) {
        	cond = true;
    	}
		else {
        cin.clear();
        cin.ignore();
        cout << "Invalid, please enter a digit.\n" << endl;
    	}
	}while(!cond);
	stop2:
	for(int i=1;i<=n;i++)
	{
		cout<<"Choose Your "<<i<<" ITEM: "<<endl;
		cin>>ch2;
		if(ch2=='A')
		{
			sum+=Paneer_Tikka;
		}
		else if(ch2=='B')
		{
			sum+=Gobi_Manchurian;
		}
		else if(ch2=='C')
		{
			sum+=Chilli_Paneer;
		}
		else if(ch2=='D')
		{
			sum+=Dahi_Vada;
		}
		else if(ch2=='E')
		{
			sum+=Boti_Kebab;
		}
		else if(ch2=='F')
		{
			sum+=Lemon_Chicken;
		}
		else if(ch2=='G')
		{
			sum+=Dal_Tadka;
		}
		else if(ch2=='H')
		{
			sum+=Palak_Paneer;
		}
		else if(ch2=='I')
		{
			sum+=Gulab_Jamun;
		}
		else if(ch2=='J')
		{
			sum+=Jalebi;
		}
		else if(ch2=='K')
		{
			sum+=Rasmalai;
		}
		else if(ch2=='L')
		{
			sum+=Gin_and_Tonic;
		}
		else if(ch2=='M')
		{
			sum+=Lassi;
		}
		else if(ch2=='N')
		{
			sum+=Masala_Chai;
		}
		else
		{
			cout<<"Please Choose Wisely.\n"<<endl;
			goto stop2;
		}
	}
	
	finalbill(sum);
}
void finalbill(float num)
{
	char ch3;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Click (M) for MAIN MENU For Another ITEM or (B) For BILL."<<endl;
	cin>>ch3;
	switch(ch3)
	{
	case'M':
		menu();
		break;
	case'B':
		bill(num);
		break;
	default:
		finalbill(num);
	}
}
void bill(float num)
{
	float gst;
	gst= num * 0.18;
	float total_bill=0;
	total_bill=num+gst;
	cout<<"***********************************************"<<endl;
	cout<<"     Total BILL (include GST):      "<<"Rs "<<total_bill<<endl;
	cout<<"***********************************************"<<endl;
}
int main()
{
	//system("clr");
	restaurant rt;
	rt.display();
	getchar();
	
	return 0;
}
