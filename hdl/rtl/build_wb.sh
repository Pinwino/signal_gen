#!/bin/bash

wbgen2 -V fd_main_wishbone_slave.vhd -H record -p fd_main_wbgen2_pkg.vhd -K ../include/regs/fd_main_regs.vh -s defines -C fd_main_regs.h -D doc/fd_main_regs.html fd_main_wishbone_slave.wb 
wbgen2 -V fd_channel_wishbone_slave.vhd -H record -p fd_channel_wbgen2_pkg.vhd -K ../include/regs/fd_channel_regs.vh -s defines -C fd_channel_regs.h -D doc/fd_channel_regs.html fd_channel_wishbone_slave.wb 