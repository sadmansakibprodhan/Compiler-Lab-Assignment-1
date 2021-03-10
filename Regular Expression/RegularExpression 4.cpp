//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//	string st;
//	getline(cin,st);
//
//	if(st[0]=='E' || st[0]=='e' || st[0]=='0')
//	{
//		cout<<"Not Accept"<<endl;
//		return 0;
//	}
//	int flag=0,d=0,e=0,p=0,m=0;
//	for(int i=0;i<st.length();i++)
//	{
//		if(!isdigit(st[i]))
//			if(st[i]!='.' && st[i]!='E' && st[i]!='+' && st[i]!='-')
//				flag=1;
//		if(st[i]=='-' && i<st.length()-1)
//			if(st[i-1]!='E') flag=1;
//		if(st[i]=='.') d++;
//		if(st[i]=='E') e++;
//		if(st[i]=='+') p++;
//		if(st[i]=='-') m++;
//	}
//	if(d>1) flag=1;
//	if(e!=1)
//		if(p>1 || m!=1) flag=1;
//	//if(st[st.length()-1]) flag=1;
//	if(!isdigit(st[st.length()-1])) flag=1;
//
//	if(flag==1) cout<<"Not Accept"<<endl;
//	else cout<<"Accept"<<endl;
//}
//
