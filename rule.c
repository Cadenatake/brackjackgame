#include "head.h"
void rule(){
	printf("最初に所持しているコインは100枚です。ベット可能な枚数は10～Max を用意で、コインが無くなった場合はゲーム終了です。以下がその配当表です。\n\t\t\tベット\t配当\t結果\n負け\t\t\t1\t没収\n勝ち\t\t\t1\t1\t1\nブラックジャック\t1\t1.5\t2.5\nスリーセブン\t\t1\t3\t4\nシックスアンダー\t1\t2\t3\nセブンアンダー\t\t1\t2.5\t3.5\nイレブンカード\t\t1\t99\t100\n役として挙げた 4 つを詳しく説明すると、ブラックジャックとは、最初に配られた手札 2 枚の時点でカードの合計が 21 となっていることを指す。スリーセブンとは、7 が 3 枚でカードの合計が 21 となっていることを指す。シックスアンダーとは、カードを引き続け、手札が 6 枚になっても合計が 21 を超えていない場合を指す。セブンアンダーとは、カードを引き続け、手札が 7 枚になっても合計が 21 を超えていない場合を指す。イレブンカードとは、11 枚カードを引いても、合計が 21 を超えない場合を指す。\n\n");
}