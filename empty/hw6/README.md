# Homework 06

###### tags: `Homework`

> 這份作業主要由國立臺北科技大學 109 資工系黃漢軒所命題，若有任何的問題，非常歡迎使用以下的聯絡方式提問：
> Email: t109590031@ntut.org.tw／MS Teams: 黃漢軒／Telegram: @xuan910625

⚠️ Due: 2023 / 12 / 19 11:59 p.m. ⚠️



## 作業目標

這份作業主要希望你能夠熟悉以下的事項，以利於跟進未來課程的發展：

 - [x] 學習組合相關技巧。
 - [x] 學習介面相關技巧。
 - [x] 瞭解如何使用介面解決相關問題。
 - [x] 瞭解組合與介面相關問題。



## 檔案架構

**請清掉前一次的作業**，確認提交是否符合以下的檔案架構，否則無法進行評分。

```bash
.
include
├── DeliveryResult.h
├── IDeliverable.h
├── MailInfo.h
├── MailSystem.h
├── OrdinaryMail.h
├── PromptDeliveryMail.h
└── RegisteredMail.h
src
├── DeliveryResult.cpp
├── MailInfo.cpp
├── MailSystem.cpp
├── OrdinaryMail.cpp
├── PromptDeliveryMail.cpp
└── RegisteredMail.cpp
test
├── ut_DeliveryResult.cpp
├── ut_MailInfo.cpp
├── ut_MailSystem.cpp
├── ut_OrdinaryMail.cpp
├── ut_PromptDeliveryMail.cpp
└── ut_RegisteredMail.cpp
.gitignore
CMakeLists.txt
files.cmake
```



### 題目敘述

> 在這個任務中，你將嘗試描述郵件管理系統（Mail Management System）。

我們在臺灣的郵件主要可以分成：普通郵件、普通掛號、限時掛號。

對於這些郵件，我們除了知道他是郵件之外，我們也知道：

- 普通郵件有地址、有收件人、有寄件人、但不會有郵件編號。
- 普通掛號有地址、有收件人、有寄件人、也會有郵件編號。
- 限時掛號有地址、有收件人、有寄件人、除了有郵件編號，也有限時時間。

並且，對於掛號信來說，我們得要確保信件能夠交付到收件人的手上，我們需有一個確保交付的 Function 來讓掛號信實作。



在這個作業，你必須要嘗試使用組合與介面來完成一個郵件管理系統（Mail Management System）。

這個郵件管理系統可以以堆疊的方式放入郵件，晚放入的郵件會優先 `POST`，早放入的郵件會較晚 `POST`。

> 不用擔心！你可以假設郵差有無限的時間可以處理所有的郵件，不會有郵件被餓死（Starved）的情況。



這個郵件系統將信件分類成普通郵件與需要確保能夠送達至收件人手上的郵件（也稱作掛號郵件）：

- 對於普通郵件，當郵差送達普通郵件至他人手上時，我們不需要紀錄送達結果。
- 對於掛號郵件，當郵差送達掛號郵件至他人手上時，我們需要得到送達結果，通常為包含寄件人、收件人、郵件號碼與送達日期所組成的資料。

當限時掛號逾期（也就是本來應該在 `2023-12-31` 送達，但郵差在 `2024-01-03` 送達）時，你應該拋出例外。



這些任務當然可以使用繼承來完成，但使用組合與介面能夠讓你瞭解這玩意兒的使用方式，嘗試看看吧！



### 題目任務

> 在這個任務中，我們已經幫你完成了一個介面 `IDeliverable`、兩個類別 `MailInfo` 與 `DeliveryResult`。



### 第一階段：使用組合來完成 `OrdinaryMail`、`PromptDeliveryMail` 與 `RegisteredMail`

- 對於 `OrdinaryMail`
  - 具有類別成員 `MailInfo mailInfo`
  - 具有 `OrdinaryMail(MailInfo mailInfo)` 用於使用 Dependency Injection 來初始化 `mailInfo`。
  - 具有 `MailInfo GetMailInfo()` 用於取得 `MailInfo`。
  - 由於普通郵件不會有編號，所以 `mailInfo` 中的郵件編號 `mailId` 為空。
- 對於 `RegisteredMail`
  - 具有類別成員 `MailInfo mailInfo`。
  - 具有 `RegisteredMail(MailInfo mailInfo)` 用於使用 Dependency Injection 來初始化 `mailInfo`。
  - 具有 `MailInfo GetMailInfo()` 用於取得 `MailInfo`。
- 對於 `PromptDeliveryMail`
  - 具有類別成員 `MailInfo mailInfo`。
  - 具有 `PromptDeliveryMail(MailInfo mailInfo, std::string promptDeliveryDate)` 
    - 用於使用 Dependency Injection 來初始化 `mailInfo`。
    - `promptDeliveryDate` 為限時的日期。
  - 具有 `MailInfo GetMailInfo()` 用於取得 `MailInfo`。



