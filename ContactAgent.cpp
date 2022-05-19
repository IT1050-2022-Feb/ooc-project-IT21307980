#include "ContactAgent.h"
#include <iostream>
#include <cstring>
using namespace std;

ContactAgent::ContactAgent()
{
  
}
ContactAgent::ContactAgent(char MS_Name[], int agent_ID, char receive_Date, char response_Datee)
{
  strcpy (sname, MS_Name)
  agentID = agent_ID;
  strcpy(responseDate, response_Date);
  strcpy(receiveDate, receive_Date);
}
void ContactAgent:: setContactAgentDetails(char MSame[],int ag_ID, char rec_Date, char resp_Date)
{
  strcpy (sname, MSName);
  ag_ID = agent_ID;
  strcpy(responseDate, resp_Date);
  strcpy(receiveDate, rec_Date);
}

void ContactAgent::displayContactDetails()
{
  cout <<"Agent ID : "<< agentID <<" "
       <<"Received Date : "<< receiveDate <<" "
       <<"Responsed Date : "<< responseDate ;
}

ContactAgent::~ContactAgent()
{
  
}