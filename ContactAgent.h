#include "Services.h"

class ContactAgent: public Services {

    private:
        int agentID;
        char receiveDate;
        char responseDate;

    public:
        ContactAgent();
        ContactAgent(char MS_Name[], int agent_ID, char receive_Date, char response_Date);
        void setContactAgentDetails(char MSame[],int ag_ID, char rec_Date, char resp_Date);
        void displayContactDetails();
        ~ContactAgent();
};