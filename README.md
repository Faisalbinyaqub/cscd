# cscd
#include <iostream>

using namespace std;

int main()
{
    int jcr;
    int src;
    int hall;
    int fees;

    cout << "  please enter the amount you paid for junior common room dues \n";
    cout << "  GHC ";
    cin >> jcr;
    int a = 90 - jcr;
    cout << "  Balance for junior common room is GHC "<< a << endl<<endl<<endl;


    cout << "  please enter the amount you paid for senior room dues  \n";
    cout << "  GHC ";
    cin >> src;
    int b = 20 - src;
    cout << "  your balance for senior room is GHC  "<< b << endl<<endl<<endl;


    cout << "  please enter the amount you paid for residence fee \n";
    cout << "  GHC ";
    cin >> hall;
    int c = 1345 - hall;
    cout << "  your balance for residence fee is GHC "<< c << endl<<endl<<endl;

     cout << "  please enter the amount you paid for tuition \n";
     cout << "  GHC ";
     cin >> fees;
      int d = 1607 - fees;
     cout << "  your balance for tuition is GHC "<< d << endl<<endl<<endl;


     cout << "  The total BALANCE to be settled by the end of the academic year is \n ";
     cout << "  GHC ";
     cout << a + b + c + d << endl<<endl<<endl<<endl;

     cout << "  WISH YOU A VERY SUCCESSFUL ACADEMIC YEAR AND ALL THE BEST !!! \n";



     cout <<"                designed by FAISAL BIN YAKUB \n\n\n";

    return 0;
}
