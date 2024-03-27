//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H
#define MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H

#include <string>

#include "MailInfo.h"
#include "IDeliverable.h"

class PromptDeliveryMail {
private:
    MailInfo mailInfo;
    std::string promptDeliveryDate;
public:
    PromptDeliveryMail(MailInfo mailInfo, std::string promptDeliveryDate);
    virtual ~PromptDeliveryMail() = default;
    MailInfo GetMailInfo();
};

#endif //MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H
