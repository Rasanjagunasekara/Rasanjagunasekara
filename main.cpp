//Individual work 
//Main Program
#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>

using namespace std;

//GUNASEKARA M.V.G.R.S
//IT21162596
//MLB 08_01_09
//MALABE CAMPUS

//Certificate class
class Certificate 
{
  private:
    char registeredUserName[30];
    int age;
    char gender[10];
    char NIC[20];
    char emailAddress[20];
    char vaccineName[30];
    int dateOf1stDose;
    int dateOf2ndDose;
    char vaccinatedAt[30];
  
  public:
    Certificate();
    Certificate(char rUn[],int a, char g[], char nic[], char eA[], char vN[], int dO1D, int dO2D, char vA[]);
    void displayDetails();
};

//SILVA K.P.D.A
//IT21161360
//MLB 08_01_09
//MALABE CAMPUS

//Dose class 
class Dose
{
	private:
		int   doseID;
		char  doseName[30];
		char  doseIssueDate[10];
		char  doseExpireDate[10];
		char  doseAmount[10];
		int   doseCount;
		float dosePrice;
		
	public:	
	    Dose();
	    Dose(int id,char name[],char issue[],char expire[],char dA[]);
	    void displayDoseDetails();
	    void setDosePrice(int dC);
	    float calcDosePrice();
		
};

//Liyanaarachchi V.K
//IT21159794
//MLB_08_01_09
//Malabe Campus

//Medical officer class 
class MedicalOfficer
{
private:
	char officerID[10];
	char officerName[30];
	char jobDescription[20];

public:
	MedicalOfficer(char oID[], char oName[], char oJobDesc[]);
	void assignMedicalOfficer();
	void displayOfficerDetails();
	~MedicalOfficer();
};

//PERERA K.K.M
//IT21159930
//MLB_08_01_09
//MALABE CAMPUS


//Payment class
class Payment{
	
private:
 int p_ID;
 char p_Type[25];
 char p_Status[20];
 
public:
  Payment();
  Payment(int p_ID,char p_Type[],char p_Status[]);
  void displayPaymentDetails();

};

//SILVA K.P.D.A
//IT21161360
//MLB 08_01_09
//MALABE CAMPUS


//Registered User class
class RegisteredUser 
{

    private:
    int Id;
		char name[30];
		int age;
		char address[30];
		char NIC[20];
		int contact_No;
		
	public:
		RegisteredUser();
		RegisteredUser(int i,char n[],int a,char add[],char nic[],int c);
		void displayDetails();	
};

//Kumara D.D.K.C
//IT21161124
//MLB_08_01_09
//Malabe Campus

class Schedule
{
private:
	char scheduleID[10];
	char date[15];
	char startTime[15];
	char endTime[15];
	char centerLocation[20];
	char vaccine[10];

public:
	Schedule(char sID[], char sdate[], char sTime[], char eTime[], char location[], char v[]);
	void displayScheduleDetails();
	~Schedule();
};

//GUNASEKARA M.V.G.R.S
//IT21162596
//MLB 08_01_09
//MALABE CAMPUS

//User class
class User{
  private:
    int idNo;
    char userName[20];
    char emailAddress[30];
  
  public:
    User();
    User(int id, char uN[],char eA[]);
    void displayUserDetails();
};

//Liyanaarachchi V.K
//IT21159794
//MLB_08_01_09
//Malabe Campus

//Vaccination Center class
class Vaccination_Center
{
private:
	int centerID;
	char centerName[30];
	char centerLoacation[30];
	char centerContact[10];

public:
  Vaccination_Center();
	Vaccination_Center(int CID, char Cname[], char Clocation[], char CContact[]);
	void displayCenterDetails();
	void displayAppointment();

};

//Kumara D.D.K.C
//IT21161124
//MLB_08_01_09
//Malabe Campus

//vaccine class
class Vaccine
{
private:
	int vaccineID;
	char batchNo[10];
	char vaccineName[15];
	char vaccineDescription[50];
	char manufactureDate[15];
	char expireDate[15];
	char distributor[30];
	int addedStock;
	int oldStock;

public:
	Vaccine(int vID, char vName[], char vDesc[], int oSt);
	void setDetails(char bNo[], char mfd[], char exp[], char distri[],int aSt);
	int calcStock();
	void displayVaccineDetails();
	~Vaccine();
};

//GUNASEKARA M.V.G.R.S
//IT21162596
//MLB 08_01_09
//MALABE CAMPUS

