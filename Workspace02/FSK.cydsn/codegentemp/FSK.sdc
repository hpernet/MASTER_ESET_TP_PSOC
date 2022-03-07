# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Utilisateurs\user\Documents\PSoC Creator\Workspace02\FSK.cydsn\FSK.cyprj
# Date: Mon, 25 Oct 2021 15:00:23 GMT
#set_units -time ns
create_clock -name {WaveDAC8_1_DacClk(routed)} -period 5000 -waveform {0 2500} [list [get_pins {ClockBlock/dclk_0}]]
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {WaveDAC8_1_DacClk} -source [get_pins {ClockBlock/clk_sync}] -edges {1 121 241} [list [get_pins {ClockBlock/dclk_glb_0}]]


# Component constraints for D:\Utilisateurs\user\Documents\PSoC Creator\Workspace02\FSK.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Utilisateurs\user\Documents\PSoC Creator\Workspace02\FSK.cydsn\FSK.cyprj
# Date: Mon, 25 Oct 2021 15:00:19 GMT
