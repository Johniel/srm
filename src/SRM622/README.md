# SRM622
本番ではeasyだけ通せた

## BuildingRoutes
Div1 250

ある辺が2頂点間の移動に使われているか調べる。

前もって全点間最短距離を計算しておく。

そして、a->bという辺がvからuまでのパスに含まれるということは

    min_dist[v][u] == min_dist[v][a] + dist[a][b] + min_dist[b][u]

が成り立つということ。