//Certificate class method implementation
Certificate::Certificate()
  {
    strcpy(registeredUserName,"");
    age=0;
    strcpy(gender,"");
    strcpy(NIC,"");
    strcpy(emailAddress,"");
    strcpy(vaccineName,"");
    dateOf1stDose=0;
    dateOf2ndDose=0;
    strcpy(vaccinatedAt,"");
  }

Certificate::Certificate(char rUn[],int a, char g[], char nic[], char eA[], char vN[], int dO1D, int dO2D, char vA[])
  {
    strcpy(registeredUserName,rUn);
    age=a;
    strcpy(gender,g);
    strcpy(NIC,nic);
    strcpy(emailAddress,eA);
    strcpy(vaccineName,vN);
    dateOf1stDose=dO1D;
    dateOf2ndDose=dO2D;
    strcpy(vaccinatedAt,vA);
  }

void Certificate::displayDetails()
  {
    cout<<"User Details\n"<<endl;
    cout<<"Name :"<<registeredUserName<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Gender :"<<gender<<endl;
    cout<<"NIC :"<<NIC<<endl;
    cout<<"Email Address :"<<emailAddress<<endl;
    cout<<endl;
    cout<<"Vaccination Details\n"<<endl;
    cout<<"Vaccine Name :"<<vaccineName<<endl;
    cout<<"Date of 1st Dose :"<<dateOf1stDose<<endl;
    cout<<"Date of 2nd Dose :"<<dateOf2ndDose<<endl;
    cout<<"Vaccinated At :"<<vaccinatedAt<<endl;
  }
  
  //SILVA K.P.D.A
//IT21161360
//MLB 08_01_09
//MALABE CAMPUS

//Dose class methods implemention
Dose::Dose()
{
	
	doseID = 0;
	strcpy(doseName,"");
	strcpy(doseIssueDate,"");
	strcpy(doseExpireDate,"");
	strcpy(doseAmount,"");
}
Dose::Dose(int id,char name[],char issue[],char expire[],char dA[])
{
	doseID = id;
	strcpy(doseName,name);
    strcpy(doseIssueDate,issue);
	strcpy(doseExpireDate,expire);
    strcpy(doseAmount,dA);
}
void Dose::displayDoseDetails()
{
	cout<<"Display the dose Id :"<<doseID<<endl;
	cout<<"Display the dose Name :"<<doseName<<endl;
	cout<<"Display dose Issue date :"<<doseIssueDate<<endl;
	cout<<"Display dose expire date :"<<doseExpireDate<<endl;
	cout<<"Display the doseAmount :"<<doseAmount<<endl;
}
void Dose::setDosePrice(int dC)
{
	cout<<"Enter the dose count of the vaccine you want:"<<endl;
	cin>>dC;
	cout<<endl;
	
	float TaxAdded = 20/100.00;
	
	if (dC == 1)
	{
		dosePrice = 100.00;
		cout<<"The dose Count of the vaccine is :"<<dC<<endl;
		cout<<"The dose Price is :"	<<setprecision(2)<<setiosflags(ios::fixed)<<dosePrice * dC<<endl;
	}
	else if (dC == 2)
	{
		dosePrice = 250.00 + TaxAdded;
		cout<<"The dose Count of the vaccine is :"<<dC<<endl;
		cout<<"The dose Price is :"	<<setprecision(2)<<setiosflags(ios::fixed)<<dosePrice * dC <<endl;
	}
	else if (dC == 3)
	{
		dosePrice = 400.00 + TaxAdded;
	    cout<<"The dose Count of the vaccine is :"<<dC<<endl;
	    cout<<"The dose Price is :"	<<setprecision(2)<<setiosflags(ios::fixed)<<dosePrice * dC<<endl;
	}
	else if (dC >=4 ) 
	{
		dosePrice = 700.00 + TaxAdded;
		cout<<"The dose Count of the vaccine is :"<<dC<<endl;
		cout<<"The dose Price is :"	<<setprecision(2)<<setiosflags(ios::fixed)<<dosePrice * dC<<endl;
	}
	else
	{
		dosePrice = 0 + TaxAdded;
		cout<<"The dose Count of the vaccine is :"<<dC<<endl;
		cout<<"The dose Price is :"	<<setprecision(2)<<setiosflags(ios::fixed)<<dosePrice * dC<<endl;
	}
		
}
float Dose::calcDosePrice()
{
	return doseCount * dosePrice;
}

//Liyanaarachchi V.K
//IT21159794
//MLB_08_01_09
//Malabe Campus

