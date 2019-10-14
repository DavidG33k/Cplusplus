#include <iostream>

int main()
{
   int N1, N2, resoult;

   std::cout << "Enter two numbers: " << std::endl;
   cin >> N1 >> N2;

   resoult=(N1>N2) ? N1:N2;

   while(true) {
      if((resoult % N1 == 0) && (resoult % N2 == 0)) {
         cout << "LCM: " << resoult << endl;
         break;
      }

      ++resoult;
   }

   return 0;
}