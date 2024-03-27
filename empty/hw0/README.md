# Homework 00

> 這份作業主要由國立臺北科技大學 109 資工系黃漢軒所命題，若有任何的問題，非常歡迎使用以下的聯絡方式提問：
>
> Email: t109590031@ntut.org.tw／MS Teams: 黃漢軒／Telegram: @xuan910625

⚠️ Due: 11:59 p.m., 25 / 09 / 2023 ⚠️

## 作業目標

這份作業主要希望你能夠熟悉以下的事項，以利於跟進未來課程的發展：

- [x] 【環境與工具】學習如何使用 Git。
- [x] 【環境與工具】學習如何操作 Jenkins 與 GitLab。
- [x] 【環境與工具】學習如何使用 CMake 來編譯與執行目前的專案 


## 參考資料

對於環境建設與熟悉環境，請悉讀以下的資料：

 - [Setting Up SSH Key in GitLab](https://hackmd.io/@OOP2023f/rJNxrCe1T) by ChatGPT
 - [How to use Git](https://hackmd.io/@OOP2023f/BJCyBRSCn) by Huang Zheng
 - [Environment Setup](https://hackmd.io/@OOP2023f/rk2-8cVCh) by Huang Zheng

若你的初始專案含有 `README.md`，請用以下的方法來將作業專案傳至你的專案。

 - [How to deal with `README.md` caused the push rejected](https://hackmd.io/@OOP2023f/r1BlsJ8Ja)

## 檔案架構

請確認提交是否符合以下的檔案架構，否則無法進行評分。

```
.
├── CMakeLists.txt
├── LICENSE
├── README.md
├── files.cmake
├── include
│   └── hello.hpp
├── scripts
│   ├── CodeCoverage.cmake
│   └── coverage.sh
├── src
│   └── hello.cpp
└── test
    ├── ut_hello.cpp
    └── ut_sanity_check.cpp
```

## 題目敘述

 > 嗨，歡迎參加 OOP 課程。
 > 
 > 想必你已經完成了第一週的課程，並已經瞭解這一門課環境相關的設施
 > （若還不了解的話，可以看一下第一週第一堂的簡報）
 > 
 > 期望你可以在這一個功課上更加瞭解作業相關的環境，GL & HF！


給你一個「絕對會通過隱藏測試」的 Hello World 專案範本（在 `homework` 專案上）

請嘗試完成任務，並在 Jenkins 上拿到綠色的 Correct 勾勾。


## 任務敘述

### 任務 1：將專案從 GitLab 上複製

你可以使用 `git clone` 來將專案複製下來。

:warning: 當你使用 `git clone` 時，remote 會是 `homework` 的專案，所以你會需要進行更改。

### 任務 2：將專案的 Remote 更改為自己的專案

考慮你已經有了專案內容，請將專案 Remote 進行修改。

你可以：

 - 使用 `git remote set-url <remote> <url>` 來設定某個 `remote` 的連結。
 - 使用 `git remote get-url <remote>` 來取得某個 `remote` 的連結。
 - 使用 `git remote add <remote> <url>` 來為專案加上某個 `remote`。

例如：`git remote set-url origin some_url`，可以將 `origin` 這個 remote 設上 `some_url`。

### 任務 3：編譯與運行專案

使用 CMake 來編譯，並運行 `./bin/ut_all` 來運行專案。

### 任務 4：推上分支

當你成功更改了專案的 Remote，你可以使用 `git push origin <branch_name>` 來推上分支。

例如：`git push origin master` 可以將當前的專案推上 `master` 分支。

若 origin 並沒有該分支時，GitLab 會幫你建立這個分支。

:warning: 為了可以評測，你必須要在專案上建立名為 master 或 main 的主分支。

### 任務 5：得到 HW 專案的綠勾勾

為了要在 Jenkins 上得到 HW 專案的綠勾勾，你會需要做到：

 1. 通過自己寫的測試
 2. 專案上沒有 Memory Leak 的問題
 3. 專案上的 Test Coverage 大於 95%

Jenkins 會自動逐步幫你確認，若滿足了以上三項，則會給你一個綠色的勾勾。

為了能夠更加瞭解評測系統，請你逐步瞭解 Jenkins 是怎麼確認以上三點。


### 任務 6：得到 TA 專案的綠勾勾

為了要在 Jenkins 上得到 TA 專案的綠勾勾，你會需要做到：

 1. 通過助教寫的測試
 2. 專案上沒有 Memory Leak 的問題

Jenkins 會自動逐步幫你確認，若滿足了以上兩項，則會給你一個綠色的勾勾。

為了能夠更加瞭解評測系統，請你逐步瞭解 Jenkins 是怎麼確認以上兩點。


## 題目評分

 - [100 分] 取得兩個綠勾勾
     - 若在功課截止時依然沒有取得兩個綠勾勾，判定本次功課為 $`0`$ 分。


## 注意事項

 - 你不應該上傳 `/bin` 資料夾至專案上。
   - 你的功課不應該出現 Memory Leak，否則將會扣除作業總分 $`10`$ 分。
   - 你不應該上傳 `/bin` 資料夾至專案庫，編譯結果不應該上傳至專案庫上，若在助教確認功課評分時 `/bin` 資料夾存在在專案庫中，扣除作業總分 $`5`$ 分。


## 作業迷因

![](https://hackmd.io/_uploads/S1Wx2oKRn.png)
