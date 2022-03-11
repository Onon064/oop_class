#include <iostream>

void swap(int &a,int &b);
{
    int c=a;
    a=b;
    b=c;
}

int main()
{
   
   int a=2;
   int b=5;
   
   std::cout <<"a="<< a <<'\n';
   std::cout <<"b"<< b <<'\n';

   swap(a,b);

   std::cout <<"a="<< a <<'\n';
   std::cout <<"b"<< b <<'\n';

    return 0;
}

