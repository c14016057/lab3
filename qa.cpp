#include<vector>
#include<algorithm>
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream infile("file.in",ios::in);
vector<int> cows;
int number,i,weight;
infile>>number;
for(i=0;i<number;i++) {infile>>weight;
                       cows.push_back(weight);}
sort(cows.begin(),cows.end());
int total=0;
for(i=number-1;i>number-6;i--) total=total+cows[i];
cout<<total<<endl;

}
