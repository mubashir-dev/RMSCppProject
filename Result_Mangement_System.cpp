//@uthor MUBASHIR ALI //
//@Develpoing Furm TECHABBOTT//
//**********************************************************************************************//
//***************************HEADER FILES USED IN THIS PROJECT**********************************//
//**********************************************************************************************//
#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
//**********************************************************************************************//
//****************************gotoxyFUnction***************************************************//
//**********************************************************************************************//
void gotoxy(int x,int y)
{
COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);	
};
//****************************************Delay Function******************************************//
void delay(int d)
{

int i;

float a;
 

for (i=0;i<(d*10000);i++) a=(float)(i/0.1f);

}
//***********************************************************************************************//
//*********************************************************************************************//
class Student_Middle;
class Student_Matric
{
public:
	int total_Marks,obtain_Marks;
	int subject_1,subject_2,subject_3,subject_4,subject_5,subject_6,subject_7,subject_8;
	char name[20];
	char Father_Name[20];
	char RollNo[10];
	char Class[10];
	float Percentage;
	char Grade;
	char Remakrs[20];
	int R;  
	char status[15];    
public:
	Student_Matric()
	{
		subject_1=0;
		subject_2=0;
		subject_3=0;
		subject_4=0;
		subject_5=0;
		subject_6=0;
		subject_7=0;
		subject_8=0;
		obtain_Marks=0;
		Percentage=0.0;
		strcpy(RollNo,"0");
		Grade='0';
		strcpy(Class,"Empty");
		strcpy(status,"None");
		strcpy(name,"Empty");
		strcpy(Father_Name,"Empty");
		
		
	}
	void Get_Information();
	void get_Academic();
	void Show_Details();
	void Check();
	void Calu();
	void ClassWise_Result();
	void Report();
	int Store_Data();
	void Show_All_Record_file();
	void Search_Clas(char* S);
	void Search_Name(char* N);
	void Update_Data(char *U);
	void Delete_Data(char *N);
	int Check_RollNo(char *R);
	char *get_name()
	{
		return name;
	}
	char *get_class()
	{
		return Class;
	}
	char*get_RollNo()
	{
		return RollNo;
	}
	
};
//********************************************************************************//
//*******************************************************************************************************//
//**************************************Student_Matric-Class-End*****************************************//
//******************************************************************************************************//
void Student_Matric::Get_Information()
{	system("cls");
	ON3:
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\tSTUDENT INFORMATION"<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"Enter Your RollNo:"<<endl;
	cin>>RollNo;
	//R=Check_RollNo(RollNo);
	//if(R==0)
	//{
	//	cout<<"RollNo is PreOccupied"<<endl;
	//	getch();
	//	system("cls");
	//	goto ON3;
		
	//}
	cin.ignore();
	cout<<"Enter Your Class:"<<endl;
	cin.getline(Class,7);
	//cin.ignore();
	cout<<"Enter Your Name:"<<endl;
	cin.getline(name,19);
	cout<<"Enter Your Father Name:"<<endl;
	cin.getline(Father_Name,19);
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	getch();
	system("cls");

}
void Student_Matric::get_Academic()
{	
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\tSTUDENT INFORMATION"<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\n\n";
	cout<<"Enter Below Marks Against Subjects"<<endl;
	cout<<"\n";
	getch();
	system("cls");
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\tSTUDENT INFORMATION"<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	gotoxy(4,6);
	cout<<"\n\t\tEnter The Marks of ENGLISH:    \t";           cin>>subject_1;
	cout<<"\n\t\tEnter The Marks of URDU:       \t";           cin>>subject_2;
	cout<<"\n\t\tEnter The Marks of MATHEMATICS:\t";           cin>>subject_3;
	cout<<"\n\t\tEnter The Marks of PHYSICS:    \t";           cin>>subject_4;
	cout<<"\n\t\tEnter The Marks of CHEMISTRY:  \t";           cin>>subject_5;
	cout<<"\n\t\tEnter The Marks of BIOLOGY:    \t";           cin>>subject_6;
	cout<<"\n\t\tEnter The Marks of ISLMYAT:    \t";           cin>>subject_7;
	cout<<"\n\t\tEnter The Marks of PAK STUDY:  \t";           cin>>subject_8;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
		
}
void Student_Matric::Show_Details()
{
	
	
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\tGOVT: HIGH SCHOOL NO:3 ABBOTTABAD"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	getch();
	system("cls");
	cout<<"\n";
	cout<<"\t\t\t\t------------------"<<endl;
	cout<<"\t\t\t\tRESULT INFORMATION"<<endl;
	cout<<"\t\t\t\t------------------"<<endl;
	cout<<"\n";
	cout<<"             "<<"NAME:                             "<<setw(20)<<name<<endl;
	cout<<"             "<<"FATHER NAME                       "<<setw(20)<<Father_Name<<endl;
	cout<<"             "<<"CLASS                             "<<setw(20)<<Class<<endl;
	cout<<"             "<<"RollNo                            "<<setw(20)<<this->RollNo<<endl;
	cout<<"             "<<"REMARKS                           "<<setw(20)<<status<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"             SUBJECTS            "<<"    Marks Obtained           "<<"Total"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<" 1           "<<"ENGLISH           "<<setw(20)<<subject_1<<"              75"<<endl;
	cout<<" 2           "<<"URDU              "<<setw(20)<<subject_2<<"              75"<<endl;
	cout<<" 3           "<<"MATHEMATICS       "<<setw(20)<<subject_3<<"              75"<<endl;
	cout<<" 4           "<<"BIOLOGY           "<<setw(20)<<subject_4<<"              75"<<endl;
	cout<<" 5           "<<"CHEMISTRY         "<<setw(20)<<subject_5<<"              75"<<endl;
	cout<<" 6           "<<"PHYSICS           "<<setw(20)<<subject_6<<"              75"<<endl;
	cout<<" 7           "<<"ISLAMIC-STUDIES   "<<setw(20)<<subject_7<<"              50"<<endl;
	cout<<" 8           "<<"PAK-STUDY         "<<setw(20)<<subject_8<<"              50"<<endl;
	cout<<"--------------------------------------------------------------------------------";                
	cout<<"\t\t\t"<<"Percentage:"<<Percentage<<"%"<<"\t\t "<<obtain_Marks<<" "<<Grade<<"\t\t550"<<endl;
	cout<<"--------------------------------------------------------------------------------"; 
	getch();
	system("cls");               

	
	
	
	
	
	
	
}
void Student_Matric::Calu()
{
	
	obtain_Marks=subject_1+subject_2+subject_3+subject_4+subject_5+subject_6+subject_7+subject_8;
	Percentage=obtain_Marks*100/550;
	if(Percentage<=99)
	{
		Grade='A';
	}
	if(Percentage<=70)
	{
		Grade='A';
	}
	if(Percentage<=65)
	{
		Grade='B';
	}
	if(Percentage<=50)
	{
		Grade='C';
	}
	if(Percentage<=45)
	{
		Grade='D';
	}
	if(Percentage<33)
	{
		Grade='F';
	}
	if(Percentage<33)
	{
	strcpy(status,"Fail");	
	}
	else
	{
	strcpy(status,"Pass");	
	}	
}
void Student_Matric::Check()
{
	if(subject_1<25)
	{
		subject_1=0;
	}
	if(subject_2<25)
	{
		subject_2=0;
	}
	if(subject_3<25)
	{
		subject_3=0;
	}
	if(subject_4<25)
	{
	subject_4=0;
	}
	if(subject_5<25)
	{
		subject_5=0;
	}
	if(subject_6<25)
	{
		subject_6=0;
	}
	if(subject_7<18)
	{
		subject_7=0;
	}
	if(subject_8<18)
	{
		subject_8=0;
	}	
}
void Student_Matric::ClassWise_Result()
{
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\t\4RESULT INFORMATION\4"<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"================================================================================";
	cout<<"RollNo"<<"\t"<<"Name"<<"\t"<<"Father Name"<<"\t "<<"Class"<<"\t"<<"Obtian_Marks"<<"\t"<<"Percentage"<<"\t"<<"Remarks\n";
	cout<<"================================================================================\n";
	Report();	
}
void Student_Matric::Report()
{
	
	
	
	
	cout<<RollNo<<setw(10)<<name<<"   "<<Father_Name<<setw(6)<<Class<<setw(10)<<obtain_Marks<<setw(15)<<Percentage<<setw(16)<<status<<endl;
		//system("cls");
	
	
	
	
	
	
}
//***********************************************Store_Function*******************************************************//
int Student_Matric::Store_Data()
{
system("cls");	
if(name=="Empty"&& Class=="Empty" && RollNo==0)
{
cout<<"\t\t\t\tSorry Some Data Is Not Initialized"<<endl;
return (0);
}
else
{
ofstream fout;
fout.open("RMS_Matric.dat",ios::app|ios::binary);
fout.write((char*) this ,sizeof(*this));
cout<<"\t\t\t---------------------------------------------"<<endl;
cout<<"\t\t\t   Record Store Successfully into Database"<<endl;
cout<<"\t\t\t---------------------------------------------"<<endl;
return(1);
fout.close();
getch();	
}	

}
//********************Class_Wise_Result*************************************************************//
void Student_Matric::Show_All_Record_file()
{
ifstream fin;
fin.open("RMS_Matric.dat",ios::in|ios::binary);
if(!fin)
{
	
	cout<<"\t\t\tFile Not Exist"<<endl;
	
}	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\t  CLASS RESULT "<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"================================================================================";
	cout<<"RollNo"<<"\t"<<"Name"<<"\t"<<"Father Name"<<"\t"<<"Class"<<"\t"<<"Obtian_Marks"<<"\t"<<"Percentage"<<"\t"<<"Remarks\n";
	cout<<"================================================================================";
while(fin.read((char*) this ,sizeof(*this)))
{
	
	Report();
				
}
getch();
fin.close();

	
}
//*******************************Search_Class**********************************************//
void Student_Matric::Search_Clas(char *C)
{
int flag=0;
ifstream fin;
fin.open("RMS_Matric.dat",ios::in|ios::binary);
if(!fin)
{
	cout<<"\t\t\tFile Not Exist"<<endl;
	
}
else
{
fin.read((char *) this ,sizeof(*this));
if(!strcmp(get_class(),C))
{
Show_Details();
flag=1;	
}	
fin.read((char*) this ,sizeof(*this));
if(flag==0)
	{	
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t --------------------"<<endl;
		cout<<"\t\t\t\t Record Doesn't Exist"<<endl;
		cout<<"\t\t\t\t --------------------"<<endl;

	}


}	
	
fin.close();
getch();		
}
//***************************************Search_Name******************************************************************//
void Student_Matric::Search_Name(char *N)
{
int flag=0;
ifstream fin;
fin.open("RMS_Matric.dat",ios::in|ios::binary);
if(!fin)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\tFile Not Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;	
}	
else
{
	fin.read((char*) this,sizeof(*this));
	if(!strcmp(get_name(),N))
	{
		
	Show_Details();
	flag=1;			
	}
	fin.read((char*) this,sizeof(*this));	
}
if(flag==0)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t --------------------"<<endl;
		cout<<"\t\t\t\t Record Doesn't Exist"<<endl;
		cout<<"\t\t\t\t --------------------"<<endl;

}
fin.close();
getch();

}
//*********************************************Delete_Data*********************************************************//
void Student_Matric::Delete_Data(char *N)
{
int flag=0;
ifstream fin;
ofstream fout;
fin.open("RMS_Matric.dat",ios::in|ios::binary);
   if(!fin)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t--------------------"<<endl;
		cout<<"\t\t\t\tFile Doesn't Exist"<<endl;
		cout<<"\t\t\t\t--------------------"<<endl;	
	}
   else
	{
	fout.open("TempFile.dat",ios::out|ios::binary);
	while(fin.read((char*) this ,sizeof(*this)));
	{
	if(strcmp(get_name(),N)!=0)
	{
	fout.write((char*) this,sizeof(*this));
	}	
	else
	{
		flag=1;
	}
	fout.close();
	fin.close();
	remove("RMS_Matric.dat");
	rename("TempFile.dat","RMS.dat");	
	}
	if(flag!=0)		{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------------"<<endl;
		cout<<"\t\t\tRecord Delete Successfully"<<endl;
		cout<<"\t\t\t--------------------------"<<endl;
		}
		else
		{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\tRecord Doesn't Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;
		}
		getche();	
	}	
}
//***********************************Roll_No_Chechk_Function*****************************************************************//
int Student_Matric::Check_RollNo(char *R)
{
ifstream fin;
fin.open("RMS_Matric.dat",ios::in|ios::ate|ios::binary);
if(!fin)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t--------------------"<<endl;
		cout<<"\t\t\t\tFile Doesn't Exist"<<endl;
		cout<<"\t\t\t\t--------------------"<<endl;
}

	else
	{
	fin.seekg(0);
	while(!fin.eof())
	{
	fin.read((char*) this ,sizeof(*this));
	if(strcmp(get_RollNo(),R)==0)
	{
		return 0;
	
	}
	fin.read((char*) this,sizeof(*this));		
	}	
	return 1;
	
}	
	
