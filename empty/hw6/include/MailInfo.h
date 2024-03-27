//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef OOP_MAILINFO_H
#define OOP_MAILINFO_H

#include <string>

class MailInfo {
private:
    std::string from;
    std::string to;
    std::string mailId;
public:
    MailInfo(std::string from, std::string to, std::string mailId = "");
    std::string GetFrom();
    std::string GetTo();
    std::string GetMailId();
};

#endif //OOP_MAILINFO_H
