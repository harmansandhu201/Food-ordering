#include <bits/stdc++.h>
using namespace std;
    char fullname[50];
    string piz1="Margherita Pizza" , piz2="Greek Pizza" , piz3="Roman Pizza" , piz4="Chicago Pizza";
	string burger_1="Pizza Burger",burger_2="Chicken Burger",burger_3="Veggie Burger";
	string sandwich_1="vegetable Sandwich", sandwich_2="Fried Egg Sandwich", sandwich_3="Extream Veg Sandwich";
	string drinks1="Sprite", drinks2="Coca Cola", drinks3="Pepsi";
	string fried1="Chicken Fried", fried2="Prawn Fried", fried3="Beef Fried";
	string gotobeginning ;
	int option,option1,option2,quantity;



void registration(){
    system("cls");
	cout<<"\t\t\t|-----------------------------------------------------|\n";
	cout<<"\t\t\t|              akash|damini|harman Fast Food          |\n";
	cout<<"\t\t\t|-----------------------------------------------------|\n\n";

    cout<<"Please Enter Your Name          : ";
    cin.getline(fullname, 30);

    starting:
    cout<<"\nPlease Enter Your Mobile Number : ";
	string number;
	cin>>number;

    if(number.size()==10)
    {
       cout<<"\nHello "<<fullname<<"!"<<"\n\nWhat Would You Like To Order?\n\n";
    }

    else
    {
        cout<<"\nPlease Enter Valid Number!\n";
        goto starting;
    }
}
void pizza_category();
void burger_category();
void sandwich_category();
void drinks_category();
void fried_category();
void home(){
    starting:
    cout<<"\t\t\t|-----------------------------------------------------|\n";
	cout<<"\t\t\t|                      Fast Food Menu                 |\n";
	cout<<"\t\t\t|-----------------------------------------------------|\n\n";

	cout<<"1) Pizza\n";
	cout<<"2) Burger\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Drinks\n";
	cout<<"5) Fried\n";
	cout<<"6) Exit\n\n";

	cout<<"\nPlease Enter Your Food Choice: ";
	cin>>option;
    if(option==1)
	 {
        pizza_category();
	 }
    else if(option==2)
	 {
		burger_category();
     }
	else if(option==3)
	 {
       sandwich_category();

     }
    else if(option==4)
	 {
		drinks_category();
     }
	else if(option==5)
	 {
		fried_category();
	 }
    else if(option==6)
	 {
		exit(1);
	 }
    else
     {
        system("cls");
        cout<<"\n\nPlease Select Right Food Choice: \n";
        goto starting;
     }

}

void display_order(){
    cout<<"\t\t\t|----------------------------------------------|\n";
    cout<<"\t\t\t|                 Your Order                   |\n";
    cout<<"\t\t\t|----------------------------------------------|\n\n";
}

void display_bill(int option){
    int options=option;
    cout<<"\n\nYour Total Bill is BDT: "<<options<<"\n\nYour Order Will be delivered in 40 Minutes\n\n";

}


void pizza_category();

void pizza_size(string piz_name){
    system("cls");
    starting:
    cout<<"\n\t\t\t|-----------------------------------------------------|\n";
	cout<<"\t\t\t|                   Pizza Size                        |\n";
	cout<<"\t\t\t|-----------------------------------------------------|\n\n";

	cout<<"\n1) Small BDT.250.00\n";
    cout<<"2) Regular BDT.500.00\n";
    cout<<"3) Large BDT.900.00\n";
    cout<<"4) Go Back\n";
    cout<<"5) Go Back Home\n";
    cout<<"\nPlease Choose Pizza Size: ";

    cin>>option2;
    if(option2>=1 && option2<=3)
            {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(option2)
			{
			case 1: option = 250.00*quantity;
			break;

			case 2: option = 500.00*quantity;
			break;

			case 3: option = 900.00*quantity;
			break;
            }

			system("cls");
			switch (option2)
			{
			 case 1:
             display_order();
			 cout<<""<<quantity<<" Small "<<piz_name;
             display_bill(option);
			 break;
			 case 2:
			 display_order();
			 cout<<""<<quantity<<" Regular "<<piz_name;
			 display_bill(option);
			 break;
			 case 3:
			 display_order();
			 cout<<""<<quantity<<" Large "<<piz_name;
			 display_bill(option);
			 break;

			}

			cout<<"Would You Like To Order Anything Else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=="Y" || gotobeginning=="y")
			{
			  system("cls");
			  cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
			  home();
			}
			cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";

		}

		else if(option2==4)
        {
          system("cls");
          pizza_category();
        }
        else if(option2==5)
        {
            system("cls");
            home();
        }

		else
        {
            system("cls");
            cout<<"\n\nPlease Select Right Pizza Size: \n";
            goto starting;
        }
}

