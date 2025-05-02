#include<iostream>
using namespace std;
#define size 20

string Name[size], ID[size], Dept[size], Batch[size], Contact[size], Email[size];

int i,total=0;


 void Insert()
{
    int NumOfStudent=0;

    cout<<"Enter the number of student: ";
    cin>>NumOfStudent;

    if(total==0)
    {
        total=NumOfStudent+total;
        for(i=0;i<NumOfStudent;i++)
        {
            cout<<"\nEnter the data of student number: "<<i+1<<"\n\n";
            cout<<"Enter Name: ";
            cin>>Name[size];

            cout<<"Enter Student ID: ";
            cin>>ID[size];

            cout<<"Enter Department Name: ";
            cin>>Dept[size];

            cout<<"Enter Batch Number: ";
            cin>>Batch[size];

            cout<<"Enter Contact: ";
            cin>>Contact[size];

            cout<<"Enter Email: ";
            cin>>Email[size];


        }

    }

    else

    {
        for(i=total;i<NumOfStudent+total;i++)

        {
            cout<<"\nEnter the data of student number: "<<i+1<<"\n\n";
            cout<<"Enter Name: ";
            cin>>Name[size];

            cout<<"Enter Student ID: ";
            cin>>ID[size];

            cout<<"Enter Department Name: ";
            cin>>Dept[size];

            cout<<"Enter Batch Number: ";
            cin>>Batch[size];

            cout<<"Enter Contact: ";
            cin>>Contact[size];

            cout<<"Enter Email: ";
            cin>>Email[size];
        }
        total=NumOfStudent+total;
    }
}

void Display()
{
    if(total==0)
    {
        cout<<"No Data is Inserted!\n\n";

    }
    else
    {
        for(i=0;i<total;i++)
        {
            cout<<"\nData of student \n\n"<<i+1;
            cout<<"\nName: "<<Name[size];
            cout<<"\nStudent ID: "<<ID[size];
            cout<<"\nDepartment of  "<<Dept[size];
            cout<<"\nBatch: "<<Batch[size];
            cout<<"\nContact: "<<Contact[size];
            cout<<"\nEmail: "<<Email[size];

        }
    }
}

 void Search()
    {
        if(total==0)
        {
            cout<<"No data is Inserted!\n\n";
        }
        else{
            string Identity;

            cout<<"Enter Student ID: \n";
            cin>>Identity;
            for(i=0;i<total;i++)
            {
            if(Identity==ID[i])
                {
                    cout<<"Name: "<<Name[i];
                    cout<<"Student ID: \n"<<ID[i];
                    cout<<"Department of \n"<<Dept[i];
                    cout<<"Batch: \n"<<Batch[i];
                    cout<<"Contact: \n"<<Contact[i];
                    cout<<"Email: \n"<<Email[i];
                }
            }
        }
    }
 void Update()
    {
        if(total==0)
        {
            cout<<"No Data is inserted!\n\n";
        }

        else{
            string Identity;
            cout<<"Enter the student's ID: \n";
            cin>>Identity;

            for(i=0;i<total;i++)
            {
               if(Identity==ID[i])
               {

                cout<<"\nPrevious Data: \n\n";

                cout<<"Data of student: "<<i+1;
                    cout<<"Name: "<<Name[i];
                        cout<<"Student ID: \n"<<ID[i];
                            cout<<"Department of \n"<<Dept[i];
                                cout<<"Batch: \n"<<Batch[i];
                                    cout<<"Contact: \n"<<Contact[i];
                                        cout<<"Email: \n"<<Email[i];

                                        cout<<"\nEnter new Data:\n\n";
                                    cout<<"Enter Name: ";
                                cin>>Name[i];

                            cout<<"Enter Student ID: ";
                        cin>>ID[i];

                    cout<<"Enter Department Name: ";
                cin>>Dept[i];

            cout<<"Enter Batch Number: ";
            cin>>Batch[i];

                cout<<"Enter Contact: ";
                    cin>>Contact[i];

                        cout<<"Enter Email: ";
                            cin>>Email[i];
                }
            }
        }
    }
    void Delete()
    {
        if(total==0)
        {
            cout<<"No data is inserted!\n";
        }
        else{
            int a;

            cout<<"Data Deletion:\n\n";
            cout<<"1.Delete specific data.";
            cout<<"\n2.Delete all data.";
            cout<<"\n\nEnter your choice: ";
            cin>>a;

            if(a==2)
            {
                total=0;
                cout<<"All data is deleted..!!\n";
            }


            else if(a==1)
            {
                string NumOfStudent;
                cout<<"Enter the student_you want to delete: \n";
                cin>>NumOfStudent;

                for(i=0;i<total;i++)
                {
                    if(NumOfStudent==ID[i])
                    {
                        for(i=0;i<total;i++)
                        {
                            for(int j=i;j<total;j++)
                            {

                                Name[j]=Name[j+1];
                                ID[j]=ID[j+1];
                                Dept[j]=Dept[j+1];
                                Batch[j]=Batch[j+1];
                                Contact[j]=Contact[j+1];
                                Email[j]=Email[j+1];

                            }
                            total--;
                            cout<<"Your Required record is deleted.\n";
                        }
                    }
                }
            }
                else{
                    cout<<"Invalid Input!\n";
                }

            }

        }




 main()
{
        int choice;
        cout<<"Green University of Bangladesh.\n\n";


        do
        {


        cout<<"##Student Management System: \n";

        cout<<"\n1.Insert Student's Data.";
        cout<<"\n2.Display All Student's Data.";
        cout<<"\n3.Find Any Student's Data.";
        cout<<"\n4.Update Data.";
        cout<<"\n5.Delete Data.";
        cout<<"\n6.Exit.";
        cout<<"\n\nEnter your Choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:

             Insert();
            break;

        case 2:

          Display();
            break;

        case 3:

            Search();
            break;

            case 4:

            Update();
            break;

            case 5:

            Delete();
            break;

            case 6:
            cout<<"\nEXIT..........\n";

        break;





        default:
            cout<<"Invalid Choice!! Try Again.\n";




        }


}
while(choice!=6);
}
