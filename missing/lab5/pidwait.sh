#!/bin/bash

# 定义 pidwait 函数
pidwait()
{
   while kill -0 $1 # 循环直到进程结束
   do
   sleep 1 
   done
   ls
}
