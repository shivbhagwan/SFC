//Program for Step Space Filling Curve
#include<iostream>

using namespace std;
int p, q, a[100][100], m[100][100],b[100][100] ,t,s1=0,r1=0,p1,q1, k = 0,x=1,y=1, r, s,z,w=0,x1=1,y1=1,c[100][100];
int
main ()
{

  cout << "enter number of rows and coloumn of the matrix";
  cin >> p >> q;
  p1=p;q1=q;
  cout<<"enter your choice\n1)for distort the matrix\n2)for reconstruction\n";
  cin>>z;

if(z==1)
  {
cout << "\n enter elements of the matrix\n";

  for (int i = 1; i <= p; i++)    // entering elements int the matrix //
    {
      for (int j = 1; j <= q; j++)
    {
      cin >> a[i][j];
    }

    }

  for (int i = 1; i <= p; i++)    // displaying elements of the matrix on the screen //
    {
      cout << "\n";
      for (int j = 1; j <= q; j++)
    {

      cout << "  " << a[i][j];
    }

    }

//prograam for the upper triangle//

  int temp=p*q;
    while(w<temp)
    {


if(p>=q)
{
    cout<<"\n\n";
      for(int i=1;i<=q;i++)
      {
          for(int j=1;j<=q;j++)
          {

              w++;
          }

      }
x=1;y=1;
if (q % 2 == 0)        //checking whether number of rows are even or odd //
    {
      t = (q / 2);
    }

  else
    {
      t = (q / 2) + 1;
    }

    for(int i=1;i<=t;i++)
    {
      for(int j=1;j<=((2*q)-1-(4*(i-1)));j++)
      {

      if(j==1)
      {
      r=1;s=2*i-1;
      }

      else
      {
        if(j%2==0)
          {
           s++;
          }
        else
          {
           r++;
          }

      }

      c[x1][y1]=a[r][s];
      k++;

        if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
      }

    }
//End of the program for the upper traingle//


//program for the lower triangle//

  for (int i = 1; i <= (q / 2); i++)
    {
      for (int j = 1; j <= ((2 * q) - 3 - (4 * (i - 1))); j++)
    {

      if (j == 1)
        {
          r = 2 * i;
          s = 1;

        }
      else
        {
          if (j % 2 == 0)
        {
          r++;
        }
          else
        {
          s++;
        }
        }


      c[x1][y1]=a[r][s];
      k++;

     if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
    }

    }

//End of the program for the lower triangle//

cout<<"\n\n\n";
      for(int i=q+1;i<=p;i++)
      {
          for(int j=1;j<=q;j++)
          {
              a[i-q][j]=a[i][j];

          }
      }
       p=p-q;

}
else
{
    cout<<"\n\n";
    for(int i=1;i<=p;i++)
      {
          for(int j=1;j<=p;j++)
          {

              w++;
          }

      }
      x=1;y=1;
if (p % 2 == 0)        //checking whether number of rows are even or odd //
    {
      t = (p / 2);
    }

  else
    {
      t = (p / 2) + 1;
    }

    for(int i=1;i<=t;i++)
    {
      for(int j=1;j<=((2*p)-1-(4*(i-1)));j++)
      {

      if(j==1)
      {
      r=1;s=2*i-1;
      }

      else
      {
        if(j%2==0)
          {
           s++;
          }
        else
          {
           r++;
          }

      }

      c[x1][y1]=a[r][s];
      k++;

         if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
      }

    }
//End of the program for the upper traingle//


//program for the lower triangle//

  for (int i = 1; i <= (p / 2); i++)
    {
      for (int j = 1; j <= ((2 * p) - 3 - (4 * (i - 1))); j++)
    {

      if (j == 1)
        {
          r = 2 * i;
          s = 1;

        }
      else
        {
          if (j % 2 == 0)
        {
          r++;
        }
          else
        {
          s++;
        }
        }


      c[x1][y1]=a[r][s];
      k++;

         if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
    }

    }

//End of the program for the lower triangle//

cout<<"\n\n\n";
      for(int i=1;i<=p;i++)
      {
          for(int j=p+1;j<=q;j++)
          {
              a[i][j-p]=a[i][j];
          }
      }
      q=q-p;

}
    }
   for(int i=1;i<=p1;i++)
   {
       for(int j=1;j<=q1;j++)
       {
           cout<<"  "<<c[i][j];
       }
       cout<<"\n";
   }

}
else if(z==2){
cout << "\n enter elements of the matrix\n";
      for (int i = 1; i <= p; i++)    // entering elements int the matrix //
    {
      for (int j = 1; j <= q; j++)
    {
      cin >> c[i][j];
    }

    }
    for (int i = 1; i <= p; i++)    // displaying elements of the matrix on the screen //
    {
      cout << "\n";
      for (int j = 1; j <= q; j++)
    {

      cout << "  " << c[i][j];
    }

    }
cout<<"\n\n\n";


//prograam for the upper triangle//

  int temp=p*q;
    while(w<temp)
    {


if(p>=q)
{
    cout<<"\n\n";
      for(int i=1;i<=q;i++)
      {
          for(int j=1;j<=q;j++)
          {

              w++;
          }

      }
x=1;y=1;
if (q % 2 == 0)        //checking whether number of rows are even or odd //
    {
      t = (q / 2);
    }

  else
    {
      t = (q / 2) + 1;
    }

    for(int i=1;i<=t;i++)
    {
      for(int j=1;j<=((2*q)-1-(4*(i-1)));j++)
      {

      if(j==1)
      {
      r=1+r1;s=2*i-1+s1;
      }

      else
      {
        if(j%2==0)
          {
           s++;
          }
        else
          {
           r++;
          }

      }

      a[r][s]=c[x1][y1];
      k++;

        if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
      }

    }
//End of the program for the upper traingle//


//program for the lower triangle//

  for (int i = 1; i <= (q / 2); i++)
    {
      for (int j = 1; j <= ((2 * q) - 3 - (4 * (i - 1))); j++)
    {

      if (j == 1)
        {
          r = r1+2 * i;
          s = s1+1;

        }
      else
        {
          if (j % 2 == 0)
        {
          r++;
        }
          else
        {
          s++;
        }
        }


      a[r][s]=c[x1][y1];
      k++;

     if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
    }

    }

//End of the program for the lower triangle//

cout<<"\n\n\n";
//      for(int i=q+1;i<=p;i++)
//      {
//          for(int j=1;j<=q;j++)
//          {
//              a[i-q][j]=a[i][j];
//
//          }
//      }
r1=r1+q;
       p=p-q;

}
else
{
    cout<<"\n\n";
    for(int i=1;i<=p;i++)
      {
          for(int j=1;j<=p;j++)
          {

              w++;
          }

      }

if (p % 2 == 0)        //checking whether number of rows are even or odd //
    {
      t = (p / 2);
    }

  else
    {
      t = (p / 2) + 1;
    }

    for(int i=1;i<=t;i++)
    {
      for(int j=1;j<=((2*p)-1-(4*(i-1)));j++)
      {

      if(j==1)
      {
      r=1+r1;s=s1+2*i-1;
      }

      else
      {
        if(j%2==0)
          {
           s++;
          }
        else
          {
           r++;
          }

      }

     a[r][s]=c[x1][y1];
      k++;

         if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
      }

    }
//End of the program for the upper traingle//


//program for the lower triangle//

  for (int i = 1; i <= (p / 2); i++)
    {
      for (int j = 1; j <= ((2 * p) - 3 - (4 * (i - 1))); j++)
    {

      if (j == 1)
        {
          r = r1+2 * i;
          s = 1+s1;

        }
      else
        {
          if (j % 2 == 0)
        {
          r++;
        }
          else
        {
          s++;
        }
        }


      a[r][s]=c[x1][y1];
      k++;

         if(k%q1==0)
     {
         x1++;
         y1=1;

     }
     else
        y1++;
    }

    }

//End of the program for the lower triangle//

cout<<"\n\n\n";
//      for(int i=1;i<=p;i++)
//      {
//          for(int j=p+1;j<=q;j++)
//          {
//              a[i][j-p]=a[i][j];
//          }
//      }
s1=s1+p;
      q=q-p;


}
    }
   for(int i=1;i<=p1;i++)
   {
       for(int j=1;j<=q1;j++)
       {
           cout<<"  "<<a[i][j];
       }
       cout<<"\n";
   }



}
else {cout<<"enter the apporiate number\n";}
}