fin.close();	
	
	
	
	
	
	
}
//*******************************************************************************************************************//
//****************************************8duction_Function*****************************************************//
//******************************************************************************************************************//
void Introduction()
{

/*char Logo[]="GOVT HIGH SCHOOL NO 3 ABBOTTABAD";
int size=0;
size=strlen(Logo);
int i;
Sleep(2000);
for(i=0;i<=size;i++)
{
	Sleep(25);
cout<<Logo[i];	
}*/
cout<<"\n\n\n\n\n\n\n\n"<<endl;
char Set[]="\t\t\t---------------------------------\n\t\t\t\4GOVT HIGH SCHOOL NO 3 ABBOTTABAD\4\n\t\t\t---------------------------------\n\n\n\n\n\n\t\t\t\t\t--------------------------------\n\t\t\t\t\t  PROVIDING QULITY EDUCATION\n\t\t\t\t\t--------------------------------";
int Size=strlen(Set);
int i;
for(i=0;i<Size;i++)
{
Sleep(10);
cout<<Set[i];
}
cout<<"\n";	
getche();
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n"<<endl;
	char Clogo[]="\t\t\t\t--------------\n\t\t\t \t \4TECHABBOTT\4 \n\t\t\t\t--------------\n\n\n\n\n\n\t\t\t\t\t------------------------------------\t\t\t\t\t\t   PROVIDING DOOR STEP SOLUTIONS\n\t\t\t\t\t------------------------------------";
	int SiZe=strlen(Clogo);
	int z;
	for(z=0;z<SiZe;z++)
	{
		Sleep(10);
		cout<<Clogo[z];
	}
	cout<<"\n";
	system("cls");
	
	
	
	
}
//********************************************************UPDATE FUNCTION************************************************************//
void Student_Matric::Update_Data(char *U)
{
int flag =0;
fstream file;
file.open("RMS_Matric",ios::in|ios::out|ios::ate|ios::binary);
if(!file)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t--------------------"<<endl;
		cout<<"\t\t\t\tFile Doesn't Exist"<<endl;
		cout<<"\t\t\t\t--------------------"<<endl;
	
}	
else
{
file.seekg(0);
file.read((char*) this, sizeof(*this));
while(!file.eof())
{
	
if(strcmp(get_name(),U)!=0)
{
Show_Details();
cout<<"Enter The New Information"<<endl;
system("cls");
getch();
Get_Information();
get_Academic();
Check();
Calu();
file.seekp(file.tellg()-sizeof(*this));
file.write((char*) this ,sizeof(*this));
flag++;
system("cls");
		system("color 47");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t--------------------"<<endl;
		cout<<"\t\t\t\t   Record Updated   "<<endl;	
		cout<<"\t\t\t\t--------------------"<<endl;	}
		file.read((char*) this, sizeof(*this));	}		
if(flag==0)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\tRecord Doesn't Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;
}
file.close();		
}
}
//*********************************************************************************************************************************//
//****************************************Student_Midlle_Start********************************************************************//
//*********************************************************************************************************************************//
class Student_Middle:public Student_Matric
{
public:
void Get_Info_Sub();	
void Show_Info();	
void Re_Check();	
void Re_Calc();	
int Store_Middle();	
void Show_All();
void Find_Name(char* N);
void Find_RollNo(char * C);
void Delete(char *D);
void Updtae(char *M);	
void Admin_Menu();
};
void Student_Middle::Get_Info_Sub()
{	
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\tSTUDENT INFORMATION"<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\n\n";
	cout<<"Enter Below Marks Against Subjects"<<endl;
	cout<<"\n";
	getch();
	system("cls");
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\tSTUDENT INFORMATION"<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	gotoxy(4,6);
	cout<<"\n\t\tEnter The Marks of English:    \t";           cin>>subject_1;
	cout<<"\n\t\tEnter The Marks of Urdu:       \t";           cin>>subject_2;
	cout<<"\n\t\tEnter The Marks of Matematics: \t";           cin>>subject_3;
	cout<<"\n\t\tEnter The Marks of Science:    \t";           cin>>subject_4;
	cout<<"\n\t\tEnter The Marks of History:    \t";           cin>>subject_5;
	cout<<"\n\t\tEnter The Marks of Computer:   \t";           cin>>subject_6;
	cout<<"\n\t\tEnter The Marks of Islmyat:    \t";           cin>>subject_7;
	cout<<"\n\t\tEnter The Marks of Pak Study:  \t";           cin>>subject_8;
	char EL[]="--------------------------------------------------------------------------------\n--------------------------------------------------------------------------------";
	int Ei;
	int SiZe;
	SiZe=strlen(EL);
	for(Ei=0;Ei<SiZe;Ei++)
	{
		Sleep(25);
		cout<<EL[Ei];
	}
		
}
void Student_Middle::Show_Info()
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\tGOVT: HIGH SCHOOL NO:3 ABBOTTABAD"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	getch();
	system("cls");
	cout<<"\t\t\t\t------------------"<<endl;
	cout<<"\t\t\t\tRESULT INFORMATION"<<endl;
	cout<<"\t\t\t\t------------------"<<endl;
	cout<<"\n";
	cout<<"             "<<"NAME:                             "<<setw(20)<<name<<endl;
	cout<<"             "<<"FATHER NAME                       "<<setw(20)<<Father_Name<<endl;
	cout<<"             "<<"CLASS                             "<<setw(20)<<Class<<endl;
	cout<<"             "<<"RollNo                            "<<setw(20)<<this->RollNo<<endl;
	cout<<"             "<<"Status                            "<<setw(20)<<status<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<"             SUBJECTS            "<<"    Marks Obtained           "<<"Total"<<endl;
	cout<<"--------------------------------------------------------------------------------";
	cout<<" 1           "<<"ENGLISH           "<<setw(20)<<subject_1<<"             100"<<endl;
	cout<<" 2           "<<"URDU              "<<setw(20)<<subject_2<<"             100"<<endl;
	cout<<" 3           "<<"MATHEMATICS       "<<setw(20)<<subject_3<<"             100"<<endl;
	cout<<" 4           "<<"SCIENCE           "<<setw(20)<<subject_4<<"             100"<<endl;
	cout<<" 5           "<<"HISTORY           "<<setw(20)<<subject_5<<"              75"<<endl;
	cout<<" 6           "<<"COMPUTER          "<<setw(20)<<subject_6<<"              75"<<endl;
	cout<<" 7           "<<"ISLAMIC-STUDIES   "<<setw(20)<<subject_7<<"              50"<<endl;
	cout<<" 8           "<<"PAK-STUDY         "<<setw(20)<<subject_8<<"              50"<<endl;
	cout<<"--------------------------------------------------------------------------------";                
	cout<<"\t\t\t"<<"Percentage:"<<Percentage<<"%"<<"\t\t "<<obtain_Marks<<" "<<Grade<<"\t\t650"<<endl;
	cout<<"--------------------------------------------------------------------------------"; 
	getch();
	system("cls");               	
}
void Student_Middle::Re_Check()
{
	if(subject_1<33)
	{
		subject_1=0;
	}
	if(subject_2<33)
	{
		subject_2=0;
	}
	if(subject_3<33)
	{
		subject_3=0;
	}
	if(subject_4<33)
	{
	subject_4=0;
	}
	if(subject_5<33)
	{
		subject_5=0;
	}
	if(subject_6<33)
	{
		subject_6=0;
	}
	if(subject_7<18)
	{
		subject_7=0;
	}
	if(subject_8<18)
	{
		subject_8=0;
	}	
}
void Student_Middle::Re_Calc()
{
		obtain_Marks=subject_1+subject_2+subject_3+subject_4+subject_5+subject_6+subject_7+subject_8;
	Percentage=obtain_Marks*100/650;
	if(Percentage<=99)
	{
		Grade='A';
	}
	if(Percentage<=70)
	{
		Grade='B';
	}
	if(Percentage<=65)
	{
		Grade='C';
	}
	if(Percentage<=50)
	{
		Grade='D';
	}
	if(Percentage<=45)
	{
		Grade='E';
	}
	if(Percentage<33)
	{
		Grade='F';
	}
	if(Percentage<33)
	{
	strcpy(status,"FAIL");	
	}
	else
	{
	strcpy(status,"PASS");	
	}	
}
int Student_Middle::Store_Middle()
{
	system("cls");	
if(name=="Empty"&& Class=="Empty" && RollNo==0)
{
cout<<"\t\t\t\tSorry Some Data Is Not Initialized"<<endl;
return (0);
}
else
{
ofstream fout;
fout.open("RMS_Middle.dat",ios::app|ios::binary);
fout.write((char*) this ,sizeof(*this));
cout<<"\t\t\t---------------------------------------------"<<endl;
cout<<"\t\t\t   Record Store Successfully into Database"<<endl;
cout<<"\t\t\t---------------------------------------------"<<endl;
return(1);
fout.close();
getch();	
}	
	
	
}
void Student_Middle::Show_All()
{
	system("cls");
ifstream fin;
fin.open("RMS_Middle.dat",ios::in|ios::binary);
if(!fin)
{
	
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\t File  Doesn't Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;
}	
else
{
cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"\t\t\t\t  CLASS RESULT "<<endl;
	cout<<"\t\t\t\t-------------------"<<endl;
	cout<<"================================================================================";
	cout<<"RollNo"<<"\t"<<"Name"<<"\t"<<"Father Name"<<"\t"<<"Class"<<"\t"<<"Obtian_Marks"<<"\t"<<"Percentage"<<"\t"<<"Status\n";
	cout<<"================================================================================";
while(fin.read((char*) this ,sizeof(*this)))
{
	
	//fin.read((char*) this ,sizeof(*this));
	Report();			
}
}
fin.close();		
}
void Student_Middle::Find_Name(char *N)
{
int flag=0;
ifstream fin;
fin.open("RMS_Middle.dat",ios::in|ios::binary);
if(!fin)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\tFile Not Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;	
}	
	while(fin.read((char*) this,sizeof(*this)));
	{
	if(strcmp(get_name(),N)==0)
	{	
	Show_Info();
	flag=1;		
	}
	}
	//fin.read((char*) this,sizeof(*this));
