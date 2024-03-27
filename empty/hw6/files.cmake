set(SRC_FILES
    OrdinaryMail.cpp
    PromptDeliveryMail.cpp
    RegisteredMail.cpp
    MailSystem.cpp
    MailInfo.cpp
    DeliveryResult.cpp
)

set(INCLUDE_FILES
    IDeliverable.h
    DeliveryResult.h
    OrdinaryMail.h
    PromptDeliveryMail.h
    RegisteredMail.h
    MailInfo.h
    MailSystem.h
)

set(TEST_FILES
    ut_DeliveryResult.cpp
    ut_MailInfo.cpp
    ut_OrdinaryMail.cpp
    ut_PromptDeliveryMail.cpp
    ut_RegisteredMail.cpp
    ut_MailSystem.cpp
)