//Medical Officer class methods implemention
MedicalOfficer::MedicalOfficer(char oID[], char oName[], char oJobDesc[])
{
	strcpy(officerID,oID);
	strcpy(officerName,oName);
	strcpy(jobDescription,oJobDesc);
}

void MedicalOfficer::assignMedicalOfficer()
{
}

void MedicalOfficer::displayOfficerDetails()
{
	cout << endl << "Medical officer ID = " << officerID << endl << "Medical officer name = " << officerName << endl << "Mdeical officer job description = " << jobDescription << endl << endl; 
}
MedicalOfficer::~MedicalOfficer()
{
}

//PERERA K.K.M
//IT21159930
//MLB_08_01_09
//MALABE CAMPUS

//payment class methods implementation
// default constructor
Payment::Payment()
{
  p_ID = 0;
  strcpy(p_Type,"");
  strcpy(p_Status,"");
}

// Constructor with parameters
Payment::Payment(int P_ID, char P_Type[], char P_Status[])
{
  p_ID = P_ID;
  strcpy (p_Type ,P_Type);
  strcpy(p_Status ,P_Status);
}

void Payment::displayPaymentDetails()
{
  cout<<"Payment ID: "<<p_ID<<endl;
  cout<<"Payment Type: "<<p_Type<<endl;
  cout<<"Payment Status: "<<p_Status<<endl;
}

//SILVA K.P.D.A
//IT21161360
//MLB 08_01_09
//MALABE CAMPUS

//methods implementation
RegisteredUser::RegisteredUser()
{
	  Id =0;
    strcpy(name,"");
    age=0;
    strcpy(address,"");
    strcpy(NIC,"");
    contact_No =0;
    
    
}
RegisteredUser::RegisteredUser(int i,char n[],int a,char add[],char nic[],int c)

{
	Id=i;
	strcpy(name,n);
	age = a;
	strcpy(address,add);
	strcpy(NIC,nic);
	contact_No=c;
		
}
void RegisteredUser::displayDetails()
{
	cout<<"Id of the patient :"<<Id<<endl;
	cout<<"Name of the Patient :"<<name<<endl;
	cout<<"Age of the Patient :"<<age<<endl;
	cout<<"Address of the Patient :"<<address<<endl;
	cout<<"NIC of the patient :"<<NIC<<endl;
	cout<<"Contact Number of the patient :"<<contact_No<<endl;
	
	
}

//Kumara D.D.K.C
//IT21161124
//MLB_08_01_09
//Malabe Campus

//schedule class methods implementation
Schedule::Schedule(char sID[], char sdate[], char sTime[], char eTime[], char location[], char v[])
{
	strcpy(scheduleID,sID);
	strcpy(date,sdate);
	strcpy(startTime,sTime);
	strcpy(endTime,eTime);
	strcpy(centerLocation,location);
	strcpy(vaccine,v);
}

void Schedule::displayScheduleDetails()
{
	cout << endl << "Schedule ID = " << scheduleID << endl << "Scheduled date = " << date << endl << "Starting time = " << startTime << endl << "Ending time = " << endTime << endl << "Location = " << centerLocation << endl << "Vaccine = " << vaccine << endl; 
}

Schedule::~Schedule()
{
}

//GUNASEKARA M.V.G.R.S
//IT21162596
//MLB 08_01_09
//MALABE CAMPUS

//user class methods implementation
User::User()
	{
		idNo =0;
		strcpy(userName,"");
		strcpy(emailAddress,""); 
	}

User:: User(int id, char uN[],char eA[])
	{
		idNo = id;
		strcpy(userName,uN);
		strcpy(emailAddress,eA);
	}

void User::displayUserDetails()
	{
		cout<<"The id number of the user :"<<idNo<<endl;
		cout<<"The Name of the user :"<<userName<<endl;
		cout<<"The email Address of the user :"<<emailAddress<<endl;
	}
	
//Liyanaarachchi V.K
//IT21159794
//MLB_08_01_09
//Malabe Campus

//vaccination center class methods implementation
Vaccination_Center::Vaccination_Center()
{
  centerID=0;
  strcpy(centerName, "");
  strcpy(centerLoacation, "");
  strcpy(centerContact, "");
}
Vaccination_Center::Vaccination_Center(int CID, char Cname[], char Clocation[], char CContact[])
{
	centerID= CID;
  strcpy(centerName, Cname);
  strcpy(centerLoacation, Clocation);
  strcpy(centerContact, CContact);
}
void Vaccination_Center::displayCenterDetails()
{
	cout << "Center ID: " << centerID << endl;
  cout << "Center Name: " << centerName << endl; 
  cout << "Center Location: " << centerLoacation << endl;
  cout << "Center Contact: " << centerContact << endl << endl;
}

