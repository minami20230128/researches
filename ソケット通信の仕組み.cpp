// ・ソケット通信の仕組み
// ソケットとは、プログラム上からTCP/IP通信でデータ送受信するためのAPI。
// 下記の2種類がある。
// INETドメイン...IPアドレス・ポート番号で一致。他のマシンとの通信可。
// UNIXドメイン...ファイルシステム上にデータの伝送を行う特殊な領域を作る。自マシン内でのプロセス間通信のみ。
// 後者の方がスループットは圧倒的に高い。

//ソケット通信の流れ
// ・サーバ側
// create ソケットの作成
// bind ソケットを特定のIPアドレスとポートに紐付け
// listen 接続の待受を開始
// accept 接続を受信
// close 接続を切断

// ・クライアント側
// create ソケットの作成
// bind ソケットを特定のIPアドレスとポートに紐付け
// connect リモートソケットに接続
// close 接続を切断

//ただし、UDP通信の際はconnectは必要ない。


