# SRM607

## Div1

## Div2
250-500-1000

### BoundingBox
各軸と平行な線分ということはX座標とY座標の最大と最小をみればいい

### PalindromicSubstringsDiv2
書くだけ

### CombinationLockDiv2
区間の両端とその区間がどれだけ回転しているかに注目してメモ化。

1. 区間を回転させる
2. 区間を分割する

の2つの操作をする。サンプルを例にすると、

|123| -分割-> |1|23| -回転-> |1|12|

|020| -回転-> |919| -分割-> |9|19| -分割-> |9|1|9| -回転-> |9|0|9|

回転をし続けないようにパラメータを1つ足して解いた。