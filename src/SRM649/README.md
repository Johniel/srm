# SRM649

## Decipherability
div1 250

同じ文字2つの間を消去すれば特定できなくなる。

    __A__A__ -> __A__

この場合、どちらのAか特定できない

つまり、Kコ以内で消すことのできる箇所を探せばよい。

Kの残りは他の場所で都合よく使えるはず。

文字列長とKが等しい場合のみ例外