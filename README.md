# MagicTrackRest+  Magic Trackpad 2,3 組込パームレスト　＋　自作キーボード

AppleのMagic　Trackpad2,3を組込んで使用するパームレスト+自作キーボードです。

HHKB　をはじめとする、各種６０％キーボードと組み合わせて使用する想定のサイズになっています。

MagicTrackpadの露出部のサイズを幅120mm（MacBookAirのトラックパッドと同じ幅）として、厚さ2mmの天板でトラックパットの両脇を覆うことで、キーボード操作時の誤タッチを避けつつ、MagicTrackpadを内蔵したパームレストとして使用できます。

※タップでクリックの機能はOFFで使用するか、感度を下げてご使用をお勧めします

HHKB　US配列で省略されているカーソルキーや各種ショートカットキーなどをマッピングして-本末転倒-使用できます。

HHKBにはないLED照明付きで-蛇足-あなたのHHKBをゲーミングキーボドを彩ります。

キーマピングの変更は https://remap-keys.app/ を使用してドラックアンドドロップで簡単に変更可能です。
専用ソフトウェアのインストールは不要です。
　

## キーマップ変更

キーマップの変更はChromeブラウザを使用して、https://remap-keys.app/　で変更します。

下記に本キーボードを使用する際に最低限必要な手順を記載します。

remapの一般的な使用方法はサリチル酸さんの記事などをご参照ください。

　https://salicylic-acid3.hatenablog.com/entry/remap-manual

1. [START REMAP FOR YOUR KEYBORD]　をクリック
<img width="500" src="mtｒ/remap_img/remap_1.png">

2. [+ KEYBORD]をクリック
<img width="500" src="mtｒ/remap_img/remap_2.png">

3. [mtr]を選択して接続.
<img width="250" src="mtｒ/remap_img/remap_3.png">

4. Jsonファイルのアップロードを求められるので、下記からjsonファイルをダウンロードして使用する
<img width="500" src="mtｒ/remap_img/remap_4.png">

- [mtr_via.json](https://raw.githubusercontent.com/mentako-ya/mtr/main/mtr/mtr_via.json)

5. キーマップの変更 / キーマップの書き込み（右上Flashボタン） /　変更したキーマップの保存　/　キーマップのPDFダウンロード　などが可能

キーマップサンプル
- カーソル,shift,ctrl,LED調整 [ｍｔｒ_keymap_cursor_keymap_cheatsheet.pdf](mtr/mtr_cursor_keymap_cheatsheet.pdf)
<img width="1200" alt="remap_key_leyout" src="mtr/remap_img/mtr_cursor_keymap_cheatsheet.png">
- カーソル,マウスキー,メディアキー,LED調整 [ｍｔｒ_keymap_mouse_media_keymap_cheatsheet.pdf](mtr/mtr_mouse_media_keymap_cheatsheet.pdf)
<img width="1200" alt="remap_key_leyout" src="mtr/remap_img/mtr_cursor_keymap_cheatsheet.png">

※ 製品出荷時点でキーボードに設定済みのマッピングは、ファームウェアのデフォルトキーマッピングとは一部異なる場合があります。

キーマップのリセットや、キーボードの初期化を行うと、キーマップはファームウェアのデフォルトキーマップにリセットされます。

キーマップ変更やリセットを行う前に、初期のマッピングの状態でマップの保存をお勧めします。


## ファームウェア更新
[Pro Micro Web Updater](https://sekigon-gonnoc.github.io/promicro-web-updater/index.html) を使用してファームウェアを更新できます。

出荷時に書き込まれているファームウェアは[mtr_via.hex](https://raw.githubusercontent.com/mentako-ya/mtr/main/mtr/mtr_via.hex)になります。　

[Pro Micro Web Updater](https://sekigon-gonnoc.github.io/promicro-web-updater/index.html) にアクセスし、事前にダウンロードしたファームウェアをアップロードします。

キーボードの左右どちらか一方をUSB接続し、画面上の[flash]ボタンを押下します。

シリアルポートへの接続要求のウインドウが表示されるので、キーボード右側のリセットスイッチを２回連続でクリックします。

シリアルポートの一覧に「Pro Micro 5v」が表示されるので、選択して接続ボタンを押下します。


## 基本的な使用方法

本キーボードは、レイヤー０〜3の４種類のキーマップを切り替えて使用します。

レイヤーの切り替えは左側キーのHOLD（シフトキーのように押したままにすること）に割り当てられており、Layer(0),Layer(1),Layer(2),Layer(3)の切り替えが可能です。

設定例
- レイヤー０:カーソル入力
- レイヤー１:マウスキー入力
- レイヤー２:メディアキー入力
- レイヤー３:LED調整



