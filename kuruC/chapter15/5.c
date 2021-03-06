〇宣言方法
データ型 *変数;
例: int *hensu1, *hensu2;
または
データ型* 変数; // この書きかただと、複数のポインタを宣言できないので、前者が一般的

〇アドレスの代入例
int *p;
int i;
p = &i;

〇nullポインタ
・ポインタ変数を宣言した時に、その変数のアドレスにたまたま入っていた数値がアドレスとして認識されないように、NULLポインタが用意されている
int *p = NULL; 又は int *p = 0;で、宣言できる

〇ポインタ変数に記憶されたアドレスを参照
・*を付けることでRUDできる
p = *hensu;
*p = *p++;

〇宣言とRUD用の+
・実はポインタ変数宣言時の*と、ポインタ変数を通常変数として使うための*には何も関係がなく、たまたま同じ記号を使っているだけ
