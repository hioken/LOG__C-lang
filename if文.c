〇条件分岐まとめ
- 条件にあっている場合のみ処理
  ・処理が一つ / 単純
    if (条件) 処理1; 処理2;
  ・処理が複数 / 複雑
    if (条件) {
      処理1;
      処理2;
    }

- 条件を満たしていない場合の処理も必要
  ・引数のみを分岐させたい場合
    printf("%d", (条件)? true の処理 : false の処理); // 引数部に記述
  ・通常
    if (条件) {
      処理;
    } else {
      処理;
    }

- 条件が複数ある
  ・条件によって何通りか分岐する場合、処理が複雑な場合
    if (条件) {
      処理;
    } else if (条件2) {
      処理;
    } else {
      処理;
    }
  ・変数の中身や結果によって多くの分岐して、処理が単純な場合
    switch(条件)
      case 条件の結果1:
        処理;
        break;
      case 条件の結果2:
        処理;
        break;
      default:
        elseの処理;
    }
