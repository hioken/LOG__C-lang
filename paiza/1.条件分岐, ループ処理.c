## 条件分岐
〇if
・rubyのように複数条件を指定も可能
～入れ子～
if (条件) {
  処理;
} else if (条件2) {
  処理;
} else {
  処理;
}

～行～
if(条件) 処理;

～三項演算子～
条件式 ? trueの処理 : falseの処理


〇switch
・break;を設定しないと、swich文が全て読み込まれてしまう
switch (式) {
  case 式の結果:
    処理;
    break;

  case 式の結果2:
    処理;
    break;
}



## ループ処理
〇while
・条件がtrueの間、ループ処理を行う
while (条件) {
  処理;
  カウンタ変数の更新;
}

〇for
・条件がtrueの間、ループ処理を行う
・カウンタの初期化, 条件式, カウンタ変数の更新を一気に記述出来る
for (カウンタ変数の初期化; 条件; カウンタ変数の更新) {
  処理;
}
