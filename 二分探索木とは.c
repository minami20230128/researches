//・二分探索木とは
//各データにつき2本のノードがあるデータ構造
//より大きいデータを右側、小さいデータを左側のノードに配置する
//(データが左右どちらかに偏りすぎているなどの例外を除き)リスト構造よりも探索効率が良い

struct Person
{
    int age,
    Book* left,
    Book* right
};

int main()
{

}