# 基本構文
## 式
- 式
```c
式;
int a = 1 + 1;
```

- オブジェクト
  - 文字
     - 文字(char)
     - 文字列(char[])
  ```c
  'a';
  "abc";
  ```

- 変数宣言
```c
データ型 変数名;
int num;
```

- 関数呼び出し
```c
関数名(引数) ... ;
printf("HelloWorld");
```

## 定義
- ライブラリ
```c
#include <ライブラリ名>
```

- 関数
  - 戻り値や引数がない場合は、voidを指定する
```c
戻り値のデータ型 関数名 ( 引数のデータ型 引数, ..) {
  処理;
  return 戻り値;
}
```

## 条件分岐
- endがない点に注意

### if
```c
if (条件式) 処理;
if (条件式) {
  処理;
}

if (式) {
  if処理;
} else if (条件式) {
  elsif処理;
} else {
  else処理;
}
```

### case
- case ~ / ~ when ~ではなく、switch ~ / case: ~  ~
- breakを書かないと抜け出せない
  - switch文がそもそもcaseにジャンプさせるだけの構文のため
- 最後はelseではなくdefault:
- case 値:を連続で書くことで、複数条件を表現出来る
  - breakがないとそのまま処理されるため
```c
switch (条件式) {
  case 値:
    処理;
    break;
  case 値:
  case 値2:
    処理;
    break;
    ...
  default:
}
```

## ループ処理
### for