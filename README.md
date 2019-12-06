# Prerequisites
- docker-ce
- (nvidia-docker for nvidia drivers)

# How to execute consai2
- nvidia driverのある環境
```bash
$ ./docker_build.sh # dockerイメージを作る
$ ./colcon_build.sh # colcon buildする
$ ./bash.sh # bashを起動する
```

# How to build docker image without cache
```bash
$ ./docker_build.sh --no-cache
```

# How to run bash on the consai2 image

```bash
$ ./bash.sh
```

# How to develop
- 前提として， `colcon_ws/src/edge-repos` ディレクトリが `.gitignore` に入っている
- `colcon_ws/src/edge-repos` ディレクトリの中に `$ git clone [開発中のgit URI]` などで実装中のリポジトリを入れる
- `$ ./colcon_build.sh`
