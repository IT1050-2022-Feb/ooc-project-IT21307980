#include "Services.h"

class MailUs : public Services {

  private:
      int mailID;
      char responseDate[12];
      char receiveDate[12];

  public:
      MailUs();
      MailUs(char MS_Name[], int m_ID, char res_Date[], char rec_Date[]);
      void setMailUsDetails(char service[], int mail_ID, char response_Date, char receive_Date);
      void displayDetails();
      ~MailUs();
};