//Kumara D.D.K.C
//IT21161124
//MLB_08_01_09
//Malabe Campus

//vaccine class methods implementation
Vaccine::Vaccine(int vID, char vName[], char vDesc[], int oSt)
{
	vaccineID = vID;
	strcpy(vaccineName, vName);
	strcpy(vaccineDescription, vDesc);
	oldStock = oSt;
}

void Vaccine::setDetails(char bNo[], char mfd[], char exp[], char distri[],int aSt){
	strcpy(batchNo, bNo);
	strcpy(manufactureDate, mfd);
	strcpy(expireDate, exp);
	strcpy(distributor, distri);
	addedStock = aSt;
}
int Vaccine::calcStock(){
	return oldStock + addedStock;
}
void Vaccine::displayVaccineDetails(){
	cout << endl << "Vaccine ID = " << vaccineID << endl << "Vaccine name = " << vaccineName << endl << "Vaccine description = " << vaccineDescription << endl 
		<< "Batch no = " << batchNo << endl << "Manufacture date = " << manufactureDate << endl
		<< "Expire date = " << expireDate << endl << "Distributor = " << distributor << endl
		<< "Old stock = " << oldStock << endl << "Added stock = " << addedStock << endl << "Available stock = " << calcStock() << endl;
}

Vaccine::~Vaccine()
{
}

