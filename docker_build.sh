#!/bin/bash
VAR=${@:-""}
docker build . ${VAR} -f ./Dockerfile -t ibis/consai2r2
