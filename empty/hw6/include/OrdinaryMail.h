//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef MAILMANAGEMENTSYSTEM_ORDINARYMAIL_H
#define MAILMANAGEMENTSYSTEM_ORDINARYMAIL_H

#include <string>

#include "MailInfo.h"

class OrdinaryMail {
private:
    MailInfo mailInfo;
public:
    OrdinaryMail(MailInfo mailInfo);
    MailInfo GetMailInfo();
};

#endif //MAILMANAGEMENTSYSTEM_ORDINARYMAIL_H
