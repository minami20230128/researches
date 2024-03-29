#・リスト内包表記
#既存のリストから新しいリストを作ることができる
#リストの各要素に同じ処理をする、条件に当てはまる要素だけを取り出すなどが可能
#appendがない分処理速度が速く、（場合によるが）可読性が上がることもある

#例
#1. 元のリストの全要素を2倍する
num_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]
result = [elem * 2 for elem in num_list]
print(result)

#実行結果
#[2, 4, 6, 8, 10, 12, 14, 16, 18]

#2. ３の倍数のみ2倍する
result = [elem * 2 for elem in num_list if elem % 3 == 0]
print(result)

#実行結果
#[6, 12, 18]