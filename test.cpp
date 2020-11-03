#include <iostream>
using namespace std;
main()
{
    int choice;
    float amt, total;
    cout << "               Welcome to GST Calculator App" << endl;
    cout << "======================================================================="<<endl;
    cout << "Select your Item\n1.Foodgrains, Vegetables & Fruits\n2.Spices and Oils\n3.Processed Foods\n4.Clothes, Smartphones and other Electronics\n";
    cout << "5.Furniture and Cars\n6.Luxury Cars, Tobacco and aerated drinks\n";
    cout << "======================================================================="<<endl;
    cout << "SELECT YOUR CHOICE: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "ENTER AMOUNT: ";
        cin >> amt;
        cout << "No GST applicable i.e. 0% \nTOTAL AMOUNT: "<< amt << endl ;
        break;
    case 2:
        cout << "ENTER AMOUNT: ";
        cin >> amt;
        cout << "GST applicable 5% \nTOTAL AMOUNT: "<< amt+amt*0.05 << endl ;
        break;
    case 3:
        cout << "ENTER AMOUNT: ";
        cin >> amt;
        cout << "GST applicable 12% \nTOTAL AMOUNT: "<< amt+amt*0.12 << endl ;
        break;
    case 4:
        cout << "ENTER AMOUNT: ";
        cin >> amt;
        if (amt >= 1000)    cout << "GST applicable 18%: " << amt + amt*0.18 << endl;
        else    cout<<"GST not applicable below 1000"<<endl;
        break;
    case 5:
        cout << "ENTER AMOUNT: ";
        cin >> amt;
        cout << "GST applicable 28% \nTOTAL AMOUNT: "<< amt+amt*0.28 << endl;
        break;
    case 6:
        cout << "ENTER AMOUNT: ";
        cin >> amt;
        if (amt >= 100)     cout << "GST applicable 28% + Cess 1%: " << amt + amt*0.29 << endl;
        else    cout<<"GST applicable 28% + No Cess: " << amt + amt*0.28 << endl;
        break;
    default:
        cout << "Wrong Choice" << endl;
        break;
    }
    cout << "======================================================================="<<endl;
}