if(flag==0)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t --------------------"<<endl;
		cout<<"\t\t\t\t Record Doesn't Exist"<<endl;
		cout<<"\t\t\t\t --------------------"<<endl;

}
fin.close();
	
}
void Student_Middle::Find_RollNo(char *C)
{
int flag=0;
ifstream fin;
fin.open("RMS_Middle.dat",ios::in|ios::ate|ios::binary);
fin.seekg(0,ios::beg);
if(!fin)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\tFile Not Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;	
}
	else{
	while(fin.read((char*) this,sizeof(*this)));	
	{
	if(!strcmp(get_RollNo(),C))
	{	
	Show_Info();
	flag++;			
	}
	}
	fin.read((char*) this,sizeof(*this));	
}
if(flag==0)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t --------------------"<<endl;
		cout<<"\t\t\t\t Record Doesn't Exist"<<endl;
		cout<<"\t\t\t\t --------------------"<<endl;

}
fin.close();
	
}
void Student_Middle::Updtae(char *U)
{	int flag=0;
	fstream file;
	file.open("RMS_Middle.dat",ios::in|ios::out|ios::ate|ios::binary);
	if(!file)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\t File  Doesn't Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;	
	}
	file.seekg(0);
	file.read((char*) this ,sizeof(*this));
	while(!file.eof())
	{
		if(!strcmp(get_name(),U))
		{
		Get_Information();	
		Get_Info_Sub();	
		Re_Calc();
		Re_Check();
		Show_Info();	
		file.seekp(file.tellg()-sizeof(*this));
		file.write((char*) this ,sizeof(*this));	
		flag++;
		system("cls");
		system("color 47");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t--------------------"<<endl;
		cout<<"\t\t\t\t   Record Updated   "<<endl;
		cout<<"\t\t\t\t--------------------"<<endl;	
			
			
		}
		file.read((char*) this ,sizeof(*this));		
	}
	if(flag==0)
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\tRecord Doesn't Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;
}

