#include<bits/stdc++.h>
#include <fstream>
#include <chrono> //for delay
#include <stdlib.h>
#include<ctime>


// ***** Smart Traffic Management Solution *****

//keep the record of vehicles                      == recOfVeh()
//keep the record of challan done                  == recOfChall()
//Search the record of vehicles                    == vehSearch()
//Display information of traffic in control booths == trafContBooth()
//Helpline Information and nearby hospitals        == helpInfo()
//control the traffic                              == trafCont()


using namespace std;


class SmartTrafficManagementSystem{


public:
    
    int welcome()
    {
        system("clear");

        time_t tt;
        struct tm * ti;
        time (&tt);
        ti = localtime(&tt);

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                                     " <<asctime(ti);
        delay1();

        system("clear");

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                          WELCOME TO                                                             '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                SMART TRAFFIC MANAGEMENT SYSTEM                                                  '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                   Press Your Option :-                                                                                          '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                    1.Record of Vehicles                                                                         '**"<<endl;
        cout<<"**'                                    2.Record of Challan                                                                          '**"<<endl;
        cout<<"**'                                    3.Search the Record of Vehicles                                                              '**"<<endl;
        cout<<"**'                                    4.Traffic Control Booths                                                                     '**"<<endl;
        cout<<"**'                                    5.Control the Traffic                                                                        '**"<<endl;
        cout<<"**'                                    6.Help !                                                                                     '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                   Enter your choice __                                                                                          '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;


        int choice{0};
        cin>>choice;

        if(choice > 0 && choice < 7)
        {
            switch (choice)
            {
                case 1:
                    system("clear");
                    recOfVeh();
                    break;

                case 2:
                    system("clear");
                    recOfChall();
                    break;

                case 3:
                    system("clear");
                    vehSearch();
                    break;

                case 4:
                    system("clear");
                    trafContBooth();
                    break;

                case 5:
                    system("clear");
                    trafContBooth();
                    break;

                case 6:
                    system("clear");
                    helpInfo();
                    break;
            }
        } else{
            cout<<"Enter Valid option !!"<<endl;
            delay();

            system("clear");
            welcome();
        }
        return 0;
    }

    int delay()
    {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds

        sleep_for(nanoseconds(1000000));
        sleep_until(system_clock::now() + seconds(1));
    }
    int delay1()
    {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds

        sleep_for(nanoseconds(1000000000));
        sleep_until(system_clock::now() + seconds(1));
    }
    int delay2()
    {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds

        sleep_for(nanoseconds(100000000));
        sleep_until(system_clock::now() + seconds(1));
    }
    int recOfVeh()
    {
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                      * Record of Vehicles *                                                         *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Add a New Vehicle                                                                           *"<<endl;
        cout<<"*                                      2. Search a Vehicle Using registration number                                                  *"<<endl;
        cout<<"*                                      3. Search a Vehicle Using Name of the owner                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int ROVChoice{0};
        cin>>ROVChoice;
        switch (ROVChoice)
        {
            case 0:
                system("clear");
                welcome();
                break;

            case 1:
                recOfVeh_1();
                break;

            case 2:
                recOfVeh_2();
                break;

            case 3:
                recOfVeh_3();
                break;

        }
        return 0;
    }
    int recOfVeh_1()
    {
        system("clear");
        fstream fio;
        string line;
        cout << "                    Welcome to Registration of Vehicles\n"<<endl;
        cout<<"Enter Registration number of the Vehicle in the first line "<<endl;
        cout<<"Enter Name of the owner in the second line "<<endl;
        cout<<endl<<"Enter './' to Exit ";
        fio.open("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/RecordOfVehicles.txt", ios::app | ios::out | ios::in);

        // Execute a loop If file successfully Opened
        while (fio) {

            // Read a Line from standard input
            getline(cin, line);

            // Press -1 to exit
            if (line == "./")
                break;

            // Write line in file
            fio << line << endl;
        }
        cout<<"Data Entered successfully !!"<<endl;
        delay();

        system("clear");
        recOfVeh();

    }

