//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef MAILMANAGEMENTSYSTEM_REGISTEREDMAIL_H
#define MAILMANAGEMENTSYSTEM_REGISTEREDMAIL_H

#include <string>

#include "MailInfo.h"
#include "IDeliverable.h"

class RegisteredMail  {
private:
    MailInfo mailInfo;
public:
    RegisteredMail(MailInfo mailInfo);
    virtual ~RegisteredMail() = default;
    MailInfo GetMailInfo();
};

#endif //MAILMANAGEMENTSYSTEM_REGISTEREDMAIL_H
