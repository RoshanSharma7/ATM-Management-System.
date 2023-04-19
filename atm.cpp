#include<iostream>
using namespace std;

void showmenu(){
    // Display menu for the user.

        cout<<"\t\t\t------------------------------MENU------------------------------"<<endl;
        cout<<"\n\t\t\t 1. Check Belance"<<endl;
        cout<<"\t\t\t 2. Credit Money"<<endl;
        cout<<"\t\t\t 3. withdrow money"<<endl;
        cout<<"\t\t\t 4. Exit"<<endl;
        cout<<endl;
        cout<<"\t\t\t----------------------------------------------------------------"<<endl;
    
}

int main(){
    int choice;
    double belance=0, credit, withdrow;

    do{
        showmenu();
        cout<<"\n\t\t\t Enter the Choice:- ";
        cin>>choice;
        system("cls");
    
        // this is logic secsion,
    
        switch (choice)
        {
        case 1: {cout<<"\n\t\t\tYour Belance: "<<belance<<endl;        // display belance
                break;
        }
        case 2: {cout<<"\n\t\t\tEnter the credit amount: ";           // credit amout 
                cin>>credit;
                belance = belance + credit;
                cout<<"\t\t\tAmout credit suscessfuly."<<endl;
                break; 
        }
        case 3: {cout<<"\n\t\t\tEnter the withdrow amout: ";          // withdrow amout
                cin>>withdrow;
                if(belance>=500){
                    belance = belance - withdrow;
                    cout<<"\n\t\t\tAmout withdrow suscessfuly."<<endl;
                }
                else{
                    cout<<"\n\t\t\tYou don't have a sufficient money! "<<endl;
                }
                break;
        }
        case 4: {break;}

        default: {cout<<"\n\t\t\tInvelid key enter! retry."<<endl;
            break;
        }
        }
    }

    while (choice!=4);                                          // exit while loop
    
    return 0;
}
