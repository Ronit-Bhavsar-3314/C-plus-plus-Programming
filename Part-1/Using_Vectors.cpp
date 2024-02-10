#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" "<<endl;
        }
        cout<<endl;
}
int main()
{
    vector<int>v;
    cout<<" Initial size = "<<v.size()<<endl;
    int x;
    cout<<"Enter 5 integer ";
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);  //important line (push_back).....
    }
    cout<<"Size after adding 5 values ";
    cout<<v.size()<<endl;
    cout<<" Current contents "<<endl;
    display(v);
    v.push_back(6.6);
    cout<<endl<<"size "<<v.size()<<endl;
    cout<<"Contents now "<<endl;
    display(v);
    vector<int>::iterator itr=v.begin();
    itr=itr+3;
    v.insert(itr,1,9);
    cout<<"contents after inserting "<<endl;
    display(v);
    v.erase(v.begin()+3,v.begin()+5);
    cout<<" Contents after deletion is "<<endl;
    display(v);
    cout<<" End "<<endl;
    return 0;
}