#include <bits/stdc++.h>
using namespace std;

//! (1) WAP to read your name and concatenate with a student.

// int main() {
// 	string name;
// 	getline(cin,name);
// 	cout<<name<<" "<<"is a student";
	
// }

//! (2) WAP to read an integer and add 2 in it

// int main(){
//     int num;
//     cin>>num;
//     cout<<"Number after adding 2: ";
//     cout<<num+2;
// }

//! (3) WAP to read name age and roll number and print it in a single line separated by space

// int main(){
//     string name;
//     int age;
//     string roll;
//     cin>>name>>age>>roll;
//     cout<<name<<" "<<age<<" "<<roll;
// }

//! (4) WAP to read 3 integer and multiply it

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<a*b*c;
// }

//! (5) WAP to read three space separated integers and calculate average of first 2 integers and check whether this average is greater than 3rd integer,if it is true print yes otehrwise NO


// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     float avg=(a+b)/2.0;
//     if(avg>c){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }

//! (6) 

// int main(){
//     int n,y;
//     cin>>n>>y;
//     int ans=n*y;
//     if((int)(log10(ans)+1)==5){
//         cout<<"Valid";
//     }
//     else{
//         cout<<"NO";
//     }
// }

//! (7)

// int main(){
//     string s;
//     cin>>s;
//     int res=s.find("&");
//     int res2=s.find("#");
//     if(s.size()%2==0 && res!=string:: npos && res2!= string:: npos){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
// }



// int main() {
//     int n;
//     cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 	    cin>>arr[i];
// 	}
// 	int initial=accumulate(arr,arr+2,0);
// 	int last=accumulate(arr+n-2,arr+n,0);
// 	cout<<"First two sum: "<<initial<<endl;
// 	cout<<"Last two sum: "<<last<<endl;
// }


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int arr[3];
//         for(int i=0;i<3;i++){
//             cin>>arr[i];
//         }
//         cout<<*max_element(arr,arr+3)<<" ";
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         cout<<*max_element(arr,arr+n)<<" ";
//         cout<<*min_element(arr,arr+n)<<" ";
//         cout<<accumulate(arr,arr+n,0)<<" ";
//         cout<<fixed<<setprecision(1)<<accumulate(arr,arr+n,0)/(float)n<<" ";
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string str;
//         cin>>str;
//         if(str=="INT"){
//         int sum=0;
//             for(int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             sum+=x;}
//             cout<<sum<<endl;
//         }
//         else{
//             // string s;
//             // getline(cin,s);
//             int ans=-1;
//             int cnt=0;
//             for(int i=0;i<n;i++){
//                 string s;
//                 cin>>s;
//                 int m=s.size();
//                 ans=max(ans,m);
                
//             }
//             cout<<ans<<endl;
            
//         }
//     }
// }


int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    int sum=accumulate(arr,arr+6,0);
    cout<<sum<<endl;
    for(int i=t-1;(i>(t-1-5));i--){
        cout<<arr[i]<<" ";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int k;
    cin>>k;
    vector<int> arr;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<t;i+=(2*k)){
        for(int j=i;j<(i+k);j++){
        swap(arr[j],arr[j+k]);
        
    }
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<" ";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a;
    vector<int> b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        b.push_back(y);
    }
    vector<int> ans;
    for(int i=0;i<m;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[j]>b[i]){
                cnt++;
            }
        }
        ans.push_back(cnt);
    }
    for(auto it:ans){
        cout<<it<<" ";
    }

}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==k){
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    
    
    

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                ans.push_back(a[j]);
                break;
                
            }
        }
        
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    
    

}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int temp=a[i];
        for(int j=i+1;j<n;j++){
            temp+=(a[j]);
        ans=max(ans,temp);
        }
           
    }
    cout<<ans<<endl;
    
    
    

}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mini=a[0];
    int diff=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]>mini){
            diff=a[i]-mini;
            diff=max(diff,mini);
        }
        else{
             mini=min(a[i],mini);}
           
    }
    cout<<diff<<endl;
    
    
    

}