### 第二階段：使用介面來規範 `PromptDeliveryMail` 與 `RegisteredMail` 具有 `Delivery` 函式

- 讓 `PromptDeliveryMail` 與 `RegisteredMail` 實作 `IDeliverable` 介面。
- `PromptDeliveryMail` 應實作 `IDeliverable` 中的 `virtual DeliveryResult Delivery(std::string date) = 0;`。
  - 傳入一個送達日期 `date`。
  - 如果送達日期晚於 `promptDeliveryDate`，你應該要拋出 `std::invalid_argument` 例外。
  - 回傳 `DeliveryResult` 物件，包含郵件資訊 `mailInfo` 與送達日期 `deliveryDate`。
- `RegisteredMail` 應實作 `IDeliverable` 中的 `virtual DeliveryResult Delivery(std::string date) = 0;`。
  - 回傳 `DeliveryResult` 物件，包含郵件資訊 `mailInfo` 與送達日期 `deliveryDate`。



### 第三階段：實作 `MailSystem`

- 具有成員 `std::vector<OrdinaryMail> ordinaryMailStorage` 用於儲存普通信件的 `vector`。
- 具有成員 `std::vector<std::shared_ptr<IDeliverable>> deliverableMailStorage` 用於儲存掛號信件的 `vector`。
- 實作 `void AddOrdinaryMail(OrdinaryMail mail)` 用於新增普通郵件至 `ordinaryMailStorage` 的尾端。
- 實作 `void AddDeliverableMail(std::shared_ptr<IDeliverable> deliverableMail)` 用於新增掛號郵件至 `deliverableMailStorage` 的尾端。
- 實作 `void PostOrdinaryMail()`
  - 當作寄送普通信件到收件者上。
  - 你不用儲存任何資訊，直接將該信件從 `ordinaryMailStorage` 的尾端 `pop` 掉（你可以使用 `vector` 中的 `pop_back()`）
- 實作 `DeliveryResult PostDeliverableMail(std::string date)`
  - 當作寄送掛號信件到收件者上，呼叫信件的 `Delivery` 函數。
  - 將該信件從 `deliverableMailStorage` 的尾端 `pop` 掉（你可以使用 `vector` 中的 `pop_back()`）
  - 你需要紀錄郵件資訊與送達日期，包成 `DeliveryResult` 並回傳。
  - 如果限時掛號太晚送到要拋出 `std::invalid_argument` 例外。
- 實作 `size_t GetOrdinaryMailSize()` 以取得目前用於儲存普通信件的 `Stack` 有多少封信。
- 實作 `size_t GetDeliverableMailSize()` 以取得目前用於儲存掛號信件的 `Stack` 有多少封信。



## 任務備註

- 如果你需要判斷時間是否太晚，你可以單純使用字串字典序來判斷，也就是
  ```c++
  "2023-01-03" < "2024-12-31" // true
  "2024-01-03" < "2023-12-31" // false
  ```
- [`std::invalid_argument` 的資料](https://en.cppreference.com/w/cpp/error/invalid_argument)



## 作業配分

- ［60%］通過 TA 的測試。
  - 依照測試通過的比例配分。
    - OrdinaryMail 相關的測試案例：10%。
    - PromptDeliveryMail 相關的測試案例：10%。
    - RegisteredMail 相關的測試案例：10%。
    - MailSystem 相關的測試案例：70%。
  - 取得綠色勾勾，每個測試皆通過。
  - 沒有 Memory Leak 的問題。
- ［40%］完成測試覆蓋率任務。
  - 確保測試覆蓋率（Line Coverage）達到 95%。



## 注意事項

- 若你想要有空指標，請將指標賦值（assign） `nullptr` ，這個特殊的指標可用於指向不存在的東西。
- 對於 Google Test 的測試函數：
  - 使用 `ASSERT_EQ` 來測試不會有精度誤差的值（例如：整數、字串等）
  - 使用 `ASSERT_NEAR` 來測試具有精度的值
  - 使用 `ASSERT_THROW` 來測試該函數會不會拋出例外
  - 使用 `ASSERT_FALSE` 來測試該值是否為 `false`
- 你不應該上傳 `bin` 資料夾至專案上。
  - 你的功課不應該出現 Memory Leak，否則將會扣除作業總分 10 分。
  - 你不應該上傳 `/bin` 資料夾至專案庫，編譯結果不應該上傳至專案庫上，若在助教確認功課評分時 `/bin` 資料夾存在在專案庫中，扣除作業總分 5 分。
- 你可以使用 `debugger` 工具來進行除錯，有利於尋找漏洞與理解漏洞為何會發生。



## Meme

![](https://hackmd.io/_uploads/BJ_b__lLT.png)

