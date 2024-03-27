//
// Created by 黃漢軒 on 2023/12/7.
//

#include <stdexcept>

#include "DeliveryResult.h"
#include "MailInfo.h"
#include "PromptDeliveryMail.h"

PromptDeliveryMail::PromptDeliveryMail(MailInfo mailInfo, std::string promptDeliveryDate) : mailInfo(mailInfo) {
}

MailInfo PromptDeliveryMail::GetMailInfo(){
}

DeliveryResult PromptDeliveryMail::Delivery(std::string date) {

}