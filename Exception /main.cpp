//
//  main.cpp
//  Exception 1
//
//  Created by Kemal Abdulrahman on 6/28/18.
//  Copyright © 2018 Kemal Abdulrahman. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {

   try
   {
      int numbers;
      cout<<"Please enter a numbers";
      cin>>numbers;
   }
   catch(int numbers)
   {
      cout<<"Please enter the number again"<<endl;
   }

   return 0;
}
