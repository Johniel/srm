# SRM622
本番ではeasyだけ通せた

## BuildingRoutes
Div1 250

ある辺が2頂点間の移動に使われているか調べる。

前もって全点間最短距離を計算しておく。

そして、a->bという辺がiからjまでのパスに含まれるということは

    dist[a][b] == min_dist[a][b]

    min_dist[i][j] == min_dist[i][a] + min_dist[b][j]

が成り立つということ。
