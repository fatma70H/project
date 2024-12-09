#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"1. Load graph from file\n";
    cout<<"2. Print all friends of a person\n";
    cout<<"3. Add friend to a person\n";
    cout<<"4. Add a person to the social network\n";
    cout<<"5. Print all persons and their friends\n";
    cout<<"6. Check if a person is a common friend\n";
    cout<<"7. Write graph to file\n";
    cout<<"8. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    while(choice>0 && choice<8){
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            // Load graph from file

        }
        else if(choice==2){
            // Print all friends of a person

        }else if(choice==3){
            // Add friend to a person
            
        }else if(choice==4){
            // Add a person to the social network

        }else if(choice==5){
            // Print all persons and their friends 

        }else if(choice==6){
            // Check if a person is a common friend

        }else if(choice==7){
            // Write graph to file
            cout<<"Enter output file name: ";
        }
    }
    switch(choice){
        case 1:
            // Load graph from file
            break;
        case 2:
            // Print all friends of a person
            break;
        case 3:
            // Add friend to a person
            break;
        case 4:
            // Add a person to the social network
            break;
        case 5:
            // Print all persons and their friends 
            break;
        case 6:
            // Check if a person is a common friend 
            break;
        case 7:
            // Write graph to file
            break;
        case 8:
            // Exit
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }

    
    return 0;
}