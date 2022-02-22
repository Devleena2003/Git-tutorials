#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    // string str="Apnacollege";
    // cout<<str;
    
    // string str1(5,'n');
    // cout<<str1<<endl;


    // string str;
    //  getline(cin,str); //print total line
    // //cin>>str; print one charecter
    // cout<<str<<endl;


//Appending two strings
    // string str;
    // string s1= "fam";
    // string s2= "ily";
    // s1.append(s2);
    // cout<<s1<<endl;
    // cout<<s1+s2<<endl;//alternative way

    // cout<<s1[2]<<endl; //access


//clearing string

// string abc= "sjfroigfnfdkjbtrhi8ogjlndskvjbkd";
// abc.clear();
// cout<<abc;


//check equality of string
// string s1= "abc";
// string s2= "abc";
// if (s1.compare(s2)==0)
// {
//     cout<<"they are equal";
// }

// cout<<s2.compare(s1)<<endl;

// Erase function

// string s1="devleena";
// cout<<s1.find("le")<<endl;

// s1.erase(2,2);
// cout<<s1<<endl;

// s1.insert(2,"lol");
// cout<<s1.size()<<endl;


 //each character print
// for (int i = 0; i < s1.length(); i++)
// {
//     cout<<s1[i]<<endl;
// }

// cout<<s1<<endl;

// string s=s1.substr(6,2);
// cout<<s<<endl;



//  string s1="854";
//  int x= stoi(s1);// stoi= string to integer
//  cout<<x+2<<endl;

// int x=786;
// cout<< to_string(x) +"2"<<endl;



//sorting a string

// string s1=" hfvoerifjdljewgvnkdjabcvposfjsnv";
// sort(s1.begin(),s1.end());
// cout<<s1<<endl;//Result will be arranged alphabetically

//convert in UPPERCASE

// string str= "ansdniehrfhbdnhjv";
// cout<<'a'-'A'<<endl;
// for (int i = 0; i <str.size(); i++)
// {
//     if (str[i]>='a'&& str[i]<='z')
//     str[i]-=32;
      
// }
// cout<<str;

//convert to lowercase

// for (int i = 0; i <str.size(); i++)
// {
//     if (str[i]>='A' && str[i]<='Z')
//     str[i]+=32;
// }
// cout<<str;



//short technique to convert upper and lower

// transform(str.begin(),str.end(),str.begin(),::toupper);
// cout<<str<<endl;

// transform(str.begin(),str.end(),str.begin(),::tolower);
// cout<<str<<endl;

// greater number forming

// string s= "489547623";
// sort(s.begin(), s.end(), greater<int>());
// cout<<s<<endl;

string s="ojlfjnwledkpboaqpmvb";
int freq[26];

for (int i = 0; i < 26; i++)
freq[i]=0;


for(int i=0; i<s.size(); i++)
freq[s[i]-'a']++;

    
char ans ='a';
int maxfreq=0;


for (int i = 0; i <26; i++)
{
    if (freq[i]>maxfreq)
    {
maxfreq=freq[i];
ans=i+'a';
    }
    
}
cout<<maxfreq<<" "<<ans<<endl;

return 0;
}