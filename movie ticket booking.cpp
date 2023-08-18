#include<iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <exception>

using namespace std;

class ageexception:public exception
  {
  public:
    const char* what()const throw()
    {
        return "Age is less then 18 not allowed\n";
    }
  };

  class cardexception:public exception
  {
  public:
    const char* what()const throw()
    {
        return "Access denied - if card validity is expired in 2021 \n";
    }
  };

   class passwordexception:public exception
  {
  public:
    const char* what()const throw()
    {
        return "Access denied - password is Incorrect \n";
    }
  };


class date
{
    int dd,mm,yyyy;
public:
    void Getdate()
    {
        cout<<"Enter the date"<<endl;
        cin>>dd;
        cout<<"Enter the month"<<endl;
        cin>>mm;
        cout<<"Enter the year"<<endl;
        cin>>yyyy;
    }
    void Putdate()
    {
        cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
    }
};

class movie
{
    string name;
    char language[15];
    float hour;
    string type;
    string description;
    public:
    movie(){}
    movie(string name, char language[15], float hour, string type, string description)
    {
        this->name=name;
        this->language[15]=language[15];
        this->hour=hour;
        this->type=type;
        this->description=description;

    }
void  moviedetails()
{
    cout<<"movie details\n"<<endl;
    cout<<"1.name-Outside the wire\n"<<endl;
    cout<<"-.Language-English\n"<<endl;
    cout<<"-.hour-1h 55m\n"<<endl;
    cout<<"-.type-International\n"<<endl;
    cout<<"-.description-UA certificate\n"<<endl<<endl;
    cout<<"2.name-Ala vaikunthapurramuloo\n"<<endl;
    cout<<"-.Language-Telgu\n"<<endl;
    cout<<"-.hour-2h 45m\n"<<endl;
    cout<<"-.type-National\n"<<endl;
    cout<<"-.description-U certificate\n"<<endl<<endl;
    cout<<"3.name-Village Rockstars\n"<<endl;
    cout<<"-.Language-English\n"<<endl;
    cout<<"-.hour-1h 27m\n"<<endl;
    cout<<"-.type-Regional\n"<<endl;
    cout<<"-.description-U certificate\n"<<endl<<endl;
    cout<<"4.name-The Witch in the window\n"<<endl;
    cout<<"-.Language-English\n"<<endl;
    cout<<"-.hour-2h 55m\n"<<endl;
    cout<<"-.type-International\n"<<endl;
    cout<<"-.description-A certificate\n"<<endl<<endl;
    cout<<"5.name-Dia\n"<<endl;
    cout<<"-.Language-Kannada\n"<<endl;
    cout<<"-.hour-3h 10m\n"<<endl;
    cout<<"-.type-Regional\n"<<endl;
    cout<<"-.description-U certificate\n"<<endl<<endl;
    cout<<"6.name-His house\n"<<endl;
    cout<<"-.Language-English\n"<<endl;
    cout<<"-.hour-2h 23m\n"<<endl;
    cout<<"-.type-International\n"<<endl;
    cout<<"-.description-UA certificate\n"<<endl<<endl;
    cout<<"7.name-The Davinci Code\n"<<endl;
    cout<<"-.Language-English\n"<<endl;
    cout<<"-.hour-1h 23m\n"<<endl;
    cout<<"-.type-National\n"<<endl;
    cout<<"-.description-S-certificate\n"<<endl<<endl;
    cout<<"8.name-Charlie\n"<<endl;
    cout<<"-.Language-Malayalam\n"<<endl;
    cout<<"-.hour-2h 13m\n"<<endl;
    cout<<"-.type-National\n"<<endl;
    cout<<"-.description-U-certificate\n"<<endl<<endl;
    cout<<"9.name-Arjun reddy\n"<<endl;
    cout<<"-.Language-Telgu\n"<<endl;
    cout<<"-.hour-2h 13m\n"<<endl;
    cout<<"-.type-National\n"<<endl;
    cout<<"-.description-s-certificate\n"<<endl<<endl;
    cout<<"10.name-psycho\n"<<endl;
    cout<<"-.Language-tamil\n"<<endl;
    cout<<"-.hour-1h 13m\n"<<endl;
    cout<<"-.type-Regional\n"<<endl;
    cout<<"-.description-UA-certificate\n"<<endl<<endl;
    cout<<"11.name-pagglait\n"<<endl;
    cout<<"-.Language-Hindi\n"<<endl;
    cout<<"-.hour-3h 10m\n"<<endl;
    cout<<"-.type-National\n"<<endl;
    cout<<"-.description-U-certificate\n"<<endl<<endl;
    cout<<"12.name-Ulidavaru Kandante\n"<<endl;
    cout<<"-.Language-Kannada\n"<<endl;
    cout<<"-.hour-3h 13m\n"<<endl;
    cout<<"-.type-International\n"<<endl;
    cout<<"-.description-UA-certificate\n"<<endl<<endl;
    cout<<"13.name-Rangitaranga\n"<<endl;
    cout<<"-.Language-Kannada\n"<<endl;
    cout<<"-.hour-3h 05m\n"<<endl;
    cout<<"-.type-Interational\n"<<endl;
    cout<<"-.description-A-certificate\n"<<endl<<endl;
    cout<<"14.name-Master\n"<<endl;
    cout<<"-.Language-Tamil\n"<<endl;
    cout<<"-.hour-2h 10m\n"<<endl;
    cout<<"-.type-Regional\n"<<endl;
    cout<<"-.description-U-certificate\n"<<endl<<endl;
    cout<<"15.name-Ustad hotel\n"<<endl;
    cout<<"-.Language-Malayalam\n"<<endl;
    cout<<"-.hour-2h 30m\n"<<endl;
    cout<<"-.type-National\n"<<endl;
    cout<<"-.description-U-certificate\n"<<endl<<endl;

}
void select_movie()
{


    {
        while(1)
        {

            int i;
            cout<<"Select movie name\n"<<endl;
            cout<<"1.Ala vaikunthapurramuloo\n2.Village Rockstars\n3.Dia\n4.Outside the wire\n5.His house\n6.The Witch in the window\n7.The Davinci Code\n8.Charlie\n9.Arjun reddy\n10.psycho\n11.pagglait\n12.Ulidavaru Kandante\n13.Rangitaranga\n14.Master\n15.Ustad hotel\n"<<endl;
            cout<<"Enter your movie number"<<endl;
            cin>>i;
            switch(i)
            {

                case 1:cout<<"-.name-Ala_vaikunthapurramuloo\n"<<endl;
                       cout<<"-.Language-Telgu\n"<<endl;
                       cout<<"-.hour-2h 45m\n"<<endl;
                       cout<<"-.type-National\n"<<endl;
                       cout<<"-.description-U certificate\n"<<endl;
                       //cout<<"Enter the description which is displayed\n"<<endl;
                       //cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected Telgu movie\n"<<endl;
                       break;

                case 2:cout<<"-.name-Village_Rockstars\n"<<endl;
                       cout<<"-.Language-English\n"<<endl;
                       cout<<"-.hour-1h 27m\n"<<endl;
                       cout<<"-.type-Regional\n"<<endl;
                       cout<<"-.description-U certificate\n"<<endl;
                       //cout<<"Enter the description which is displayed\n"<<endl;
                       //cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected English movie\n"<<endl;

                       break;

                case 3:cout<<"-.name-Dia\n"<<endl;
                       cout<<"-.Language-Kannada\n"<<endl;
                       cout<<"-.hour-3h 10m\n"<<endl;
                       cout<<"-.type-Regional\n"<<endl;
                       cout<<"-.description-U certificate\n"<<endl;
                       //cout<<"Enter the description which is displayed\n"<<endl;
                       //cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected Kannada movie\n"<<endl;


                       break;


                case 4:cout<<"-.name-Outside_the_wire\n"<<endl;
                       cout<<"-.Language-English\n"<<endl;
                       cout<<"-.hour-1h 55m\n"<<endl;
                       cout<<"-.type-International\n"<<endl;
                       cout<<"-.description-U/A certificate\n"<<endl;
                      // cout<<"Enter the description which is displayed\n"<<endl;
                       //cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected English movie\n"<<endl;
                       break;



                case 5:cout<<"-.name-His_house\n"<<endl;
                       cout<<"-.Language-English\n"<<endl;
                       cout<<"-.hour-2h 23m\n"<<endl;
                       cout<<"-.type-International\n"<<endl;
                       cout<<"-.description-U\A certificate\n"<<endl;
                      // cout<<"Enter the description which is displayed\n"<<endl;
                      // cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected Engish movie\n"<<endl;

                       break;

                case 6:cout<<"-.name-The_Witch_in_the_window\n"<<endl;
                       cout<<"-.Language-English\n"<<endl;
                       cout<<"-.hour-2h 55m\n"<<endl;
                       cout<<"-.type-International\n"<<endl;
                       cout<<"-.description-A certificate\n"<<endl;
                      // cout<<"Enter the description which is displayed\n"<<endl;
                       //cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected Engish movie\n"<<endl;
                       break;

                case 7:cout<<"-.name-The_Davinci_Code\n"<<endl;
                       cout<<"-.Language-English\n"<<endl;
                       cout<<"-.hour-1h 23m\n"<<endl;
                       cout<<"-.type-National\n"<<endl;
                       cout<<"-.description-S-certificate\n"<<endl;
                       //cout<<"Enter the description which is displayed\n"<<endl;
                       //cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected Engish movie\n"<<endl;
                       break;

                case 8:cout<<"8.name-Charlie\n"<<endl;
                       cout<<"-.Language-Malayalam\n"<<endl;
                       cout<<"-.hour-2h 13m\n"<<endl;
                       cout<<"-.type-National\n"<<endl;
                       cout<<"-.description-U-certificate\n"<<endl;
                       //cout<<"Enter the description which is displayed\n"<<endl;
                       //cin>>description;
                       cout<<"Enter the name of movie which you selected\n"<<endl;
                       cin>>name;
                       cout<<"successfully selected Malayalam movie\n"<<endl;
                       break;

               case 9:cout<<"9.name-Arjun_reddy\n"<<endl;
                      cout<<"-.Language-Telgu\n"<<endl;
                      cout<<"-.hour-2h 13m\n"<<endl;
                      cout<<"-.type-National\n"<<endl;
                      cout<<"-.description-s-certificate\n"<<endl;
                      //cout<<"Enter the description which is displayed\n"<<endl;
                     // cin>>description;
                      cout<<"Enter the name of movie which you selected\n"<<endl;
                      cin>>name;
                      cout<<"successfully selected Telgu movie\n"<<endl;
                       break;

              case 10:cout<<"10.name-psycho\n"<<endl;
                      cout<<"-.Language-tamil\n"<<endl;
                      cout<<"-.hour-1h 13m\n"<<endl;
                      cout<<"-.type-Regional\n"<<endl;
                      cout<<"-.description-U\A-certificate\n"<<endl;
                      //cout<<"Enter the description which is displayed\n"<<endl;
                      //cin>>description;
                      cout<<"Enter the name of movie which you selected\n"<<endl;
                      cin>>name;
                      cout<<"successfully selected Tamil movie\n"<<endl;
                       break;

             case 11:cout<<"11.name-pagglait\n"<<endl;
                     cout<<"-.Language-Hindi\n"<<endl;
                     cout<<"-.hour-3h 10m\n"<<endl;
                     cout<<"-.type-National\n"<<endl;
                     cout<<"-.description-U-certificate\n"<<endl;
                     //cout<<"Enter the description which is displayed\n"<<endl;
                     //cin>>description;
                     cout<<"Enter the name of movie which you selected\n"<<endl;
                     cin>>name;
                     cout<<"successfully selected Hindi movie\n"<<endl;
                       break;

            case 12:cout<<"12.name-Ulidavaru_Kandante\n"<<endl;
                    cout<<"-.Language-Kannada\n"<<endl;
                    cout<<"-.hour-3h 13m\n"<<endl;
                    cout<<"-.type-International\n"<<endl;
                    cout<<"-.description-U\A-certificate\n"<<endl;
                    //cout<<"Enter the description which is displayed\n"<<endl;
                    //cin>>description;
                    cout<<"Enter the name of movie which you selected\n"<<endl;
                    cin>>name;
                    cout<<"successfully selected Kannada movie\n"<<endl;
                       break;

            case 13:cout<<"13.name-Rangitaranga\n"<<endl;
                    cout<<"-.Language-Kannada\n"<<endl;
                    cout<<"-.hour-3h 05m\n"<<endl;
                    cout<<"-.type-Interational\n"<<endl;
                    cout<<"-.description-A-certificate\n"<<endl;
                    //cout<<"Enter the description which is displayed\n"<<endl;
                    //cin>>description;
                    cout<<"Enter the name of movie which you selected\n"<<endl;
                    cin>>name;
                    cout<<"successfully selected Kannada movie\n"<<endl;
                       break;

            case 14:cout<<"14.name-Master\n"<<endl;
                    cout<<"-.Language-Tamil\n"<<endl;
                    cout<<"-.hour-2h 10m\n"<<endl;
                    cout<<"-.type-Regional\n"<<endl;
                    cout<<"-.description-U-certificate\n"<<endl;
                    //cout<<"Enter the description which is displayed\n"<<endl;
                    //cin>>description;
                    cout<<"Enter the name of movie which you selected\n"<<endl;
                    cin>>name;
                    cout<<"successfully selected Tamil movie\n"<<endl;
                       break;

            case 15:cout<<"15.name-Ustad_hotel\n"<<endl;
                    cout<<"-.Language-Malayalam\n"<<endl;
                    cout<<"-.hour-2h 30m\n"<<endl;
                    cout<<"-.type-National\n"<<endl;
                    cout<<"-.description-U-certificate\n"<<endl;
                    //cout<<"Enter the description which is displayed\n"<<endl;
                    //cin>>description;
                    cout<<"Enter the name of movie which you selected\n"<<endl;
                    cin>>name;
                    cout<<"successfully selected Malayalam movie\n"<<endl;
                       break;

            }


            break;
        }
    }
}
            void selected()
            {
             cout<<"Enter selected movie\n"<<name<<endl;
            }

void searchmovie()
{
    char n;
    string name;
    char language;
    {
        while(1)
        {
            int j;
            cout<<"Select language you want to search for\n"<<endl;
            cout<<"1.English\n2.Hindi\n3.Malayalam\n4.Telgu\n5.Tamil\n6.Kannada\n"<<endl;
            cin>>j;

            switch(j)
            {
                case 1:cout<<"English movies\n"<<endl;
                       cout<<"-.name-Village Rockstars\n"<<endl;
                       cout<<"-.name-Outside the wire\n"<<endl;
                       cout<<"-.name-His house\n"<<endl;
                       cout<<"-.name-The Witch in the window\n"<<endl;
                       cout<<"-.name-The Davinci Code\n"<<endl;
                        break;

               case 2:cout<<"Hindi movies\n"<<endl;
                      cout<<"-.name-pagglait\n"<<endl;
                      break;

               case 3:cout<<"Malayalam movies\n"<<endl;
                      cout<<"-.name-Charlie\n"<<endl;
                      cout<<"-.name-Ustad hotel\n"<<endl;
                      break;

               case 4:cout<<"Telgu movies\n"<<endl;
                      cout<<"-.name-Arjun reddy\n"<<endl;
                      cout<<"-.name-Ala vaikunthapurramuloo\n"<<endl;
                      break;

               case 5:cout<<"Tamil movies\n"<<endl;
                      cout<<"-.name-Master\n"<<endl;
                      cout<<"-.name-psycho\n"<<endl;
                      break;

               case 6:cout<<"-.name-Dia\n"<<endl;
                      cout<<"-.name-Ulidavaru Kandante\n"<<endl;
                      cout<<"-.name-Rangitaranga\n"<<endl;

                      break;
            }
            break;
        }
    }

}

};

