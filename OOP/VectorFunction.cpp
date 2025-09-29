
#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<int> vec={1,2,3,4,5,6,7,8,9,0};
   cout<<"size of vector::"<<vec.size()<<endl; //size function
   
   vec.push_back(11); //push_back function
    cout<<"size of vector after push data::"<<vec.size()<<endl;
    
    vec.pop_back();    //pop_back function
    
    cout<<"frist element::"<<vec.front()<<endl; //front fnction
    cout<<"last element::"<<vec.back()<<endl; //back function
    cout<<"capacity of vector::"<<vec.capacity()<<endl;
    cout<<"Index of element::"<<vec.at(3)<<endl;
   for(int val:vec){
       cout<<val<<endl;
   }
    return 0;
}