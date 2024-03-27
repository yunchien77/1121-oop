//
// Created by 黃漢軒 on 2023/12/7.
//

#include "MailInfo.h"

MailInfo::MailInfo(std::string from, std::string to, std::string mailId){
    this->from = from;
    this->to = to;
    this->mailId = mailId;
}
std::string MailInfo::GetFrom(){
    return this->from;
}
std::string MailInfo::GetTo(){
    return this->to;
}
std::string MailInfo::GetMailId(){
    return this->mailId;
}