file.close();		
}
void Student_Middle::Delete(char *D)
{
int flag=0;
ifstream fin;
ofstream fout;
fin.open("RMS_Middle.dat",ios::in|ios::binary);
if(!fin)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t--------------------"<<endl;
		cout<<"\t\t\t\tFile Doesn't Exist"<<endl;
		cout<<"\t\t\t\t--------------------"<<endl;	
	}
else
{
fout.open("temp1.dat",ios::out|ios::binary);
while(fin.read((char*) this ,sizeof(*this)));	
{
	if(strcmp(get_name(),D)!=0)
	{
		
		fout.write((char*) this ,sizeof(*this));
			
	}
	else
	{
		flag=1;
	}
	
	
	
}
fin.close();
fout.close();
remove("RMS_MIddle.dat");
rename("temp1.dat","RMS_Middle.dat");
	
	
		if(flag==1)
		{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------------"<<endl;
		cout<<"\t\t\tRecord Delete Successfully"<<endl;
		cout<<"\t\t\t--------------------------"<<endl;
		}
		else
		{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t--------------------"<<endl;
		cout<<"\t\t\tRecord Doesn't Exist"<<endl;
		cout<<"\t\t\t--------------------"<<endl;
		}
		getche();	
}	
}
//**************************GLOBAL OBJECTS****************************************//
Student_Matric s1;
Student_Middle M1;
//******************************************************************************//
void Instructions()
{
	char CLine[]="\t\4 THIS PROJECT IS COMPLETED  UNDER SUPERVISION  OF TECHABBOTT  FOR\n\n\t\t\tGOVT SCHOOL  NO 3 ABBOTTABAD \4";
	int i=0;
	int size;
	size=strlen(CLine);
	system("color 2");
	cout<<"\t\t\t\t-----------"<<endl;
	cout<<"\t\t\t\t\4TECHABBOTT\4"<<endl;
	cout<<"\t\t\t\t-----------"<<endl;
	cout<<"\n\n\n\n\n\n\n\n";
	Sleep(500);
	for(i=0;i<size;i++)
	{	Sleep(20);
		cout<<CLine[i];
	}
	getch();
	system("cls");
	system("color 2");
	cout<<"\t\t\t\t-----------"<<endl;
	cout<<"\t\t\t\t\4TECHABBOTT\4"<<endl;
	cout<<"\t\t\t\t-----------"<<endl;
	int I=0;
	int siZE;	
	char Inst[]="\tPLEASE FOLLOW THESE INSTRUCTION FOR USING THIS PROJECT \n\n \t1:-Please Make Sure to keep RollNo As Unique Id Of Student\n \t2:-We Proposed You To Use this Formate For Roll Numberng\n \t3:-Roll Formate:-RollNo-Class-Section\n \t4:-EI=8TH,SE=7TH,SI=6TH As Class Code\n \t5:-Sections Code Are Here.......... \n \t6:-Green=G,Yellow=Y;Blue=B,Pink=P\n \t7:-RollNo Example:1-EI-G\n \t8:-Above Statment Means That a Student having\n  \t9:-RollNo 1 From Class 8th And his Section is Greem\n \t10:-Fail Subject Is Treated as Fail And Not Count in Total Marks\n \t11:-Use UpperCase Letters";
	siZE=strlen(Inst);
	for(I=0;I<siZE;I++)
	{
		Sleep(10);
		cout<<Inst[I];
	}
	cout<<"\n";
																							cout<<"\t\t\t\t\t\t\t\t-----------"<<endl;
																							cout<<"\t\t\t\t\t\t\t\t   ADMIN   "<<endl;
																							cout<<"\t\t\t\t\t\t\t\t-----------"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	getch();
	system("cls");
	
}
void EndFunction()
{
system("cls");	
char Main_Logo[]="\n\n\n\n\n\n\n\n\t\t\t\t-----------------\n\t\t\t\t  \4THANK YOU\4\n\t\t\t\t-----------------\n\n\n\n\n\n\t\t\t\t\t------------------------------------\n\t\t\t\t\t   FOR USING THIS APPLICATION\n\t\t\t\t\t------------------------------------\n";
int size=strlen(Main_Logo);
int i;
for(i=0;i<size;i++)
{
	Sleep(10);
	cout<<Main_Logo[i];
}
	getche();
	system("cls");	
}

