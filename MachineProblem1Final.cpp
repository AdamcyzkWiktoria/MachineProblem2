//Program: Machine Problem#1
//Programmers: Apolinar, Crisostomo, Fortuno

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double transmuted();

int main ()
{
	//declaration of arrays and
	//the variables to be used
	//note before passing, change all array values to 50
	string name[50];
	int preEx[50];
	int finEx[50];
	int quiz1[50];
	int quiz2[50];
	int quiz3[50];
	int quiz4[50];
	int seatW1[50];
	int seatW2[50];
	int seatW3[50];
	int seatW4[50];
	int seatW5[50];
	int seatW6[50];
	int seatW7[50];
	int seatW8[50];
	int seatW9[50];
	int seatW10[50];
	int seatWTotal;   //to add all seatwork array elements
	int boardPoint[50];
	int notebook;
	int students = 2;   //change to 50 later, number of students to be inputted
	int i;
	double quiz1Average;
	double quiz2Average;
	double quiz3Average;
	double quiz4Average;
	double preExAverage;
	double finExAverage;
	double seatTotalAverage[i];
	double finalRaw;
	
	//loop statement for entering a student's name, quiz score, exams score, seatwork score
    for (i = 0; i < students; i++)
    {
        cout << "Please enter student's name: "; cin >> name[i];
        cout << "Enter their score on Quiz1: ";  cin >> quiz1[i];
        cout << "Enter their score on Quiz2: ";  cin >> quiz2[i];
        cout << "Enter their score on Quiz3: ";  cin >> quiz3[i];
        cout << "Enter their score on Quiz4: ";  cin >> quiz4[i];
        cout << "Enter their score on Prelims Exam: "; cin >> preEx[i];
		cout << "Enter their score on Finals Exam: "; cin >> finEx[i];
		cout << "Enter their score on Seatwork1: "; cin >> seatW1[i];
        cout << "Enter their score on Seatwork2: "; cin >> seatW2[i];
        cout << "Enter their score on Seatwork3: "; cin >> seatW3[i];
        cout << "Enter their score on Seatwork4: "; cin >> seatW4[i];
        cout << "Enter their score on Seatwork5: "; cin >> seatW5[i];
        cout << "Enter their score on Seatwork6: "; cin >> seatW6[i];
        cout << "Enter their score on Seatwork7: "; cin >> seatW7[i];
        cout << "Enter their score on Seatwork8: "; cin >> seatW8[i];
        cout << "Enter their score on Seatwork9: "; cin >> seatW9[i];
        cout << "Enter their score on Seatwork10: "; cin >> seatW10[i];
        cout << "Enter Board Points: "; cin >> boardPoint[i];
    }
    
    //loop for summation of individual quiz array elements
    for (i = 0; i < students; i++)
    {
        //average weighted of each individual quiz
        quiz1Average = (quiz1[i] / 100) * 0.15;
	    quiz2Average = (quiz2[i] / 100) * 0.15;
	    quiz3Average = (quiz3[i] / 100) * 0.15;
	    quiz4Average = (quiz4[i] / 100) * 0.15;
	}
	
	//loop for summation of individual exam array elements
	for (i = 0; i < students; i++)
	{
		//get 20% weight of each exam
	    preExAverage = (preEx[i] / 100) * 0.20;
	    finExAverage = (finEx[i] / 100) * 0.20;
	}
	
	//loop for summation of individual seatwork array elements
    for (i = 0; i < students; i++)
	{
		//summation of individual seatwork array data
		seatTotalAverage[i] = seatW1[i] + seatW2[i] + seatW3[i] + seatW4[i] + seatW5[i] + seatW6[i] + seatW7[i] + seatW8[i] + seatW9[i] + seatW10[i];
		//get the 2% weight of seatwork summation
	    seatTotalAverage[i] = (seatTotalAverage / 100) * 0.02;
	}
	
	//loop for computation of final raw grades
    for (i = 0; i < students; i++)
    {
    	finalRaw = finalRaw + quiz1Average + quiz2Average + quiz3Average + quiz4Average + preExAverage + finExAverage + seatTotalAverage;
	}
	cout << endl;
    
    //print out the header names
    cout << "Name" << setw(10) << "Quiz1" << setw(8) << "Quiz2" << setw(8) << "Quiz3" << setw(8) 
	     << "Quiz4" << setw(15) << "PrelimsExam" << setw(15) << "FinalsExam" << setw(15) 
	     << "Seatwork Total" << setw(10) << "Final Raw Grade" << setw(10) << "Transmuted";
    cout << endl;
    
    //loop to print out summation of quiz, exams, and seatworks
    for(i = 0; i < students; i++)
    {
        cout << name[i] << setw(8) << quiz1Average << setw(8) << quiz2Average << setw(8) << quiz3Average << setw(8) 
		     << quiz4Average << setw(8) << preExAverage << setw(8) << finExAverage << setw(10) << seatTotalAverage << setw(10) 
			 << finalRaw << setw(8) << transmuted();
        cout << endl;
    }
}

//seperate function for transmutation of raw grades
double transmuted()
{
	double first, second, third, fourth, fifth, sixth, seventh, eight, ninth, tenth, finalRaw;
	int students = 1;
	int i;
	
	for (i = 0; i < students; i++)
	{
	    if (finalRaw >= 95.57)
	    {
		    first = 1.00;
		    cout << first;
	    }
	    else if (finalRaw <= 95.56 && finalRaw >= 91.12)
	    {
		    second = 1.25;
		    cout << first;
	    }
	    else if (finalRaw <= 91.11 && finalRaw >= 86.68)
	    {
		    third = 1.50;
		    cout << third;
	    }
	    else if (finalRaw <= 86.67 && finalRaw >= 82.23)
	    {
		    fourth = 1.75;
		    cout << fourth;
	    }
	    else if (finalRaw <= 82.22 && finalRaw >= 77.79)
	    {
	 	    fifth = 2.00;
		    cout << fifth;
	    }
	    else if (finalRaw <= 77.78 && finalRaw >= 73.34)
	    {
		    sixth = 2.25;
		    cout << sixth;
	    }
	    else if (finalRaw <= 73.33 && finalRaw >= 68.90)
	    {
		    seventh = 2.50;
			cout << seventh;
		}
		else if (finalRaw <= 68.89 && finalRaw >= 64.45)
		{
			eight = 2.75;
			cout << eight;
		}
		else if (finalRaw <= 64.44 && finalRaw >= 60.00)
		{
			ninth = 3.00;
			cout << ninth;
		}
		else
		{
			tenth = 5.00;
			cout << tenth;
		}
    }
}
