#include<iostream>
#include<cmath>

using namespace std;


//การเติมคำตอบในช่องนี้ ขอให้เติมเฉพาะ Function adiff() เท่านั้น โดยห้ามเติม Function main() มาในนี้


//การเติมคำตอบในช่องนี้ ขอให้เติมเฉพาะ Function adiff() เท่านั้น โดยห้ามเติม Function main() มาในนี้

int adiff(int a,int b) {

         

        
         
         if (abs(a-b)%360 > 180) {
         
         return 360-abs(a-b)%360; }
         
          return abs(a-b)%360;
    
}








int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;
}