void Admin_Matric()
{
	system("cls");
	int choice;
	Sleep(500);
	int i =0;
	int size=0;
	char Heading[]="\t\t\t ADMIN PANEL MIDDLE";
	size=strlen(Heading);
	system("cls");
	{
	}
	cout<<"\t\t\t--------------------"<<endl;
	for(i=0;i<=size;i++)
	{
		Sleep(10);
		cout<<Heading[i];
		
		
	}
	cout<<"\n";
	cout<<"\t\t\t--------------------"<<endl;
	int sIZE;
	int I;
	Sleep(500);
	char H6[]="\n\n\t\t\t1:DISPLAY ALL STUDENTS RECORD	\n\n\t\t\t2:DISPLAY STUDENT RECORD BY ROLLNO \n\n \t\t\t3:DISPLAY STUDENT RECORD BY NAME \n\n\t\t\t4:MODIFY STUDENT RECORD  \n\n\t\t\t5:DELETE STUDENT RECORD  \n\n\t\t\t6:BACK TO MAIN MENU \n\n\t\t\tPLEASE ENTER YOUR CHOICE(1-6)\n"; 
	sIZE=strlen(H6);
	for(I=0;I<sIZE;I++)
	{
		Sleep(5);
		cout<<H6[I];
	}
	gotoxy(24,19);
	cin>>choice;
	switch(choice)
	{	
		//------------------------------//
		case 1:
		M1.Show_All();
		getch();
		system("cls");
		break;
		//-----------------------------//
		case 2:
		char SrollNo[15];
	//	getch();
		cout<<"\t\t\tPLEASE ENTER YOUR ROLLNO FOR SEARCHING:\n";
		gotoxy(24,21);
		cin.ignore();
		cin.getline(SrollNo,14);
		M1.Find_RollNo(SrollNo);
		system("cls");
		break;
		//-----------------------------//
		case 3:
		char Sname[20];
	//	getch();
		cout<<"\t\t\tPLEASE ENTER YOUR NAME FOR SEARCHING:\n";  
		gotoxy(24,21);
		cin.ignore();
		cin.getline(Sname,19);
		M1.Find_Name(Sname);
		system("cls");
		break;
		case 4:
		char Uname[20];
	//	getch();
		cout<<"\t\t\tPLEASE ENTER YOUR NAME FOR UPDATING:\n";  
		gotoxy(24,21);
		cin.ignore();
		cin.getline(Uname,19);
		M1.Updtae(Uname);
		system("cls");
		break;
		case 5:
		char Dname[20];
	//	getch();
		cout<<"\t\t\tPLEASE ENTER  NAME FOR DELETING\n";   
		gotoxy(24,21);
		cin.ignore();
		cin.getline(Dname,19);
		system("cls");
		M1.Delete(Dname);
		break;
		case 6:
		return ;
		getch();
		default:
		cout<<"/a";	
		
	}
	getch();
	Admin_Matric();
	cout<<"\n";
	char EL[]="--------------------------------------------------------------------------------\n";
	int Ei;
	int SiZe;
	SiZe=strlen(EL);
	for(Ei=0;Ei<SiZe;Ei++)
	{
		Sleep(25);
		cout<<EL[Ei];
	}
	getch();
	
}
void Admin_Middle()
{
	
	system("cls");
	int choice;
	Sleep(500);
	int i =0;
	int size=0;
	char Heading[]="\t\t\t ADMIN PANEL MATRIC";
	size=strlen(Heading);
	system("cls");
	{
	}
	cout<<"\t\t\t--------------------"<<endl;
	for(i=0;i<=size;i++)
	{
		Sleep(10);
		cout<<Heading[i];
		
		
	}
	cout<<"\n";
	cout<<"\t\t\t--------------------"<<endl;
	int sIZE;
	int I;
	Sleep(500);
	char H6[]="\n\n\t\t\t1:DISPLAY ALL STUDENTS RECORD	\n\n\t\t\t2:DISPLAY STUDENT RECORD BY ROLLNO \n\n \t\t\t3:DISPLAY STUDENT RECORD BY NAME \n\n\t\t\t4:MODIFY STUDENT RECORD  \n\n\t\t\t5:DELETE STUDENT RECORD  \n\n\t\t\t6:BACK TO MAIN MENU \n\n\t\t\tPLEASE ENTER YOUR CHOICE(1-6)\n"; 
	sIZE=strlen(H6);
	for(I=0;I<sIZE;I++)
	{
		Sleep(5);
		cout<<H6[I];
	}
	gotoxy(24,19);
	cin>>choice;
	switch(choice)
	{
	
	case 1:
	system("cls");
	s1.Show_All_Record_file();	
	break;
	case 2:
	{
	char RollNo[20];
	cout<<"\t\t\tENTER ROLLNO FOR SEARCHING"<<endl;
	gotoxy(24,21);
	cin.ignore();
	cin.getline(RollNo,19);
	s1.Check_RollNo(RollNo);
	break;}
	case 3:
	{
	char Name[20];
	cout<<"\t\t\tENTER NAME FOR SEARCHIGN"<<endl;
	gotoxy(24,21);
	cin.ignore();
	cin.getline(Name,19);
	s1.Check_RollNo("1");
	break;
	}
	case 4:
	{
	char Sname[20];
	cout<<"\t\t\tENTER NAME FOR UPDATING"<<endl;
	gotoxy(24,21);
	cin.ignore();
	cin.getline(Sname,19);
	s1.Update_Data("HAMID KHAN");	
	break;
	}	
	case 5:
	{
	char Delet[20];
	cout<<"\t\t\tENTER NAME FOR DELETING"<<endl;
	gotoxy(24,21);
	cin.ignore();
	s1.Delete_Data(Delet);
	break;	
	}	
	case 6:
	return;	
	default:
		cout<<"\t\t\tINVALID CHOICE";	
	}
	Admin_Middle();	
}