int main ()
	{

cout<<"-----Details of the user-----"<<endl;
cout<<endl;

 //GUNASEKARA M.V.G.R.S
 //IT21162596
 //MLB 08_01_09
 //MALABE CAMPUS
User u1(01,"Rasanja","rasanjagunasekara@gmail.com\n");
User u2(02,"Kasun","kasunperera@gmail.com\n");
User u3(03,"Dewmi","dewmisilva@gmail.com\n");

u1.displayUserDetails();
u2.displayUserDetails();
u3.displayUserDetails();

cout<<endl;
cout<<endl;
cout<<endl;

 //GUNASEKARA M.V.G.R.S
 //IT21162596
 //MLB 08_01_09
 //MALABE CAMPUS

Certificate *c4;
cout<<"-----The details of the certificate-----"<<endl;
cout<<endl;
c4 = new Certificate("Rasanja Gunasekara",22,"Female","200075502802","rasanjagunasekara@gmail.com","Sinopharm",2021/02/12,2021/05/13,"Viharamaha Devi Park");
c4->displayDetails();
   

 cout<<endl;
 cout<<endl;
 cout<<endl;


  //SILVA K.P.D.A
  //IT21161360
  //MLB 08_01_09
  //MALABE CAMPUS 
  
   
   Dose *d1, *d2, *d3;
   int c1,c2,c3;
   
   d1 = new Dose();
   d2 = new Dose();
   d3 = new Dose();
   

   cout<<endl;
  
  cout<<"------Display The details of the VACCINE DOSES 2019/2020/2022 :----"<<endl;
  cout<<endl;
  cout<<endl;
  
   cout<<"-----The details of the Covid 19 Vaccine Doses :-----"<<endl;
   d1 = new Dose(001,"Covid 19 Vaccine Doses","2019/10/1","2024/11/02","100Mg");
   cout<<endl;
   d1->displayDoseDetails();
   d1->setDosePrice(c1);
   cout<<endl;
   
   cout<<"-----The details of the Covid 19 Pyser Vaccine Doses :-----"<<endl;
   d2 = new Dose(002,"Covid 19 Pyser Vaccine Doses","2019/11/1","2024/10/31","200Mg");
   cout<<endl;
   d2 ->displayDoseDetails();
   d2->setDosePrice(c2);
   cout<<endl;
   
   cout<<"-----The details of the SARS 2019 Vaccine Doses :-----"<<endl;
   d3 = new Dose(003,"SARS 2019 Vaccine Doses","2021/5/3","2025/4/31","100Mg");
   cout<<endl;
   d3->displayDoseDetails();
   d3->setDosePrice(c3);
   cout<<endl;

   delete d1;
   delete d2;
   delete d3;

   cout<<endl;
   cout<<endl;
   cout<<endl;

   //SILVA K.P.D.A
   //IT21161360
   //MLB 08_01_09
   //MALABE CAMPUS 

   RegisteredUser *r1, *r2 , *r3, *r4, *r5 ;

  r1 = new RegisteredUser();
  r2 = new RegisteredUser();
	r3 = new RegisteredUser();
	r4 = new RegisteredUser();
	r5 = new RegisteredUser();

  cout<<"-----Details of the Registered Patients/Users 2022-----"<<endl;
  cout<<endl;
  cout<<endl;

	r1 = new RegisteredUser (1,"Dewmi",21,"Moratuwa,Colombo","99895689v",02211221122);
	r2 = new RegisteredUser (2,"Rasanja",23,"Piliyandala,Colombo","98567378v",02211221123);
	r3 = new RegisteredUser (3,"Kasun",24,"Katugasthota,Anuradhapura","00305678v",02214521124);
  r4 = new RegisteredUser (4,"Saman",22,"Galewela,Anuradhapura","00305678v",02211277124);
  r5 = new RegisteredUser (5,"Iraj",25,"kolonnawa,Anuradhapura","00305678v",02234221124);

	
	r1->displayDetails();
	cout<<endl;
	r2->displayDetails();
	cout<<endl;
	r3->displayDetails();
	cout<<endl;
	r4->displayDetails();
	cout<<endl;
	r5->displayDetails();
	
	
	delete r1;
	delete r2;
	delete r3;
	delete r4;
	delete r5;

  cout<<endl;
  cout<<endl;
  cout<<endl;

//PERERA K.K.M
//IT21159930
//MLB_08_01_09
//MALABE CAMPUS

  cout<<"-----Details of the Payments-----"<<endl;
  cout<<endl;
	Payment p1(1,"Credi Card","paid\n");
	Payment p2(2,"Pay pal","paid\n");
	Payment p3(3,"credit card","paid\n");
	
	p1.displayPaymentDetails();
	p2.displayPaymentDetails();
	p3.displayPaymentDetails();
  
   cout<<endl;
   cout<<endl;
   cout<<endl;


//Liyanaarachchi V.K
//IT21159794
//MLB_08_01_09
//Malabe Campus

  cout << "-----Vaccianation Center details-----" << endl << endl << endl;
  Vaccination_Center *VC1, *VC2;
  VC1 = new Vaccination_Center(104, "Vaccination_Center-VC1", "Gampaha", "0355401230");

  VC2 = new Vaccination_Center(107, "Vaccination_Center-VC2", "Colombo", "0112470021");
    
  VC1->displayCenterDetails();
  VC2->displayCenterDetails();

cout<<endl;
cout<<endl;
cout<<endl;

    cout << endl << "----------Medical Officer Details----------" << endl << endl;

	MedicalOfficer* MO1 = new MedicalOfficer("MD001", "Dr.Gamini Senarath", "Doctor");
	MedicalOfficer* MO2 = new MedicalOfficer("MN011", "Kawya Gamage", "Nurse");
	MedicalOfficer* MO3 = new MedicalOfficer("ML003", "Kavindu Rathnayake", "Lab assistant");
	
	MO1->displayOfficerDetails();
	MO2->displayOfficerDetails();
	MO3->displayOfficerDetails();

    cout << endl;
    
  delete MO1;
	delete MO2;
	delete MO3;
    
    
//Kumara D.D.K.C
//IT21161124
//MLB_08_01_09
//Malabe Campus
    
	cout << "----------Vaccine Details----------" << endl << endl;
    
	Vaccine *v1 = new Vaccine(001, "Pfizer", "Good vaccine", 150000);
  Vaccine *v2 = new Vaccine(002, "Sinopharm", "Bad vaccine", 100000);
  Vaccine *v3 = new Vaccine(003, "Moderna", "Better vaccine", 200000);
    
	v1->setDetails("B015", "10/04/2022", "15/05/2025", "M.E.D Distributors", 200000);
    v2->setDetails("B010", "20/03/2022", "22/01/2025", "Hayles Distributors", 350000);
    v3->setDetails("B025", "02/05/2022", "05/08/2025", "Durdans Distributors", 150000);

	v1->displayVaccineDetails();
	v2->displayVaccineDetails();
  v3->displayVaccineDetails();  

  cout<< endl;
    
	cout << endl << "----------Schedule Details----------" << endl << endl;
    
	Schedule* S1 = new Schedule("S001", "25/05/2022" , "06.00AM", "05.00PM", "Piliyandala", "Moderna");
	Schedule* S2 = new Schedule("S002", "05/06/2022" , "06.00AM", "05.00PM", "Malabe", "Pfizer");


	S1->displayScheduleDetails();
	S2->displayScheduleDetails();

	delete v1;
	delete S1;
	delete S2;
    
return 0;   
	}
