# Homework 03

> 這份作業主要由國立臺北科技大學 109 資工系黃漢軒所命題，若有任何的問題，非常歡迎使用以下的聯絡方式提問：
> Email: t109590031@ntut.org.tw／MS Teams: 黃漢軒／Telegram: @xuan910625

⚠️ Due: 11:59 p.m., 06 / 11 / 2023 ⚠️


## 作業目標

這份作業主要希望你能夠熟悉以下的事項，以利於跟進未來課程的發展：

 - [x] 學習封裝相關技巧。
 - [x] 瞭解封裝相關知識與其安全性。
 - [x] 瞭解如何使用封裝進行解決方案的設計。
 - [x] 瞭解如何使用繼承進行解決方案的設計。
 - [x] 更加瞭解類別的設計。

## 檔案架構

**請清掉前一次的作業**，確認提交是否符合以下的檔案架構，否則無法進行評分。

```
.
├── CMakeLists.txt
├── files.cmake
├── include
│   ├── Bus.hpp
│   ├── ElectricBus.hpp
│   ├── GasBus.hpp
│   └── MaglevBus.hpp
├── scripts
│   ├── CodeCoverage.cmake
│   └── coverage.sh
├── src
│   ├── Bus.cpp
│   ├── ElectricBus.cpp
│   ├── GasBus.cpp
│   └── MaglevBus.cpp
└── test
    ├── ut_electricity_bus.cpp
    ├── ut_gas_bus.cpp.cpp
    └── ut_maglev_bus.cpp
```

## 題目敘述

> 在這個任務中，你將嘗試描述公車管理系統（Bus Management）

身為北科大的學生，你也許會選擇公車通勤，或者選擇捷運通勤。

Uriah，一個北科大的大四資工系學生，由於對於公車系統感到非常的入迷。

Uriah 基本上去北科都搭松江新生幹線、去市政府搭 967，就連去板橋這種遠到不行的地方都會搭 801 轉 805，很堅持不搭捷運，可能甚至比臺北人更熟公車怎麼搭。

在資工系畢業後從事撰寫公車系統的後端工程師，他需要描述三種不同的公車，這三種公車會有不同的票價與特性，也有共同之處。

 - 汽油公車：主要需要知道目前公車的汽油量，路線名稱，以及經過的路線站牌。
 - 電動公車：主要需要知道目前公車的電量，路線名稱，以及經過的路線站牌。
 - 磁浮公車：主要需要知道目前公車的電量，路線名稱，以及經過的路線站牌。

你身為一個後端工程師，你也同時需要維護這些公車的票價，這些公車由於使用的能源不同，所以他們也有不同的計價方式。

 - 汽油公車：基本計費：30 個站牌內為 450 元，之後每個站牌加收 5 元。
 - 電動公車：基本計費：20 個站牌內為 150 元，之後每個站牌加收 10 元。
 - 磁浮公車：基本計費：10 個站牌內為 750 元，之後每個站牌加收 15 元。

因此，你也需要額外幫這些公車寫一個計費函數透過輸入乘客搭乘的站牌數量，來取得計費。
我們預期公車基本上都是限速 40 公里 / 小時，但磁浮公車有不同的限速。

 - 汽油公車、電動公車：基本限速 40 公里 / 小時。
 - 磁浮公車：基本限速 80 公里 / 小時。

因此，你會需要撰寫一個取得限速的函數，使其預設回傳 40 公里，並針對磁浮公車進行特設。

## 任務敘述

### 第一部分：完成 `Bus` 類別，並使 `Bus` 類別具有以下的 public member

 - `Bus(std::vector<std::string> stops, std::string routeName)`
     - Bus 類別的建構子
     - `stops`：以字串 vector 製成的站牌 vector。
     - `routeName`：公車路線名稱。
 - `void setStops(std::vector<std::string> stops)`
     - Setter，設定站牌 vector。
 - `void setRouteName(std::string routeName)`
     - Setter，設定路線名稱。
 - `std::vector<std::string> GetStops()`
     - Getter，取得站牌 vector。
 - `std::string GetRouteName()`
     - Getter，取得路線名稱。
 - `unsigned short GetSpeedLimit()`
     - Getter，用來回傳公車的限速。
 - `unsigned int GetPrice(int stopNumber) = 0`
     - Getter，用來回傳公車的價格，以經過的站牌進行計算。

### 第二部分：完成 `GasBus` 類別，並使 `GasBus` 類別具有以下的 public member

 - `GasBus(std::vector<std::string> stops, std::string routeName, unsigned int gas)`
     - GasBus 類別的建構子
     - `stops`：以字串 vector 製成的站牌 vector。
     - `routeName`：公車路線名稱。
     - `gas`：公車剩餘油量。
 - `void setStops(std::vector<std::string> stops)`
     - Setter，設定站牌 vector。
 - `void setRouteName(std::string routeName)`
     - Setter，設定路線名稱。
 - `std::vector<std::string> GetStops()`
     - Getter，取得站牌 vector。
 - `std::string GetRouteName()`
     - Getter，取得路線名稱。
 - `unsigned int GetGas()`
     - Getter，取得公車剩餘油量。
 - `void SetGas(unsigned int gas)`
     - Setter，設定公車剩餘油量。
 - `unsigned short GetSpeedLimit()`
     - Getter，用來回傳公車的限速。
 - `unsigned int GetPrice(int stopNumber)`
     - Getter，用來回傳公車的價格，以經過的站牌進行計算。

