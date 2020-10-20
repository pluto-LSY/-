#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	char data[100];

	//写入文件
	ofstream outfile("B.txt");
	if(!outfile)
	{
		cout<<"failed"<<endl;
	}
	cout<<"your name:"<<endl;
	cin.getline(data,100);
	outfile<<data<<endl;

	cout<<"your age:"<<endl;
	cin.getline(data,100);
	outfile<<data<<endl;

	outfile.close();

	//读取文件
	ifstream infile("B.txt");
	if(!infile)
	{
		cout<<"failed"<<endl;
	}
	string tmp;
	while(getline(infile,tmp))
	{
		cout<<endl;
		cout<<tmp<<endl;
	}
	infile.close();
	return 0;
}