//*****************************************************************************************************************//
//***********************************************END***************************************************************//
//*****************************************************************************************************************//
//------------------------------------------------Global Objects--------------------------------------------------------//
				
//-----------------------------------------------------------------------------------------------------------------------//
int main ()
{	
	system("color 2F");
		SetConsoleTitle("----RESULT MANGEMENT SYSTEM BY TECHABBOTT----");
	Introduction();
	system("cls");
	while(1)
	{
	int i =0;
	int size=0;
	char Heading[]="\t\t\t         MAIN MENU   ";
	size=strlen(Heading);
	system("cls");
	{
	}
	cout<<"\n\n\n\t\t\t   --------------------"<<endl;
	for(i=0;i<=size;i++)
	{
		Sleep(10);
		cout<<Heading[i];
		
		
	}
	cout<<"\n";
	cout<<"\t\t\t   --------------------"<<endl;	
	int Choice;	
	cout<<"\n\t\t\t   1:CREATE MATRIC STUDENT RECORED"<<endl;
	cout<<"\n\t\t\t   2:CREATE MIDDLE STUDENT RECORED"<<endl;
	cout<<"\n\t\t\t   3:MATRIC  SECTION"<<endl;
	cout<<"\n\t\t\t   4:MIDDLE SECTION"<<endl;
	cout<<"\n\t\t\t   5:HOW TO USE    "<<endl;
	cout<<"\n\t\t\t   6:EXIT"<<endl;
	cout<<"\n\t\t\t   ENTER YOUR CHOICE(1-3)"<<endl;
	gotoxy(27,20);
	cin>>Choice;
	switch(Choice)
	{
	case 1:
	{
	system("cls");
	s1.Get_Information();
	s1.get_Academic();	
	s1.Check();	
	s1.Calu();
	break;	
	}
//<--------------------------------------------------->//
	case 2:
	{
	system("cls");
	M1.Get_Information();	
	M1.Get_Info_Sub();
	M1.Re_Calc();
	M1.Re_Check();
	M1.Store_Middle();
	break;
	}
//<--------------------------------------------------->//	
	case 3:
	{
	system("cls");
	Admin_Middle();
	break;	
	}
//<--------------------------------------------------->//
	case 4:
	{
	system("cls");
	Admin_Matric();
	break;
	}
//<--------------------------------------------------->//
	case 5:
	{
		system("cls");
		Instructions();
		break;
	}
//<--------------------------------------------------->//
	case 6:
	{	EndFunction();
		exit(0);
	}
	default:
	cout<<"\t\t\tInvalid Choice"<<endl;	
}

//<--------------------------------------------------->//
	
}
getch();
return 0;
}
