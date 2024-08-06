・デフォルトエクスポートとは
一つのJSモジュールにつき一つしかexportできないexport方法。
呼び出し側では、ファイル名さえ書けば何を呼び出しているのか見分けがつくのでモジュール名は何でも良い。

import sampleFn from './Sample' <-波かっこなし
で呼び出す。

なお。複数のモジュールをexportするときは名前つきエクスポートを使用する。
・一つのJSモジュールから複数export可能
・モジュール名は定義と同じである必要がある

import {sampleFn, testFn} from './Sample' <-波かっこあり
で呼び出す。