#!/bin/bash

marco(){
    echo $(pwd) > $HOME/marco_history.log #record the path that now path
    echo "save pwd $(pwd)"              # print the path that we save
}

polo(){
    cd $(cat "$HOME/marco_history.log") # go to the path that we record
}