### 第三部分：完成 `ElectricBus` 類別，並使 `ElectricBus` 類別具有以下的 public member

 - `ElectricBus(std::vector<std::string> stops, std::string routeName, unsigned short electricityPercentage)`
     - ElectricBus 類別的建構子。
     - `stops`：以字串 vector 製成的站牌 vector。
     - `routeName`：公車路線名稱。
     - `electricityPercentage`：公車的電量。
         - 傳入的電量應為百分比，因此傳入的數值應介於 0 至 100。
         - 若傳入的電量不在這個範圍，應拋出 `invalid_argument` 例外。
 - `void setStops(std::vector<std::string> stops)`
     - Setter，設定站牌 vector。
 - `void setRouteName(std::string routeName)`
     - Setter，設定路線名稱。
 - `std::vector<std::string> GetStops()`
     - Getter，取得站牌 vector。
 - `std::string GetRouteName()`
     - Getter，取得路線名稱。
 - `unsigned short GetElectricityPercentage()`
     - Getter，取得公車的電量。
 - `void SetElectricityPercentage(unsigned short electricity)`
     - Setter，設定公車的電量。
         - 傳入的電量應為百分比，因此傳入的數值應介於 0 至 100。
         - 若傳入的電量不在這個範圍，應拋出 `invalid_argument` 例外。
 - `unsigned short GetSpeedLimit()`
     - Getter，用來回傳公車的限速。
 - `unsigned int GetPrice(int stopNumber)`
     - Getter，用來回傳公車的價格，以經過的站牌進行計算。

### 第四部分：完成 `MaglevBus` 類別，並使 `MaglevBus` 類別具有以下的 public member

 - `MaglevBus(std::vector<std::string> stops, std::string routeName, unsigned short electricityPercentage)`
     - MaglevBus 類別的建構子。
     - `stops`：以字串 vector 製成的站牌 vector。
     - `routeName`：公車路線名稱。
     - `electricityPercentage`：公車的電量。
         - 傳入的電量應為百分比，因此傳入的數值應介於 0 至 100。
         - 若傳入的電量不在這個範圍，應拋出 `invalid_argument` 例外。
 - `void setStops(std::vector<std::string> stops)`
     - Setter，設定站牌 vector。
 - `void setRouteName(std::string routeName)`
     - Setter，設定路線名稱。
 - `std::vector<std::string> GetStops()`
     - Getter，取得站牌 vector。
 - `std::string GetRouteName()`
     - Getter，取得路線名稱。
 - `unsigned short GetElectricityPercentage()`
     - Getter，取得公車的電量。
 - `void SetElectricityPercentage(unsigned short electricity)`
     - Setter，設定公車的電量。
         - 傳入的電量應為百分比，因此傳入的數值應介於 0 至 100。
         - 若傳入的電量不在這個範圍，應拋出 `invalid_argument` 例外。
 - `unsigned short GetSpeedLimit()`
     - Getter，用來回傳公車的限速。
 - `unsigned int GetPrice(int stopNumber)`
     - Getter，用來回傳公車的價格，以經過的站牌進行計算。

### 第五部分：撰寫測試，並確認類別中的所有函式都能夠被測試到。

 - 撰寫測試來測試你的 `Bus`、`GasBus`、`ElectricBus` 與 `MaglevBus` 類別。
 - 確保你的 `Line Coverage` 大於 `95%`。
 
### 第六部分：在 Jenkins 上取得兩個 Job 的綠色勾勾。

 - 在 [jenkins.is1ab.com](http://jenkins.is1ab.com) 通過助教的隱藏測試並取得兩個綠色勾勾。

## 任務備註

 - 你可以自己抉擇要怎麼繼承。
     - 有很多有趣的繼承方式，你可以自己想看看。
 - 有很多公車類別
     - 想一下 `Bus` 類別存在的重要性。
 - 對於 GetSpeedLimit() 我們有一個預設值
     - 你應該要抉擇應該要用虛擬函數或純虛擬函數。
 - 對於 GetPrice() 每個公車都不一樣
     - 你應該要抉擇應該要用虛擬函數或純虛擬函數。
 - 對於 `invalid_argument`，他是 `stdexcept` 的例外類別
     - 你可以用 `throw std::invalid_argument()` 來拋出例外。

## 作業配分

- ［60%］通過 TA 的測試。
  - 依照測試通過的比例配分。
      - GasBus 相關的測試案例：33%。
      - ElectricBus 相關的測試案例：34%。
      - MaglevBus 相關的測試案例：33%。
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
- 你不應該上傳 `/bin` 資料夾至專案上。
  - 你的功課不應該出現 Memory Leak，否則將會扣除作業總分 $10$ 分。
  - 你不應該上傳 `/bin` 資料夾至專案庫，編譯結果不應該上傳至專案庫上，若在助教確認功課評分時 `/bin` 資料夾存在在專案庫中，扣除作業總分 $5$ 分。
- 你可以使用 `debugger` 工具來進行除錯，有利於尋找漏洞與理解漏洞為何會發生。