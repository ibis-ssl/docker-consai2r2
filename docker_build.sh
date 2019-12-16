#!/bin/bash
VAR=${@:-""}
docker build . ${VAR} -f ./Dockerfile -t ibisssl/consai2r2
