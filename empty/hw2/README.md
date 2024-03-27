# Homework 02

###### tags: `Homework`

> 這份作業主要由國立臺北科技大學 109 資工系黃漢軒所命題，若有任何的問題，非常歡迎使用以下的聯絡方式提問：
>
> Email: t10950031@ntut.org.tw／MS Teams: 黃漢軒／Telegram: @xuan910625

⚠️ Due: 11:59 p.m., 22 / 10 / 2023 ⚠️

## 作業目標

這份作業主要希望你能夠熟悉以下的事項，以利於跟進未來課程的發展：

 - [x] 瞭解如何使用 Git（嘗試加入檔案與增加版本）
 - [x] 瞭解 Class 的使用方式
 - [x] 瞭解 STL 的使用方式 
 - [x] 瞭解如何撰寫 Google Tests 
 - [x] 瞭解環境相關建設

## 檔案架構

請**清掉前一次的作業**，確認提交是否符合以下的檔案架構，否則無法進行評分。

```
.
│   .clang-format
│   .gitignore
│   CMakeLists.txt
│   files.cmake
│   LICENSE
│   README.md
│
├───include
│       storage.hpp
│
├───scripts
│       CodeCoverage.cmake
│       coverage.sh
│
├───src
│       storage.cpp
│
└───test
        ut_storage.cpp
```

## 題目敘述

> 在這個任務中，你將描述 Uriah 的糧食庫 `Storage`。

Uriah 住在中山區的一間小雅房，身為一個平日不是在朝九晚六實習，不然就是在努力精煉自己能力的資工大四生，每天凌晨夜深人靜的小確幸，不外乎就是打開糧食庫並拿點東西吃，接著繼續忙。

Uriah 的糧食庫可能有許多點心，例如：泡麵、餅乾、御飯糰、冰7林、*飛天義大利麵*、*新生高架橋*、*大直河濱公園的河水*、*長春松江路口的公車站*、*捷運行天宮站*等等，這些多樣性的糧食能夠有助於 Uriah 在吃完這些點心後充足了一些精力並繼續忙手邊的事情。

給你一個糧食庫 `Storage` 類別，在這個 `Storage` 類別中，你應該要將這些零食藉由建構子初始化，並且實作多個函式來取得這個糧食庫的屬性，例如：當點心被加入這個糧食庫時，我們在糧食庫中分配一個位置給這個點心，我們希望這個糧食庫可以取得特定位置的點心、可重新擺放點心至特定位置、且當點心被吃掉時該位置依然保留，並且希望可以取得該糧食庫目前的長度為何。

由於 Uriah 半夜如果發現糧食庫壞掉了，會把你這次的功課分數當作零食吃掉，為了避免這件事情發生，你還必須寫單元測試來防止這個糧食庫壞掉。如果你將糧食庫設計好，給了 Uriah 非常好糧食庫，它將會覺得非常開心並在這次功課給了你全部的分數，如果沒有的話，它會非常飢餓並把你的分數按照比例吃掉，所以請務必完成以下的子任務。


## 任務敘述

### 第一部分：完成 `Storage` 類別，使類別包含以下的成員。

 - `std::vector<std::string> storage`
     - 用於儲存點心的一個 vector。
     - 見 [cplusplus - vector](https://cplusplus.com/reference/vector/vector/) 來更加瞭解 `std::vector`。


### 第二部分：完成 `Storage` 類別，使類別包含以下的建構子。

 - `Storage(int n, std::string snacks[])`
     - 用於初始化 `storage`，傳入陣列長度與字串陣列。

 - `Storage(std::vector<std::string> snacks)`
     - 用於初始化 `storage`，傳入一個 vector。

### 第三部分：完成 `Storage` 類別，使類別包含以下的函式。

 - `void Add(std::string snack)`
     - 用於新增一個新的點心至 `storage`。

 - `void Set(size_t index, std::string snack)`
     - 用於設定一個新的點心至 `index` 的位置上，其中 `index` 從 `0` 開始。
     - 如果 `index` 大於 `storage` 的長度，則不做任何動作（Cancellation）。


 - `std::string Get(size_t index)`
     - 用於取得在 `index` 位置上的點心。
     - 如果該位置的點心不存在，或者 `index` 大於 `storage` 的長度，則回傳空字串。

 - `void Eat(size_t index)`
     - 用於吃掉在 `index` 位置上的點心。
     - 將該位置的點心設為空字串。
     - 如果 `index` 大於 `storage` 的長度，則不做任何動作（Cancellation）。

 - `size_t Size()`
     - 取得這個 `storage` 長度有多大。

### 第四部分：撰寫測試，並確認類別中的所有函式都能夠被測試到。

 - 你可以從以下幾個點去考慮如何測試你的 Storage 是好的：
     - 撰寫測試，使用建構子來建立物件，並確定初始化進去的點心數量是正確的。
     - 撰寫測試，建立物件後，取得特定位置的點心。
     - 諸如此類，思考如何測試比較好 :D
 - 如果你還不熟悉怎麼撰寫測試，你可以查看 `test/ut_storage.cpp` 來取得測試範例。

### 第五部分：在 Jenkins 上取得兩個 Job 的綠色勾勾。

 - 在 [jenkins.is1ab.com](http://jenkins.is1ab.com) 通過助教的隱藏測試並取得兩個綠色勾勾。
 - 請確保你的測試覆蓋率（Line Coverage）達到 95%。



## 作業配分

- ［55%］通過 TA 的測試。
  - 取得綠色勾勾，每個測試皆通過。
  - 沒有 Memory Leak 的問題。
- ［45%］完成測試覆蓋率任務
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



## 作業迷因

![](https://hackmd.io/_uploads/BkOWrvHJT.png)

![](https://hackmd.io/_uploads/BkUV_wrJT.png)
