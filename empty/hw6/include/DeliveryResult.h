//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef MAILMANAGEMENTSYSTEM_DELIVERYRESULT_H
#define MAILMANAGEMENTSYSTEM_DELIVERYRESULT_H

#include <string>

#include "MailInfo.h"

class DeliveryResult {
private:
    MailInfo mailInfo;
    std::string deliveryDate;
public:
    DeliveryResult(MailInfo mailInfo, std::string deliveryDate);
    MailInfo GetMailInfo();
    std::string GetDeliveryDate();
};

#endif //MAILMANAGEMENTSYSTEM_DELIVERYRESULT_H
