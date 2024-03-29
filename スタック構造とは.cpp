//・スタックとは
//後入れ先出し方式(LIFO)を取るデータ構造
//あとに入れたデータが先に取り出される構造になっている
//プッシュ...データを挿入すること
//ポップ...データを取り出すこと
//Webブラウザの訪問履歴(戻るボタンでポップ)、再帰関数の再帰呼び出しなど、新しいタスクから順に処理していく場面で使われる

#include <iostream>
#include <stdlib.h>
#define MAX 10

class Stack
{
    int data[MAX];
    int top;

    public:
        void push(int number)
        {
            this->top += 1;
            this->data[this->top] = number;
        }

        int pop()
        {
            auto ret = this->data[top];
            this->top -= 1;
            return ret;
        }
};

int main()
{
    Stack* stack;
    stack = (struct Stack*) malloc(sizeof(struct Stack));

    //プッシュ
    stack->push(10);
    stack->push(20);

    //ポップ
    std::cout << stack->pop() << std::endl;
    std::cout << stack->pop() << std::endl;

    return 0;
}

//出力結果：
//20
//10

//後からプッシュした20のほうが先にポップされていることがわかる
