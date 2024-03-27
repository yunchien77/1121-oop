//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef OOP_IDELIVERYABLE_H
#define OOP_IDELIVERYABLE_H

#include "DeliveryResult.h"

class IDeliverable {
public:
    virtual DeliveryResult Delivery(std::string date) = 0;
};

#endif //OOP_IDELIVERYABLE_H
