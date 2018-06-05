# Board1
Getting Started Programming Series 1


「プログラム事始め」シリーズ　その1です。  
C言語です。


ボード上の自分（アスタリスク）を移動するゲーム（ふう）です。  
なるべく簡単なプログラムにすべくめっちゃカッコ悪いです。  
（見てくれはもちろん移動方向入力後にエンターキーを押すとか、  
　画面再描画にシェルのclearコマンド使うとか）  


ただ2次元配列とか、関数とか、プログラムの考え方とか、  
プログラム事始めとしてはなかなかいい題材ではないかと、  
自己満足中です。（ちょっとした手直し改造で膨らませそうだし）  


【実行環境】  
Linuxというかシェル。  
（clearコマンド必須）  
あとCコンパイラ。  


【コンパイル】  
特別なライブラリとかは必要ありません。  
cc -o board1 board1.c  


【実行】  
./board1  


【あそびかた】  
実行するとタテ11×ヨコ23の  
ボード(?)が表示されます。  
アスタリスクが自分です。  
最初は真ん中にいます。  
次の数字を入力してエンターキーを押すと、  
アスタリスクが移動します。  
2：下  
8：上  
6：右  
4：左  
ボードの端までいくとそれ以上は進めません。  
数字は連続して入力することができます。  
「8862442」と入力すると、  
「上上右下左左下」と進みます。  
（ボード端にぶつからなければ、  
　現在位置の左隣り）  
終了はctrl+Cで。  


【ボードの大きさ】  
>/* Board Size */  
>#define tate 11  
>#define yoko 23  

の部分のtate, yokoを  
変更してコンパイルすれば、  
ボードの大きさを変更できます。  
真ん中のために奇数奨励。  
