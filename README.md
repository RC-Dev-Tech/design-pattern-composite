# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Composite 合成模式
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 目的
將物件以樹狀結構組織起來，並對單個物件和組合物件進行統一處理。

---

## 使用時機
當需要以樹狀結構來組織物件，並對單個物件和組合物件進行統一處理時，可以使用Composite Pattern。<br>

---

## URL結構圖
![](https://drive.google.com/uc?id=1MMDRmFu1dUKPJkOWAFXz6rJGWIwlly6O)
> 圖片來源：[Refactoring.Guru - Composite](https://refactoring.guru/design-patterns/composite) 

---

## 實作成員
* Component
  * 定義了單個物件和組合物件的通用介面。
* Leaf
  * 表示單個物件，實現Component介面。
* Composite
  * 表示組合物件，實現Component介面，並且可以添加和移除子部件。
* Client
  * 通過Component介面操作單個物件和組合物件，而不需要知道具體實現類別的細節。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/design-pattern-composite/blob/main/C%2B%2B/main.cpp) - Prototype Pattern (C++)

---

## 參考資料
* [Wiki - Composite Pattern](https://en.wikipedia.org/wiki/Composite_pattern) <br>
* [Refactoring.Guru - Composite](https://refactoring.guru/design-patterns/composite) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
