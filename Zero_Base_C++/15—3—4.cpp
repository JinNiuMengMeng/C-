#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
struct book
{
  int num;
  float price;
  book *next;
};
bool check(string str)
{
	int i,j=0;
	if (str[0]=='.')   //假如第一个字符是'.'
		return false;  //不是数字，返回false
for(i = 0;i<str.length();i++)
	{
		if((str[i]=='.'))
			j++;
	}
	if (j>1) 
		return  false;  
	for(i = 0;i<str.length();i++)
		if((str[i]>'9' || str[i]<'0')&&(str[i]!='.'))
			return false;
	return true;
}

book *head=NULL;
//动态链表的创建
book* creat()
{
book *p1;
book *p2;
p1=new book;
head=p1;
p2=p1;
cout<<"请输入图书的编号，必须是数字，输入0则返回主菜单"<<endl;
string str;cin>>str;
while(!check(str))
{
  cout<<"输入的不是数字，请重新输入，按0返回!!!"<<endl;
  cin>>str;
}
p1->num = atoi(str.c_str());
if(p1->num!=0)
{
  cout<<"请输入图书的价格"<<endl;
  cin>>str;
  while(!check(str))
  {
    cout<<"输入的不是数字，请重新输入!!!"<<endl;
    cin>>str;
  }
  p1->price = atof(str.c_str());
  }
  else
  {
  delete p1;p2 =NULL;head=NULL;return head;
  }
  while(p1->num!=0)
  {
  p2=p1;
  p1=new book;
    cout<<"请输入图书的编号,必须为数字，输入0则返回主菜单"<<endl;
    string str;cin>>str;
    while(!check(str))
    {
      cout<<"输入的不是数字，请重新输入，按0返回!!!"<<endl;
      cin>>str;
    }
    p1->num = atoi(str.c_str());
    if(p1->num!=0)
    {
      cout<<"请输入图书的价格，必须是数字"<<endl;
      string str;cin>>str;
      while(!check(str))
      {
        cout<<"输入的不是数字，请重新输入，按0返回!!!"<<endl;
        cin>>str;
      }
      p1->price = atof(str.c_str());
    }
    p2->next=p1;
  }
  delete p1;
  p2->next=NULL;
  return head;
}
//动态链表的删除

void Delete(book *head, int num)
{
  book *l;
  if(head->num==num)
  {
  l=head;
  head=head->next;
  ::head=head;
  delete l;
  cout<<"操作成功"<<endl;
  return;
  }
  while(head)
  {
    if(head->next==NULL)
    {
      cout<<"找不到要删除的编号."<<endl;
      return ;
    }
    if(head->next->num==num)
    {
      l=head->next;
      head->next=l->next;
      delete l;
      cout<<"操作成功"<<endl;
      return;
    }
    head=head->next;
  }
  cout<<"找不到要删除的编号."<<endl;
}

void Showbook(book *head)
{
  cout<<endl;
  cout<<"图书信息如下:"<<endl;
  while(head)
  {
    cout<<"图书编号："<<head->num<<"\t";
    cout<<"价格："<<head->price<<endl;
  head=head->next;
  }
}

int main()
{
	book * p;
	int booknum;
    p = creat();
	Showbook(p);
	cout << "please input you want to be delete book num:" << endl;
	cin >> booknum;
	Delete(p, booknum);
	Showbook(p);
	return 0;
}

