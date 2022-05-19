#include<iostream>
#include "MailUs.h"
#include <cstring>
using namespace std;


MailUs::MailUs()
{
  int mailID = 0;
  char responseDate[12];
  char receiveDate[12];
}

MailUs(char MS_Name[], int m_ID, char res_Date[], char rec_Date[])
{
  strcpy (serviceName,MS_Name)
  mailID = m_ID;
  strcpy (responseDate, res_Date);
  strcpy (receiveDate, rec_Date);
}

void MailUs:: setMailUsDetails(char service[], int mail_ID, char response_Date, char receive_Date)
{
  strcpy (serviceName,service);
  mailID = mail_ID;
  strcpy(responseDate, response_Date);
  strcpy(receiveDate, receive_Date);
  
}

void ContactAgent::displayContactDetails()
{
  cout <<"Mail ID : "<< mailID <<" "
       <<"Received Date : "<< receiveDate <<" "
       <<"Responsed Date : "<< responseDate ;
}

MailUs::~MailUs()
{
  cout << "Mail deleted"<<endl;
}