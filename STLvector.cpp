#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> v;                      //vetor intialization;  
cout<<"capacity of this vector v is "<<v.capacity()<<endl;         //v.capacity tells that how many memory has assign for this array;

v.push_back(1);                 // enter 1 in given vector;
cout<<"capacity->"<<v.capacity()<<endl;      // now capacity of this vector has become 1;
v.push_back(2);                               // enter 2 in this array;
cout<<"capacity->"<<v.capacity()<<endl;      // now capacity of this vector has become 2;
v.push_back(3);
cout<<"capacity->"<<v.capacity()<<endl;      // now capacity of this vector has become double that is 4;
cout<<"size of this vector  is "<<v.size()<<endl;         //v.sizetells that how many element are presnt in vector;
cout<<"element at 2nd index of vector is "<< v.at(2)<<endl;  // v.at(2) gives element thar are at index 2;
cout<<"first element of vector is "<<v.front()<<endl;                  // v.front() gives first element of vector;
cout<<"last element of vector is "<<v.back()<<endl;                  // v.back() gives last element of vector;
 cout<<"before pop element in vestor is"<<endl;
 for(int i:v)
 {
    cout<<i<<" ";
 }
 cout<<endl;
 v.pop_back();                                                      //v.pop_back() remove last element of vector;
  cout<<"after pop element in vestor is"<<endl;
 for(int i:v)
 {
    cout<<i<<" ";
 }
 cout<<endl;
 cout<<"before clear size of vestor is  " << v.size() <<endl;
 
 v.clear();                                                      //v.clear() remove  all element of vector;
  cout<<"after clear size of vestor is  "<< v.size()<<endl;
  



}