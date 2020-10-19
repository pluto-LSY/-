#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cout<<"please:how many"<<endl;
    cin>>n;

    double *p = new double[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    //检查并写入文件
    ofstream outfile("A.txt",ios::out);
    if(!outfile)
    {
        cout<<"failed"<<endl;
    }
    //往里面写入内容
    for(int i=0;i<n;i++)
    {
        outfile<<p[i]<<" ";
    }
    outfile.close();//完成文件的写入

    //读文件
    ifstream infile("A.txt");
    for(int i;i<n;i++)
    {
        infile>>p[i];
    }
    infile.close();

    //计算平均分
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum =sum+p[i];
    }
    cout<<"Avg="<<sum/n;
    delete[]p;
    system("pause");
    return 0;

}
