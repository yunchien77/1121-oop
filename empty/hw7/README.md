# Homework 07

> 這份作業主要由國立臺北科技大學 109 資工系黃漢軒所命題，若有任何的問題，非常歡迎使用以下的聯絡方式提問：
> Email: t109590031@ntut.org.tw／MS Teams: 黃漢軒／Telegram: @xuan910625

⚠️ Due: 11:59 p.m., 04 / 01 / 2024 ⚠️



## 作業目標

這份作業主要統整前面幾次的課程內容，並製成一份模擬期末考。



## 檔案架構

**請清掉前一次的作業**，確認提交是否符合以下的檔案架構，否則無法進行評分。

```
.
├── CMakeLists.txt
├── LICENSE
├── README.md
├── files.cmake
├── include
│   ├── BoxContainer.hpp
│   ├── Circle.hpp
│   ├── GraphicSystem.hpp
│   ├── IDrawable.hpp
│   ├── Location.hpp
│   ├── Point.hpp
│   ├── ShapeHelper.hpp
│   └── Square.hpp
├── scripts
│   ├── CodeCoverage.cmake
│   └── coverage.sh
├── src
│   ├── Circle.cpp
│   ├── GraphicSystem.cpp
│   └── Square.cpp
└── test
    ├── ut_BoxContainer.cpp
    ├── ut_Circle.cpp
    ├── ut_GraphicSystem.cpp
    ├── ut_ShapeHelper.cpp
    └── ut_Square.cpp
```



## 題目敘述

> 在這份功課中，我們嘗試描述一個繪圖系統（GraphicSystem）。



我們想要實作一個繪圖系統，在這個繪圖系統中，你可以畫圓形也可以畫正方形。



對於每一個圖形，我們有所謂的碰撞箱（BoxContainer），你可以把它想成一個形狀可以被矩形包起來，方便我們計算疊加，如下圖的黑線。



![image](https://hackmd.io/_uploads/Sy1nZJXv6.png)



你將設計一個繪圖系統，能夠支援在一張無限大的畫布上畫上圖形，我們期望這個繪圖系統具有以下的功能：

- 新增圖形。
- 給定一個點，回傳該點所指到的圖形。
- 取得某次新增上去的圖形。
- 計算所有圖形的總面積。

你也同時需要處理以下的情況。

- 新增的圖形不能疊加，需要拋出例外。
- 如果給定某個點，但該點沒有指到某個圖形，則拋出例外。



## 題目任務

### 任務階段一：實作 `Square`、`Circle` 兩種形狀

- `Circle`
  - 實作建構子 `Circle(Location location, int radius)`
    - `location` 為圓心，`radius` 為圓半徑。
  - 實作 Getter `Location GetCenterOfCircle()`
    - 取得圓心的 `Location`
  - 實作 Getter `int GetRadius()`
    - 取得圓半徑。
- `Square`
  - 實作建構子 `Square(Location location, int edge)`
    - `location` 為方形左上角，`edge` 為方形的邊長。
  - 實作 Getter `int GetEdge()`
    - 取得方形邊長。



### 任務階段二：將這兩種形狀實作 `IDrawable` 介面上

- 實作 `double GetArea()`
  - 取得該種形狀的面積。
  - 對於圓形，請使用「半徑 * 半徑 * 3.14」進行計算。
- 實作 `bool IsInShape(Point point)`
  - 確認該點是否落在圖形上。
  - 你可以參考 `ShapeHelper.hpp` 裡面的一些 function 來幫助你完成。
- 實作 `bool IsOverlap(std::shared_ptr<IDrawable> drawable)`
  - 確認該圖形是否與圖形交疊。
  - 你可以參考 `ShapeHelper.hpp` 裡面的一些 function 來幫助你完成。
- 實作 `Point GetLeftTopPoint()`
  - 取得圖形「碰撞箱」左上角的點。
- 實作 `BoxContainer GetBoxContainer()`
  - 取得該圖形的「碰撞箱」。
  - 你可以參考 `BoxContainer.hpp`，其中碰撞箱中的 x 與 y 成員為碰撞箱左上角的點。



### 任務階段三：完成 `GraphicSystem`

- 實作 `GraphicSystem(std::vector<std::shared_ptr<IDrawable>> drawables)`
  - 能夠將多個「可以畫的圖形」放到 `GraphicSystem` 中。
  - 你需要確認這些圖形有沒有重疊，若有，則需要拋出 `std::logic_error` 例外。
- 實作 `void AddShape(std::shared_ptr<IDrawable> drawable)`
  - 能夠新增圖形到 `GraphicSystem` 的動態陣列尾端。
  - 你需要確認這些圖形有沒有重疊，若有，則需要拋出 `std::logic_error` 例外。
- 實作 `std::shared_ptr<IDrawable> GetShape(unsigned int index)`
  - 能夠取得動態陣列中第 `i` 個圖形。
  - 若 `i` 超出陣列長度，你需要拋出例外。
- 實作 `std::shared_ptr<IDrawable> GetShape(unsigned int x, unsigned int y)` 
  - 能夠取得特定某點的圖形。
  - 若該圖形不存在，你需要拋出例外。
- 實作 `double CalculateTotalArea()`
  - 能夠取得所有圖形的總面積。
- 實作 `int Size()`
  - 取得當前繪圖系統具有多少個圖形。



## 任務備註

- [`std::logic_error`](https://en.cppreference.com/w/cpp/error/logic_error)
- 你不需要測試 `ShapeHelper.h` 或 `ShapeHelper.cpp`，只需理解如何使用。



## 作業配分

- ［60%］通過 TA 的測試。
  - 依照測試通過的比例配分。
    - BoxContainer 相關的測試案例：20%
    - Circle 相關的測試案例：15%
    - Square 相關的測試案例：15%
    - GraphicSystem 相關的測試案例：50%
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

![image](https://hackmd.io/_uploads/Sk4GYyQPp.png)

