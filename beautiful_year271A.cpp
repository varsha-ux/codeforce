#include <iostream>

using namespace std;

int main() {
    int i,k=0;
  int n;
  cin>>n;
  for(i=n+1;i<9013;i++){
       k=i;
      int a=k%10;k/=10;
      int b=k%10;k/=10;
      int c=k%10;k/=10;
      int d=k%10;k/=10;
       if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }

  }
  cout<<i;

}