void pizza_category(){
    system("cls");
    starting:
    cout<<"\n\t\t\t|-----------------------------------------------------|\n";
	cout<<"\t\t\t|                   Pizza Category                    |\n";
	cout<<"\t\t\t|-----------------------------------------------------|\n\n";
    cout<<"\n1) "<<piz1<<"\n";
    cout<<"2) "<<piz2<<"\n";
    cout<<"3) "<<piz3<<"\n";
    cout<<"4) "<<piz4<<"\n";
    cout<<"5) Go Back\n";

    cout<<"\nPlease Enter Pizza Choice: ";
		cin>>option1;
		if(option1>=1 && option1<=4)
		{
            string piz_name;
            if(option1==1){
                piz_name=piz1;
            }
            else if(option1==2){
                piz_name=piz2;
            }
            else if(option1==3){
                piz_name=piz3;
            }
            else if(option1==4){
                piz_name=piz4;
            }

            pizza_size(piz_name);


		}
		else if(option1==5)
        {
            system("cls");
            home();
        }
		else
        {
            system("cls");
            cout<<"\n\nPlease Select Right Pizza Choice: \n";
            goto starting;
		}
}

void burger_size(){
            cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(option2)
			{
			case 1: option = 180.00*quantity;
			break;

			case 2: option = 150.00*quantity;
			break;

			case 3: option = 160.00*quantity;
			break;

			}
			system("cls");
			switch (option2)
			{
			 case 1:
			 display_order();
			 cout<<""<<quantity<<" "<<burger_1;
			 display_bill(option);
			 break;
			 case 2:
			 display_order();
			 cout<<""<<quantity<<"  "<<burger_2;
			 display_bill(option);
			 break;
			 case 3:
			 display_order();
			 cout<<""<<quantity<<" "<<burger_3;
			 display_bill(option);
			 break;
			}

			cout<<"\nWould You Like To Order Anything Else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=="Y" || gotobeginning=="y")
			{
              system("cls");
			  cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
			  home();
			}
			cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
}

void burger_category(){
        system("cls");
        starting:
        cout<<"\n\t\t\t|-----------------------------------------------------|\n";
        cout<<"\t\t\t|                   Burger Category                   |\n";
        cout<<"\t\t\t|-----------------------------------------------------|\n\n";
        cout<<"\n1) "<<burger_1<<" BDT.180"<<"\n";
		cout<<"2) "<<burger_2<<" BDT.150"<<"\n";
		cout<<"3) "<<burger_3<<" BDT.160"<<"\n";
		cout<<"4) Go Back"<<"\n";
		cout<<"\nPlease Enter Burger Choice: ";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
            burger_size();
        }

    else if(option2==4)
        {
            system("cls");
            home();
        }

    else{
            system("cls");
            cout<<"\n\nPlease Select Right Burger Choice: \n";
            goto starting;
		}
}

void sandwich_size(){
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(option2)
			{
			case 1: option = 240.00*quantity;
			break;

			case 2: option = 160.00*quantity;
			break;

			case 3: option = 100.00*quantity;
			break;

			}
			system("cls");
			switch (option2)
			{
			 case 1:
			 display_order();
			 cout<<""<<quantity<<" "<<sandwich_1;
			 display_bill(option);
			 break;
			 case 2:
			 display_order();
			 cout<<""<<quantity<<"  "<<sandwich_2;
			 display_bill(option);
			 break;
			 case 3:
			 display_order();
			 cout<<""<<quantity<<" "<<sandwich_3;
			 display_bill(option);
			 break;


			}
			cout<<"Would You Like To Order Anything Else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=="Y" || gotobeginning=="y")
			{
			  system("cls");
			  cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
			  home();
			}
			cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
}

