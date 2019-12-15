# Prerequisites
- docker-ce
- (nvidia-docker for nvidia drivers)

# How to execute consai2
- nvidia driverのある環境
```bash
(ホストマシン上) $ ./docker_build.sh # dockerイメージを作る
(ホストマシン上) $ ./colcon_build.sh # colcon buildする
(ホストマシン上) $ ./bash.sh # bashを起動する
```

# How to build docker image without cache
```bash
(ホストマシン上) $ ./docker_build.sh --no-cache
```

# How to run bash on the consai2 image

```bash
(ホストマシン上) $ ./bash.sh
```

# How to format using ament_uncrustify and test it
```bash
(ホストマシン上) $ ./ament_uncrustify_reformat.sh
(ホストマシン上) $ ./colcon_test.sh
```

# How to develop
- 前提として， `colcon_ws/src/edge-repos` ディレクトリが `.gitignore` に入っている
- `colcon_ws/src/edge-repos` ディレクトリがなければ作成し `$ git clone [開発中のgit URI]` などで実装中のリポジトリを入れる
- `(ホストマシン上) $ ./colcon_build.sh`

# How to connect your joypad
- lsusbコマンドを用いてvendor idとdevice idを調べ，usb_mount_args.pyのID xxxx:yyyyという表記を書き換える