    int recOfVeh_2()
    {
        system("clear");
        string path = "/home/lamecodes/CLionProjects/untitled/cmake-build-debug/RecordOfVehicles.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "                    Welcome to Registration of Vehicles\n" ;

            cout <<endl<< "Write the Registration number of the vehicle you want to searching for\n" ;
            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate ) ++countwords ;
            }
            if (countwords > 0){
                cout << "The registration number " << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                (choice ==1) ? welcome(): recOfVeh_2();
      
     

            }
            else{
                cout<<"Registration number does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                 (choice ==1) ? welcome(): recOfVeh_2();
            }
        }

        else
        {
            cerr << "Error! 401!\n" ;
            delay();
            welcome();

        }


    }

    int recOfVeh_3()
    {
        system("clear");

        string path = "/home/lamecodes/CLionProjects/untitled/cmake-build-debug/RecordOfVehicles.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "                    Welcome to Registration of Vehicles\n" ;

            cout <<endl<< "Write the Name of the Owner of the vehicle you want to searching for\n" ;
            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate ) ++countwords ;
            }
            if (countwords > 0){
                cout << "The Name of the Owner " << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfVeh_2();

            }
            else{
                cout<<"Name of the Owner does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfVeh_2();
            }
        }

        else
        {
            cerr << "Error! 401!\n" ;
            delay();
            welcome();

        }

    }

    int recOfChall()
    {
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                      * Record of Challan *                                                          *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Add a New Challan                                                                           *"<<endl;
        cout<<"*                                      2. Search a Challan Using registration number                                                  *"<<endl;
        cout<<"*                                      3. Search a Challan Using Name of the owner                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int ROCChoice{0};
        cin>>ROCChoice;
        switch (ROCChoice)
        {
            case 0:
                system("clear");
                welcome();
                break;

            case 1:
                recOfChall_1();

                break;

            case 2:
                recOfChall_2();
                break;

            case 3:
                recOfChall_3();
                break;
            default:
                cout << "please enter a valid case" << endl;

        }
        return  0;
    }

    int recOfChall_1()
    {

        system("clear");
        fstream fio;
        string line;

        cout << "               Welcome to Challan Management System\n"<<endl;

        cout<<"Enter Registration number of the Vehicle in the first line "<<endl;
        cout<<"Enter Name of the owner in the second line "<<endl;
        cout<<endl<<"Enter './' to Exit ";
        fio.open("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/RecordOfChallan.txt", ios::app | ios::out | ios::in);

        // Execute a loop If file successfully Opened
        while (fio) {

            // Read a Line from standard input
            getline(cin, line);

            // Press -1 to exit
            if (line == "./")
                break;

            // Write line in file
            fio << line << endl;
        }
        cout<<"Data Entered successfully !!"<<endl;
        delay();

        system("clear");
        recOfChall();


    }

    int recOfChall_2()
    {

        system("clear");
        string path = "/home/lamecodes/CLionProjects/untitled/cmake-build-debug/RecordOfChallan.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "               Welcome to Challan Management System\n"<<endl;

            cout <<endl<< "Write the registration number of the vehicle you want to searching for\n" ;
            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate ) ++countwords ;
            }
            if (countwords > 0){
                cout << "The Registration number '" << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number.";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfChall_2();

            }
            else{
                cout<<"Registration number does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number.";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfChall_2();
            }
        }

        else
        {
            cerr << "Error! 402!\n" ;
            delay();
            welcome();

        }
    }

    int recOfChall_3()
    {
        system("clear");
        string path = "/home/lamecodes/CLionProjects/untitled/cmake-build-debug/RecordOfChallan.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "               Welcome to Challan Management System\n"<<endl;

            cout <<endl<< "Write the Name of the Owner of the vehicle you want to searching for\n" ;
            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate ) ++countwords ;
            }
            if (countwords > 0){
                cout << "The Name of the Owner " << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfChall_3();

            }
            else{
                cout<<"Name of the Owner does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfChall_3();
            }
        }

        else
        {
            cerr << "Error! 402!\n" ;
            delay();
            welcome();

        }
    }

    int vehSearch()
    {

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                 * Search the Record of Vehicles *                                                   *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                               Enter The Vehicles Registration Number                                                *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;


        string path = "/home/lamecodes/CLionProjects/untitled/cmake-build-debug/RecordOfVehicles.txt";
        ifstream file( path.c_str() );
        system("clear");

        if( file.is_open() )
        {

            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate ) ++countwords ;
            }
            if (countwords > 0){
                cout << "The registration number " << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    vehSearch();
            }
            else{
                cout<<"Registration number does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    vehSearch();
            }
        }
        else
        {
            cerr << "Error! 401!\n" ;
            delay();
            welcome();

        }




    }

    int trafContBooth()
    {

        // Traffic Control Booths

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                     * Traffic Control Booths *                                                      *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Jalandhar Traffic Control Booth                                                             *"<<endl;
        cout<<"*                                      2. Amritsar Traffic Control Booth                                                              *"<<endl;
        cout<<"*                                      3. Chandigarh Traffic Control Booth                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int TCBChoice{0};
        cin>>TCBChoice;
        switch (TCBChoice)
        {
            case 0:
                system("clear");
                welcome();
                break;

            case 1:
                trafContBooth_1();
                break;

            case 2:
                trafContBooth_2();
                break;

            case 3:
                trafContBooth_3();
                break;

        }


        return 0;
    }
    int trafContBooth_1()
    {
        system("clear");

        for (int i = 0; i < 100; ++i) {

            cout<<"                     Jalandhar City Traffic Control Booth                 "<<endl;
            cout<<"Vehicles Going out of the City                   Vehicles coming into the City"<<endl;
            cout<<endl<<"      "<<i+1<<"                                             "<<i+5<<endl;
            delay();

            system("clear");

        }

    }

    int trafContBooth_2()
    {
        system("clear");

        for (int i = 0; i < 100; ++i) {

            cout<<"                      Amritsar City Traffic Control Booth                 "<<endl;
            cout<<"Vehicles Going out of the City                   Vehicles coming into the City"<<endl;
            cout<<endl<<"      "<<i+5<<"                                             "<<i*7<<endl;
            delay();

            system("clear");

        }


    }

    int trafContBooth_3()
    {

        system("clear");

        for (int i = 0; i < 100; ++i) {

            cout<<"                      Chandigarh City Traffic Control Booth                 "<<endl;
            cout<<"Vehicles Going out of the City                   Vehicles coming into the City"<<endl;
            cout<<endl<<"      "<<i*16<<"                                             "<<i*22<<endl;
            delay();

            system("clear");

        }

    }

    int helpInfo()
    {
        //Helpline Information and nearby hospitals

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                             * Helpline Information And Nearby Hospitals *                                           *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Helpline Number                                                                             *"<<endl;
        cout<<"*                                      2. Hospitals in Amritsar                                                                       *"<<endl;
        cout<<"*                                      3. Hospitals in Chandigarh                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int CTTChoice{0};
        cin>>CTTChoice;
        switch (CTTChoice) {
            case 0:
                system("clear");
                welcome();
                break;

            case 1: {
                system("clear");
                string line;
                ifstream myfile("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/HelpNumbers.txt");
                if (myfile.is_open()) {
                    while (getline(myfile, line)) {
                        cout << line << '\n';
                    }
                    myfile.close();
                } else cout << "Error! 403!";

                int choice;
                cout << endl << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1) {
                    system("clear");
                    welcome();
                } else {
                    cout << endl << "Enter Valid option !!";
                    cout << endl << endl << "Enter 1 to go Home Page" << endl;
                    cin >> choice;
                    if (choice == 1) {
                        system("clear");
                        welcome();
                    }
                }
                break;
            }
            case 2: {

                system("clear");
                string line;
                ifstream myfile("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/HAmritsar.txt");
                if (myfile.is_open()) {
                    while (getline(myfile, line)) {
                        cout << line << '\n';
                    }
                    myfile.close();
                } else cout << "Error! 403!";

                int choice;
                cout << endl << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1) {
                    system("clear");
                    welcome();
                } else {
                    cout << endl << "Enter Valid option !!";
                    cout << endl << endl << "Enter 1 to go Home Page" << endl;
                    cin >> choice;
                    if (choice == 1) {
                        system("clear");
                        welcome();
                    }
                }
            }
                break;

            case 3: {

                system("clear");
                string line;
                ifstream myfile("/home/lamecodes/CLionProjects/untitled/cmake-build-debug/HChandigarh.txt");
                if (myfile.is_open()) {
                    while (getline(myfile, line)) {
                        cout << line << '\n';
                    }
                    myfile.close();
                } else cout << "Error! 403!";

                int choice;
                cout << endl << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1) {
                    system("clear");
                    welcome();
                } else {
                    cout << endl << "Enter Valid option !!";
                    cout << endl << endl << "Enter 1 to go Home Page" << endl;
                    cin >> choice;
                    if (choice == 1) {
                        system("clear");
                        welcome();
                    }
                }


                break;

            }
        }

        return 0;
    }




};
int main()
{
    SmartTrafficManagementSystem ob1;
    ob1.welcome();

    //all rights reserved  ©rudrakaniya || CSEBaba
}
