#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ll t;
  cin>>t;
  while(t--){
    ll N,K,neg=0;
    cin>>N>>K;
    ll A[N],B[N*K];
    ll temp_fsum=0, front_sum=0, temp_bsum=0, back_sum=0, karden_sum=0, total_sum=0,final_ans=89;
    ll max_ending_here = 0, max_so_far = INT_MIN;
    for(ll i=0;i<N;i++){
      cin>>A[i];
      
      //count_negative
      if(A[i]<0) neg++;
      
      //total sum
      total_sum+=A[i];
      
      //karden's sum
      max_ending_here+=A[i];
      if(max_so_far<max_ending_here) max_so_far=max_ending_here;
      if(max_ending_here<0) max_ending_here=0;
      
      //front_sum   
      temp_fsum += A[i];
      if(front_sum<temp_fsum) front_sum=temp_fsum;
    }
    
    karden_sum = max_so_far;
    //back_sum
    for(ll i=N-1;i>=0;i--){
      temp_bsum += A[i];
      if(back_sum<temp_bsum) back_sum=temp_bsum;
    }
    if(neg==N) cout<<karden_sum<<endl;
    else{
      if(K>1){
        if(total_sum>0)
          final_ans = (K-2)*total_sum + back_sum + front_sum;
        else
          final_ans = back_sum + front_sum;
        //important missing stuff
        if(final_ans<karden_sum) final_ans=karden_sum;
      }
      else{
        final_ans = karden_sum;
      }
      cout<<final_ans<<endl;
    }
  }
  return 0;
} 