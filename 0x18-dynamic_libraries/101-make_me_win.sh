#!/bin/bash

ls -al
md5sum giga_millions_program | awk '{print $1}' | grep -q c4ca4238a0b923820dcc509a6f75849b && gm; exit
