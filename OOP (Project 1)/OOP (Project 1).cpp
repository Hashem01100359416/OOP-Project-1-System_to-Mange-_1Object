#include <iostream>
using namespace std;
 //Rectangle Class
class Rectangle
{
private:
    float Width;
    float Length;
public:
    void set_Width(float wid = 0.0)
    {
        cout << "Please Enter Rectangle Width: ";
        cin >> wid;
        if (wid > 0)
            Width = wid;
        else
        {
            cout << "Error....Please try Enter Positve number\n==================\n";
            set_Width();
        }
    }
    void set_Length(float Len = 0.0)
    {
        cout << "Please Enter Rectangle Length: ";
        cin >> Len;
        if (Len > 0)
            Length = Len;
        else
        {
            cout << "Error....Please try Enter Positve number\n==================\n";
            set_Length();
        }
    }
    float get_Width()
    {
        return Width;
    }
    float get_Length()
    {
        return Length;
    }
    float get_area()
    {
        return (Width * Length);
    }
};

//System Class 
class System
{
    //Data
private:
     Rectangle rect;   //Rectangle Object
    // Methods
public:
    // Constractor
    System()                           
    {
        welcome_message_in_System();
        bool ON = true;
        int C = 0;
        while (ON)
        {
            Show_Minu();
            switch (Choice())
            {
            case 1:
                Set_Data();
                C++;
                break;
            case 2:
                Print_Data(C);
                break;
            case 3:
                ON = false;
                break;
            }
        }
    }    
    //Methods or Opetations
    void welcome_message_in_System()
    {
        cout << "========================================\n\aWelcome With You In System_Hashem\n========================================\n";
    }
    void Show_Minu()
    {
        cout << "\n==============================\nMinu:\n";
        cout << "1) To Set Data Enter Number -----> 1\n";
        cout << "2) To Print Data Enter Number -----> 2\n";
        cout << "3) To End System Operation Enter Number -----> 3\n\n";
    }
    int Choice()
    {
        int Operation_Number = 0;
        cout << "Please Enter Your Choice: ";
        cin >> Operation_Number;
        if (Operation_Number > 0 && Operation_Number < 4)
            return Operation_Number;
        else
        {
            cout << "ERROR .....Please Try Enter Correct Number\n=====================\n";
            Choice();
        }
    }
    void Set_Data()
    {
        cout << "\n==============================\n==========Set_Data============\n";
        rect.set_Width();
        rect.set_Length();
    }
    void Print_Data(int c)
    {
        if (c > 0)
        {
            cout << "\n==============================\n==========Print_All_Data======\n";
            cout << "Rectangle Width: " << rect.get_Width() << "\n";
            cout << "Rectangle Length : " << rect.get_Length() << "\n";
            cout << "Rectangle Area: " << rect.get_area() << "\n";
            cout << "\n==============================\n";
        }
        else
        {
            cout << "\n==============================\n\aERROR.....Not Found Data to Print it\a\n==============================";
        }
    }
    void Ending_message_in_System()
    {
        cout << "\n========================================\n\aGoodbye\n========================================\n";
    }

    // ~Destractor
    ~System()
    {
        Ending_message_in_System();
    }
};  

int main()
{
    //System Object
    System system_Hashem;
}