void sandwich_category(){
        system("cls");
        starting:
        cout<<"\n\t\t\t|-----------------------------------------------------|\n";
        cout<<"\t\t\t|                   Sandwich Category                 |\n";
        cout<<"\t\t\t|-----------------------------------------------------|\n\n";
        cout<<"\n1)  "<<sandwich_1<<" BDT.240.00"<<"\n";
		cout<<"2)  "<<sandwich_2<<" BDT.160.00"<<"\n";
		cout<<"3)  "<<sandwich_3<<" BDT.100.00"<<"\n";
		cout<<"4) Go Back"<<"\n";
		cout<<"\nPlease Enter Sandwich Choice:";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
           sandwich_size();
        }
        else if(option2==4)
        {
            system("cls");
            home();
        }
        else{
            system("cls");
            cout<<"\n\nPlease Select Right Sandwich Choice: \n";
            goto starting;
        }
}

void drinks_size(){

        cout<<"\nPlease Enter Quantity: ";
        cin>>quantity;
        switch(option2)
        {
        case 1: option = 15.00*quantity;
        break;

        case 2: option = 20.00*quantity;
        break;

        case 3: option = 30.00*quantity;
        break;

        }
        system("cls");
        switch (option2)
        {
        case 1:
        display_order();
        cout<<""<<quantity<<" "<<drinks1;
        display_bill(option);
        break;
        case 2:
        display_order();
        cout<<""<<quantity<<"  "<<drinks2;
        display_bill(option);
        break;
        case 3:
        display_order();
        cout<<""<<quantity<<" "<<drinks3;
        display_bill(option);
        break;
        }
        cout<<"Would You Like To Order Anything Else? Y / N:";
        cin>>gotobeginning;
        if(gotobeginning=="Y" || gotobeginning=="y")
        {
            system("cls");
            cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
            home();
        }
        cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
}

void drinks_category(){
        system("cls");
        starting:
        cout<<"\n\t\t\t|-----------------------------------------------------|\n";
        cout<<"\t\t\t|                   Drinks Category                   |\n";
        cout<<"\t\t\t|-----------------------------------------------------|\n\n";
        cout<<"\n1) "<<drinks1<<" BDT.15.00"<<"\n";
		cout<<"2) "<<drinks2<<" BDT.20.00"<<"\n";
		cout<<"3) "<<drinks3<<" BDT.30.00"<<"\n";
		cout<<"4) Go Back "<<"\n";
		cout<<"\nPlease Enter Drinks Choice: ";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
            drinks_size();
        }
        else if(option2==4)
        {
            system("cls");
            home();
        }

        else{
            system("cls");
            cout<<"\n\nPlease Select Right Drinks Choice: \n";
            goto starting;
        }
}

void fried_size(){
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(option2)
			{
			case 1: option = 160.00*quantity;
			break;

			case 2: option = 220.00*quantity;
			break;

			case 3: option = 140.00*quantity;
			break;

			}
			system("cls");
			switch (option2)
			{
			 case 1:
			 display_order();
			 cout<<""<<quantity<<" "<<fried1;
			 display_bill(option);
			 break;
			 case 2:
			 display_order();
			 cout<<""<<quantity<<"  "<<fried2;
			 display_bill(option);
			 break;
			 case 3:
			 display_order();
			 cout<<""<<quantity<<" "<<fried3;
			 display_bill(option);
			 break;


			}
			cout<<"Would You Like To Order Anything Else? Y / N:";
			cin>>gotobeginning;
			if(gotobeginning=="Y" || gotobeginning=="y")
			{
			  system("cls");
			  cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
			  home();
			}
			cout<<"\n\nThank You For Ordering From Harman Fast Food\n\n";
}

void fried_category(){
        system("cls");
        starting:
        cout<<"\n\t\t\t|-----------------------------------------------------|\n";
        cout<<"\t\t\t|                   Fried Category                    |\n";
        cout<<"\t\t\t|-----------------------------------------------------|\n\n";
        cout<<"\n1) "<<fried1<<" BDT.160.00"<<"\n";
		cout<<"2) "<<fried2<<" BDT.220.00"<<"\n";
		cout<<"3) "<<fried3<<" BDT.140.00"<<"\n";
		cout<<"4) Go Back"<<"\n";
		cout<<"\nPlease Enter Fried Choice:";
		cin>>option2;
		if(option2>=1 && option2<=3)
		{
           fried_size();
        }
        else if(option2==4)
        {
            system("cls");
            home();
        }
        else{
            system("cls");
            cout<<"\n\nPlease Select Right Fried Choice: \n";
            goto starting;
        }
}



int main()
{
	registration();
    home();
}


