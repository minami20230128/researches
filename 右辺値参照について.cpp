//c++ &&, &, 何もついてないときの違い
//&->左辺値参照
//&&->右辺値参照
//何もついてないとき->値をコピー

//右辺値参照は、右辺値（代入などに使われる一時的な値、一時オブジェクトのこと）をコピーを作らず参照すること

#include <iostream>

int add(int a, int b)
{
    return (a+b);
}

int radd(int&& a, int&& b)//右辺値しか渡せない関数
{
    return (a+b);
}

int ladd (int& a, int& b)
{
    return (a + b);
}

int main()
{
    int a = 1;
    int b = 2;

    //これだとコピーが発生する
    auto result = add(a, b);
    std::cout << result << std::endl;

    //左辺値参照するとコピーが発生しない
    result = ladd(a, b);
    std::cout << result << std::endl;

    //同様に、右辺値参照すると右辺値のコピーを発生させず渡すことができる
    result = radd(1, 2);
    std::cout << result << std::endl;

    //これは右辺値ではないのでエラーになる
    //result = radd(a, b);

    //左辺値を右辺値にキャストすると渡すことができる
    result = radd(std::move(a), std::move(b));
    std::cout << result << std::endl;

    return 0;
}

//ただし、右辺値参照したあとの変数の利用は保証されない（要追加調査）
//また非同期処理を行うときなどにあぶない（要追加調査）
//このようなデメリットを鑑みて、JavaのString型などは変更不能(immutable)になっている

// class Main 
// {
//     public static void main(String[] args)
//     {
//         String a = "あいうえお";
//         String b = a;
//         a = "かきくけこ";//代入すると違うオブジェクトになる

//         System.out.println(String.valueOf((a == b)));//オブジェクトが同じならtrue
//     }   
// }


//出力結果：false
//つまり右辺値参照のデメリットは克服されているものの、再代入を繰り返すとメモリを圧迫してしまう

//所有権の移動は普通のポインタ操作でもできるが、それを文法として整理したのがムーブセマンティクス