class movietheatre
{
    public:
    string Tname;
    string Taddress;

    void Tdetails()
    {

        while(1)
        {
            int j;
            cout<<"Theatre names\n"<<endl;
            cout<<"1.Sangam Theatre\n2.Cinepolis\n3.PVR Laxmi Mall\n4.PVR Cinemas\n"<<endl;
            cout<<"Select the Theatre\n"<<endl;
            cin>>j;
            switch(j)
            {
                case 1:cout<<"1.Sangam_Theatre\n"<<endl;\
                       cout<<"Address-Near line Bazaar hanuman temple,Dharwad\n,code-580001\n"<<endl;
                       cout<<"Enter the theater name which is displayed on your screen\n"<<endl;
                       cin>>Tname;
                      break;

                case 2:cout<<"2.Cinepolis\n"<<endl;
                       cout<<"Address-Gokul Road chitanya nagar,Hubli\n,code-580030\n"<<endl;
                       cout<<"Enter the theater name which is displayed on your screen\n"<<endl;
                       cin>>Tname;
                       break;

                case 3:cout<<"3.PVR_Laxmi_Mall\n"<<endl;
                       cout<<"Address-3rd floor Lakshmi mall city survey,Hubli\n,code-580020\n"<<endl;
                       cout<<"Enter the theater name which is displayed on your screen\n"<<endl;
                       cin>>Tname;
                       break;

                case 4:cout<<"4.PVR_Cinemas\n"<<endl;
                       cout<<"Address-Orion mall,3rd floor Road brigade,Malleshwaram,Banglore\n,code-560001\n"<<endl;
                       cout<<"Enter the theater name which is displayed on your screen\n"<<endl;
                       cin>>Tname;
                       break;
            }
            break;
        }

    }
    void theater_name()
    {
        cout<<"Selected theater name is\n"<<Tname<<endl;
    }
};

