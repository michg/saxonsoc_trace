create_clock -name clk50 -period 20.0 [get_ports {clocking_GCLK50}]
derive_pll_clocks
derive_clock_uncertainty