class Booking_seat
{
public:
    int no_of_seats;
    int seat_number[20];
    float cost_of_seat;
    static int members;//STATIC MEMBER
    float cost;
    void seat_type()
    {
        choose:
        int n;
        int row,col;
        char rows='1';
        char c;
        char book1;
        while(1)
        {
            cout<<"Enter your choice which type of seat you want"<<endl;
            cout<<"1.Premium-150\n2.Normal-80\n3.Balcony-100"<<endl;
            cin>>n;
            switch(n)
            {
                case 1:{
                        cout<<"You have booked Premium seating"<<endl;
                        cout<<"The cost of this seating is Rs.150"<<endl;
                        //cout<<"Enter the cost of seat which is there on your screen"<<endl;
                        cost_of_seat=150;
                        cout<<cost_of_seat<<endl;
                        cout<<"Enter how many seats you want to book\n"<<endl;
                        cin>>members;
                        cout<<"Chose the seat number you want"<<endl;
                        string seat[]={"x1","y1","x2","y2","x3","y3","x4","y4","x5","y5","x6","y6","x7","y7","x8","y8","x9","y9","x10","y10","x11","y11","x12","y12","x13","y13","x14","y14","x15","y15","x16","y16","x17","y17","x18","y18"};
                        string arr[3][6]={{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                        {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"}};
                        cout<<"\t\t column     1   2   3   4   5   6   "<<endl;
                        for(int i=0; i<3; ++i)
                        {
                           cout<<"\t\t   Row "<<rows<<":  ";
                           ++rows;
                           for(int j=0; j<6; ++j)
                             cout<<arr[i][j]<<" ";
                           cout<<endl;
                        }
                        rows='1';
                        for(no_of_seats=1; no_of_seats<18; no_of_seats=no_of_seats+1)
                        {
                           rows='1';
                           cout<<endl<<"\t\t               Enter Row & Column: ";
                           cin>>row>>col;
                           for(int i=0;i<20;i++)
                           {
                               seat_number[i]=row;
                               seat_number[i]=col;
                           }
                           if (row<=0 || col<=0)
                           {
                               cout<<endl<<"\t\t              Please Pick A Valid Seat"<<endl;
                               Sleep(500);
                               system("cls");
                               goto choose;
                           }
                           --row;
                           --col;
                           if(arr[row][col]=="[X]")
                           {
                              cout<<endl<<"\t\t             Seat Not Available"<<endl;
                           }
                           arr[row][col]="[X]";
                           system("cls");
                           cout<<endl;
                           cout<<"\t\t            1   2   3   4   5   6"<<endl;
                           for(int i=0; i<3; ++i)
                           {
                              cout<<"\t\t   Row "<<rows<<":  ";
                              ++rows;
                              for(int j=0; j<6; ++j)
                                cout<<arr[i][j]<<" ";
                              cout<<endl;
                           }
                           cout<<endl<<"\t\t                   Seat Booked!"<<endl;
                           cout<<endl<<"\t\t        Do You Want To Book Another Seat?"<<endl;
                           cout<<"\t\t          Press [Y] For Yes & [N] For No."<<endl;
                           cout<<"\t\t                        ";

                           cin>>c;
                           if(c=='y' || c=='Y')
                                continue;
                           else if(c=='n' || c=='N')
                                    break;
                        }
                        break;
                }

                case 2: {
                           cout<<"You have booked Normal seating"<<endl;
                           cout<<"The cost of this seating is Rs.80"<<endl;
                          // cout<<"Enter the cost of seat which is there on your screen"<<endl;
                           cost_of_seat=80;
                           cout<<cost_of_seat<<endl;
                           cout<<"Enter how many seats you want to book\n"<<endl;
                           cin>>members;
                           cout<<"Chose the seat number you want"<<endl;
                           string seat[]={"x1","y1","x2","y2","x3","y3","x4","y4","x5","y5","x6","y6","x7","y7","x8","y8","x9","y9","x10","y10","x11","y11","x12","y12","x13","y13","x14","y14","x15","y15","x16","y16","x17","y17","x18","y18","x19","y19","x20","y20","x21","y21","x22","y22","x23","y23","x24","y24","x25","y25","x26","y26","x27","y27","x28","y28","x29","y29","x30","y30","x31","y31","x32","y32","x33","y33","x34","y34","x35","y35","x36","y36"};
                           string arr[4][9]={{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                           {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"}};
                           cout<<"\t\t column     1   2   3   4   5   6   7   8   9"<<endl;
                           for(int i=0; i<4; ++i)
                           {
                              cout<<"\t\t   Row "<<rows<<":  ";
                              ++rows;
                              for(int j=0; j<9; ++j)
                                  cout<<arr[i][j]<<" ";
                              cout<<endl;
                           }
                           rows='1';
                           for(no_of_seats=1; no_of_seats<38; no_of_seats=no_of_seats+1)
                           {
                              rows='1';
                              cout<<endl<<"\t\t               Enter Row & Column: ";
                              cin>>row>>col;
                              if (row<=0 || col<=0)
                             {
                                cout<<endl<<"\t\t              Please Pick A Valid Seat"<<endl;
                                Sleep(500);
                                system("cls");
                                goto choose;
                             }
                             --row;
                             --col;
                             if(arr[row][col]=="[X]")
                             {
                                cout<<endl<<"\t\t             Seat Not Available"<<endl;
                             }
                             arr[row][col]="[X]";
                             system("cls");
                             cout<<endl;
                             cout<<"\t\t            1   2   3   4   5   6   7   8   9"<<endl;
                             for(int i=0; i<4; ++i)
                             {
                                 cout<<"\t\t   Row "<<rows<<":  ";
                                 ++rows;
                                 for(int j=0; j<9; ++j)
                                    cout<<arr[i][j]<<" ";
                                 cout<<endl;
                             }
                            cout<<endl<<"\t\t                   Seat Booked!"<<endl;
                            cout<<endl<<"\t\t        Do You Want To Book Another Seat?"<<endl;
                            cout<<"\t\t          Press [Y] For Yes & [N] For No."<<endl;
                            cout<<"\t\t                        ";

                            cin>>c;
                            if(c=='y' || c=='Y')
                               continue;
                            else if(c=='n' || c=='N')
                             break;
                        }
                        break;
                   }
                case 3: {
                           cout<<"You have booked Balcony seating"<<endl;
                           cout<<"The cost of this seating is Rs.100"<<endl;
                           //cout<<"Enter the cost of seat which is there on your screen"<<endl;
                           cost_of_seat=100;
                           cout<<cost_of_seat<<endl;
                           cout<<"Enter how many seats you want to book\n"<<endl;
                           cin>>members;
                           cout<<"Chose the seat number you want"<<endl;
                           string seat[]={"x1","y1","x2","y2","x3","y3","x4","y4","x5","y5","x6","y6","x7","y7","x8","y8","x9","y9","x10","y10","x11","y11","x12","y12","x13","y13","x14","y14","x15","y15","x16","y16","x17","y17","x18","y18","x19","y19","x20","y20","x21","y21","x22","y22","x23","y23","x24","y24","x25","y25","x26","y26","x27","y27","x28","y28","x29","y29","x30","y30","x31","y31","x32","y32"};
                           string arr[4][8]={{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                           {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"}};
                           cout<<"\t\t column     1   2   3   4   5   6   7   8"<<endl;
                           for(int i=0; i<4; ++i)
                           {
                              cout<<"\t\t   Row "<<rows<<":  ";
                              ++rows;
                              for(int j=0; j<8; ++j)
                                  cout<<arr[i][j]<<" ";
                              cout<<endl;
                           }
                           rows='1';
                           for(no_of_seats=1; no_of_seats<32; no_of_seats=no_of_seats+1)
                           {
                              rows='1';
                              cout<<endl<<"\t\t               Enter Row & Column: ";
                              cin>>row>>col;
                              if (row<=0 || col<=0)
                             {
                                cout<<endl<<"\t\t              Please Pick A Valid Seat"<<endl;
                                Sleep(500);
                                system("cls");
                                goto choose;
                             }
                             --row;
                             --col;
                             if(arr[row][col]=="[X]")
                             {
                                cout<<endl<<"\t\t             Seat Not Available"<<endl;
                             }
                             arr[row][col]="[X]";
                             system("cls");
                             cout<<endl;
                             cout<<"\t\t            1   2   3   4   5   6   7   8"<<endl;
                             for(int i=0; i<4; ++i)
                             {
                                 cout<<"\t\t   Row "<<rows<<":  ";
                                 ++rows;
                                 for(int j=0; j<8; ++j)
                                    cout<<arr[i][j]<<" ";
                                 cout<<endl;
                             }
                            cout<<endl<<"\t\t                   Seat Booked!"<<endl;
                            cout<<endl<<"\t\t        Do You Want To Book Another Seat?"<<endl;
                            cout<<"\t\t          Press [Y] For Yes & [N] For No."<<endl;
                            cout<<"\t\t                        ";

                            cin>>c;
                            if(c=='y' || c=='Y')
                               continue;
                            else if(c=='n' || c=='N')
                             break;
                        }
                        break;
                   }

                }
                break;

              }

           }

           void seat_cost()
           {
               cost=cost_of_seat*members;
               cout<<"\nCost of your seat is(without tax)\n"<<cost<<endl;
           }
};


class show
{
    public:
    float time;
    string show_name;
    date d;
    void show_details()
    {
        while(1)
        {
            int i;
            cout<<"Enter the show name which you want"<<endl;
            cout<<"1.Morning\n2.Afternoon\n3.Evening"<<endl;
            cin>>i;
            switch(i)
            {
                case 1: cout<<"Show name is Morning\n"<<endl;
                        cout<<"Show time is 9.00 to 12.00\n"<<endl;
                        //cout<<"Enter show name which is there on the screen\n"<<endl;
                        //cin>>show_name;
                        time=9.00;
                        cout<<time<<endl;
                       break;
                case 2: cout<<"Show name is Afternoon\n"<<endl;
                        cout<<"Show time is 1.30 to 4.30\n"<<endl;
                       // cout<<"Enter show name which is there on the screen\n"<<endl;
                        time = 1.30;
                        cout<<time<<endl;
                       break;
                case 3: cout<<"Show name is Evening\n"<<endl;
                        cout<<"Show time is 6.00 to 9.00\n"<<endl;
                        //cout<<"Enter show name which is there on the screen\n"<<endl;
                        time= 6.00;
                        cout<<time<<endl;
                       break;
            }
            cout<<"Show timing which you have selected\n"<<time<<endl;
        break;
        }
    }
    void show_time()
    {
        cout<<"\nShow date which you have selected is"<<endl;
        d.Putdate();
        cout<<"\nShow timing which you have selected\n"<<time<<endl;
    }

};
class App
{
public:
    string username;
    string password;
    App(){}
    App(string username, string password)
    {
        this->username=username;
        this->password=password;
    }
    void getapp()
    {
        cout<<"Enter username\n";
        cin>>username;
        cout<<"Enter password\n";
        cin>>password;
        try
        {
            cout<<"Enter password\n";
            cin>>password;
            if(password!= "user")
            {
                 passwordexception p;
                throw p;
            }
        }
        catch(passwordexception hp)
        {
            cout<<hp.what();
        }
    }
    void application()
    {
        cout<<"username is :"<<username<<endl;
        cout<<"password is :"<<password<<endl;
    }
};
class customer
{
public:
    string  customer_name;
    int age=0;
    long long int phone_no=0;
    string email;
    customer(){}
    void getdetails()
{

        cout<<"Enter the customer name:"<<endl;
        cin>>customer_name;

        cout<<"Enter the customer age:"<<endl;
        cin>>age;

        cout<<"Enter the customer phone number :"<<endl;
        cin>>phone_no;

        cout<<"Enter the customer email:"<<endl;
        cin>>email;

        try
        {
            cout<<"Enter age\n";
            cin>>age;
            if(age<=18)
            {
                ageexception a;
                throw a;
            }
        }
        catch(ageexception hv)
        {
            cout<<hv.what();
        }
}


void customer_details()
{
    cout<<endl<<"\nDisplaying customer details"<<endl;
    cout<<endl<<"Customer Name: "<<customer_name<<endl;
    cout<<"Customer Age: "<<age<<endl;
    cout<<"Customer Phone Number: "<<phone_no<<endl;
    cout<<"Customer Email-id: "<<email<<endl;

}

};

class tax
{
    public:
     string type;
     float taxamt;
     int enter;
     tax(){}
     void involvetax()//this function shows polymorphism
     {

     }

};
class International : public tax
{
    public:
    International(){}
    void involvetax()
    {
        cout<<"30% tax on International movie\n";
        taxamt=0.30;
        cout<<"tax added is:"<<taxamt<<endl;
    }
};

class National : public tax
{
    public:
    National(){}
    void involvetax()
    {
        cout<<"20% tax on National movie\n";
        taxamt=0.20;
        cout<<"tax added is:"<<taxamt<<endl;
    }
};

class Regional : public tax
{
    public:
    Regional(){}
    void involvetax()
    {
        cout<<"15% tax on Regional movie\n";
        taxamt=0.03;
        cout<<"tax added is:"<<taxamt<<endl;
    }
};

class movie_ticket
{
    float price;

public:
    customer c;
    show s;
    Booking_seat b;
    movie_ticket(){}
    void ticket_details()
    {
        c.customer_details();
        s.show_time();
        b.seat_cost();
    }
   void total_amount()
    {
        tax t;
        t.involvetax();
        International i;
        National n;
        Regional r;
        int enter;
        while(1)
         {

             cout<<"Enter the type of movie which you have selected\n";
             cout<<"1.International\n2.National\n3.Regional"<<endl;
             cin>>enter;
             switch(enter)
             {
                 case 1:i.involvetax();
                 cout<<"\nTotal pricer of the ticket is:"<<b.cost*i.taxamt+b.cost<<endl;
                        break;

                 case 2:n.involvetax();
                 cout<<"\nTotal pricer of the ticket is:"<<b.cost*n.taxamt+b.cost<<endl;
                        break;

                case 3:r.involvetax();
                cout<<"\nTotal pricer of the ticket is:"<<b.cost*r.taxamt+b.cost<<endl;
                       break;
             }
             break;
         }

    }
};

class payment
{
     public:
       float amt;
     payment(float amt);

     payment(){}
     friend void  Total_amount();

    virtual void make_payment()//this is the virtual function
    {

    }

};

class card : public payment
{
    int card_no ;
    date exp_date;
    int cvv ;
    int exp;
    public:
        card(){}
    card(int card_no,date exp_date,int cvv,float amt,int exp): payment(amt)
    {
        this->card_no=card_no;
        this->exp_date=exp_date;
        this->cvv=cvv;
        this->exp=exp;
    }
     void Total_amount()
    {
      cout<<"Total amount of the ticket"<<amt<<endl;
    }
    void make_payment()
  {
       cout<<"Enter card details\n\n";
       cout<<"\nEnter card number\n";
       cin>>card_no;
       cout<<"Enter exp date(dd/mm/yy)\n\n";
       exp_date.Getdate();
       cout<<"Enter cvv";
       cin>>cvv;
       //cout<<"Enter year of expiery\n";
       //cin>>exp;
     try
       {
           cout<<"Enter exp year of card";
           cin>>exp;
           if(exp=2021)
           {
               cardexception c;
               throw c;
           }
       }
       catch(cardexception hc)
       {
           cout<<hc.what();
       }
       cout<<"\t\t\tProcessing your Payment.......\n\n";
       cout<<"\t\t\tPayment done \n\n";

 }

};

class offline :public payment
{
    char rep,y,Y;
 public:
     offline(){}
    offline(float amt): payment (amt)
    {

    }
    void make_payment()
    {
    cout<<"did you pay the cash?y/n";
    cin>>rep;
    if(rep==y || rep==Y)
    {
       cout<<"Thank you"<<endl;
    }
    else
        {
            cout<<"Pay the cash";
        }
    }

};

class online : public payment
{
     string mode;
      int upi_id;
      int ent;
 public:
    online(){}
    online(string mode,float amt):payment(amt)
    {
        this->mode=mode;
    }
    void total_amt()
    {
        cout<<"Total amount of the ticket"<<amt<<endl;
    }
    void make_payment()
    {
        cout<<"\nIn which mode do you want to pay\n"<<endl;
       cout<<"1.Google Pay\n2.Phonepe\n"<<endl;
       cout<<"Enter your choice\n"<<endl;
       cin>>ent;
    switch(ent)
    {
        case 1: cout<<"Enter Upi_id\n\n";
                cin>>upi_id;
                cout<<"\t\t\t\tProcessing your Payment.......\n\n";
                cout<<"Payment done \n\n";
                break;
        case 2: cout<<"Enter Upi_id\n\n";
                cin>>upi_id;
                cout<<"\t\t\t\tProcessing your Payment.......\n\n";
                cout<<"Payment done \n\n";
                break;

    }

    }


};

class generate_recipt
{
    int recipt_no;
public:
    customer c;
    Booking_seat b;
    show s;
    movietheatre mt;
    void get_recipt()
    {
        c.customer_details();
        s.show_time();
        b.seat_cost();
        mt.theater_name();
    }
};

class Review
{
    static Review *instance;
    int review;

    Review(){
    review=0;}
public:
    static Review *getinstance()
    {

    }
     int rate=0;
     char name;
    int getreview()
    {
        cout<<"We Hope you enjoyed the movie";
        cout<<"\nPlease enter the movie name and Rate the movie from (1-10)\n";
        cin>>name>>rate;
        cout<<"\nRate the movie from (1-10)"<<endl;
        cin>>rate;
     }

     void setreview()
        {
           cout<<"Review:";
           cout<<" "<<name;
           cout<<" "<<rate;
        }
    };

Review *Review::instance=0;

int Booking_seat :: members =0;

int main()
{
    cout<<"************************WELCOME TO MOVIE TICKET BOOKING***********************    \n\n"<<endl;
    App A;
    A.getapp();
    cout<<"------------------ ENTER THE CUSTOMER DETAILS ------------------\n\n"<<endl;
    customer c;
    c.getdetails();
    cout<<"----------------- MOVIE DETAILS ARE -------------------\n\n"<<endl;
    movie m;
    m. moviedetails();
    cout<<"---------------- SEARCH THE ACCORDING TO LANGUAGE ----------------\n\n"<<endl;
    m.searchmovie();
    cout<<"---------------- SELECT THE MOVIE WHICH YOU WANT TO SEE -------------\n\n"<<endl;
    m.select_movie();
    m.selected();
    cout<<"--------------- SELECT THE MOVIE THEATER IN WHICH YOU WANT TO SEE ----------------\n\n"<<endl;
    movietheatre mt;
    mt.Tdetails();
    mt.theater_name();
    cout<<"----------------- SELECT THE SHOW TIMEINGS YOU WANT --------------\n\n"<<endl;
    date d;
    d.Getdate();
    show s;
    s.d = d;
    s.show_details();
    cout<<"----------------- SELECT THE TYPE OF SEAT YOU WANT ----------------\n\n"<<endl;
    Booking_seat B;
    B.seat_type();
    cout<<"---------------- HEAR IS YOUR TICKET DETAILS --------------------\n\n"<<endl;
    movie_ticket MT;
    MT.c = c;
    MT.s = s;
    MT.b = B;
    MT.ticket_details();
    MT.total_amount();
    cout<<"--------------- HEAR IS THE COMPLETE DETAILS OF CUSTOMER --------------\n\n"<<endl;
    generate_recipt gr;
    gr.c = c;
    gr.s = s;
    gr.b = B;
    gr.mt = mt;
    gr.get_recipt();
    cout<<"----------------  MODE OF PAYMENT ------------------ \n\n"<<endl;
    offline o;
    online Ol;
    card cd;
    int a;
    cout<<"Select the mode of payment you want to do"<<endl;
    cout<<"1.Card\n2.Offline\n3.Online\n"<<endl;
    cin>>a;
    if(a==1)
    {
        cd.make_payment();
    }
    else if(a==2)
    {
        o.make_payment();
    }
    else
    {
        Ol.make_payment();
    }

   Review *g=g->getinstance();
    cout<<g->getreview()<<endl;

}

