// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _kick_HH_
#define _kick_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "p_hls_fptosi_double_s.h"
#include "astroSim_dmul_64ndEe.h"
#include "astroSim_ddiv_64nbkb.h"
#include "astroSim_mux_164_cud.h"

namespace ap_rtl {

struct kick : public sc_module {
    // Port declarations 87
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > p_int_0_vx_read;
    sc_in< sc_lv<64> > p_int_1_vx_read;
    sc_in< sc_lv<64> > p_int_2_vx_read;
    sc_in< sc_lv<64> > p_int_3_vx_read;
    sc_in< sc_lv<64> > p_int_4_vx_read;
    sc_in< sc_lv<64> > p_int_5_vx_read;
    sc_in< sc_lv<64> > p_int_6_vx_read;
    sc_in< sc_lv<64> > p_int_7_vx_read;
    sc_in< sc_lv<64> > p_int_8_vx_read;
    sc_in< sc_lv<64> > p_int_0_vy_read;
    sc_in< sc_lv<64> > p_int_1_vy_read;
    sc_in< sc_lv<64> > p_int_2_vy_read;
    sc_in< sc_lv<64> > p_int_3_vy_read;
    sc_in< sc_lv<64> > p_int_4_vy_read;
    sc_in< sc_lv<64> > p_int_5_vy_read;
    sc_in< sc_lv<64> > p_int_6_vy_read;
    sc_in< sc_lv<64> > p_int_7_vy_read;
    sc_in< sc_lv<64> > p_int_8_vy_read;
    sc_in< sc_lv<64> > p_int_0_vz_read;
    sc_in< sc_lv<64> > p_int_1_vz_read;
    sc_in< sc_lv<64> > p_int_2_vz_read;
    sc_in< sc_lv<64> > p_int_3_vz_read;
    sc_in< sc_lv<64> > p_int_4_vz_read;
    sc_in< sc_lv<64> > p_int_5_vz_read;
    sc_in< sc_lv<64> > p_int_6_vz_read;
    sc_in< sc_lv<64> > p_int_7_vz_read;
    sc_in< sc_lv<64> > p_int_8_vz_read;
    sc_in< sc_lv<64> > p_0_ax_read;
    sc_in< sc_lv<64> > p_1_ax_read;
    sc_in< sc_lv<64> > p_2_ax_read;
    sc_in< sc_lv<64> > p_3_ax_read;
    sc_in< sc_lv<64> > p_4_ax_read;
    sc_in< sc_lv<64> > p_5_ax_read;
    sc_in< sc_lv<64> > p_6_ax_read;
    sc_in< sc_lv<64> > p_7_ax_read;
    sc_in< sc_lv<64> > p_8_ax_read;
    sc_in< sc_lv<64> > p_0_ay_read;
    sc_in< sc_lv<64> > p_1_ay_read;
    sc_in< sc_lv<64> > p_2_ay_read;
    sc_in< sc_lv<64> > p_3_ay_read;
    sc_in< sc_lv<64> > p_4_ay_read;
    sc_in< sc_lv<64> > p_5_ay_read;
    sc_in< sc_lv<64> > p_6_ay_read;
    sc_in< sc_lv<64> > p_7_ay_read;
    sc_in< sc_lv<64> > p_8_ay_read;
    sc_in< sc_lv<64> > p_0_az_read;
    sc_in< sc_lv<64> > p_1_az_read;
    sc_in< sc_lv<64> > p_2_az_read;
    sc_in< sc_lv<64> > p_3_az_read;
    sc_in< sc_lv<64> > p_4_az_read;
    sc_in< sc_lv<64> > p_5_az_read;
    sc_in< sc_lv<64> > p_6_az_read;
    sc_in< sc_lv<64> > p_7_az_read;
    sc_in< sc_lv<64> > p_8_az_read;
    sc_out< sc_lv<64> > ap_return_0;
    sc_out< sc_lv<64> > ap_return_1;
    sc_out< sc_lv<64> > ap_return_2;
    sc_out< sc_lv<64> > ap_return_3;
    sc_out< sc_lv<64> > ap_return_4;
    sc_out< sc_lv<64> > ap_return_5;
    sc_out< sc_lv<64> > ap_return_6;
    sc_out< sc_lv<64> > ap_return_7;
    sc_out< sc_lv<64> > ap_return_8;
    sc_out< sc_lv<64> > ap_return_9;
    sc_out< sc_lv<64> > ap_return_10;
    sc_out< sc_lv<64> > ap_return_11;
    sc_out< sc_lv<64> > ap_return_12;
    sc_out< sc_lv<64> > ap_return_13;
    sc_out< sc_lv<64> > ap_return_14;
    sc_out< sc_lv<64> > ap_return_15;
    sc_out< sc_lv<64> > ap_return_16;
    sc_out< sc_lv<64> > ap_return_17;
    sc_out< sc_lv<64> > ap_return_18;
    sc_out< sc_lv<64> > ap_return_19;
    sc_out< sc_lv<64> > ap_return_20;
    sc_out< sc_lv<64> > ap_return_21;
    sc_out< sc_lv<64> > ap_return_22;
    sc_out< sc_lv<64> > ap_return_23;
    sc_out< sc_lv<64> > ap_return_24;
    sc_out< sc_lv<64> > ap_return_25;
    sc_out< sc_lv<64> > ap_return_26;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<64> > ap_var_for_const0;
    sc_signal< sc_lv<64> > ap_var_for_const2;


    // Module declarations
    kick(sc_module_name name);
    SC_HAS_PROCESS(kick);

    ~kick();

    sc_trace_file* mVcdFile;

    p_hls_fptosi_double_s* tmp_27_p_hls_fptosi_double_s_fu_762;
    p_hls_fptosi_double_s* tmp_31_p_hls_fptosi_double_s_fu_767;
    p_hls_fptosi_double_s* tmp_35_p_hls_fptosi_double_s_fu_772;
    p_hls_fptosi_double_s* tmp_27_1_p_hls_fptosi_double_s_fu_777;
    p_hls_fptosi_double_s* tmp_31_1_p_hls_fptosi_double_s_fu_782;
    p_hls_fptosi_double_s* tmp_35_1_p_hls_fptosi_double_s_fu_787;
    p_hls_fptosi_double_s* tmp_27_2_p_hls_fptosi_double_s_fu_792;
    p_hls_fptosi_double_s* tmp_31_2_p_hls_fptosi_double_s_fu_797;
    p_hls_fptosi_double_s* tmp_35_2_p_hls_fptosi_double_s_fu_802;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U504;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U505;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U506;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U507;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U508;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U509;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U510;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U511;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_x_U512;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U513;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U514;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U515;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U516;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U517;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U518;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U519;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U520;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U521;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U522;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U523;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U524;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U525;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U526;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U527;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U528;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U529;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U530;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U531;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U532;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U533;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U534;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U535;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U536;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U537;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U538;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U539;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U540;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U541;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U542;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U543;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U544;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U545;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U546;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U547;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U548;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U549;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U550;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U551;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U552;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U553;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U554;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U555;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U556;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U557;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > p_int_vx_reg_480;
    sc_signal< sc_lv<64> > p_int_vx9_reg_490;
    sc_signal< sc_lv<64> > p_int_vx2_reg_500;
    sc_signal< sc_lv<64> > p_int_vx3_reg_510;
    sc_signal< sc_lv<64> > p_int_vx4_reg_520;
    sc_signal< sc_lv<64> > p_int_vx5_reg_530;
    sc_signal< sc_lv<64> > p_int_vx6_reg_540;
    sc_signal< sc_lv<64> > p_int_vx7_reg_550;
    sc_signal< sc_lv<64> > p_int_vx8_reg_560;
    sc_signal< sc_lv<64> > p_int_vy_reg_570;
    sc_signal< sc_lv<64> > p_int_vy9_reg_580;
    sc_signal< sc_lv<64> > p_int_vy3_reg_590;
    sc_signal< sc_lv<64> > p_int_vy4_reg_600;
    sc_signal< sc_lv<64> > p_int_vy5_reg_610;
    sc_signal< sc_lv<64> > p_int_vy6_reg_620;
    sc_signal< sc_lv<64> > p_int_vy7_reg_630;
    sc_signal< sc_lv<64> > p_int_vy8_reg_640;
    sc_signal< sc_lv<64> > p_int_vy1_reg_650;
    sc_signal< sc_lv<64> > p_int_vz_reg_660;
    sc_signal< sc_lv<64> > p_int_vz3_reg_670;
    sc_signal< sc_lv<64> > p_int_vz4_reg_680;
    sc_signal< sc_lv<64> > p_int_vz5_reg_690;
    sc_signal< sc_lv<64> > p_int_vz6_reg_700;
    sc_signal< sc_lv<64> > p_int_vz7_reg_710;
    sc_signal< sc_lv<64> > p_int_vz8_reg_720;
    sc_signal< sc_lv<64> > p_int_vz9_reg_730;
    sc_signal< sc_lv<64> > p_int_vz1_reg_740;
    sc_signal< sc_lv<4> > i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter1_i_reg_750;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter7;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter8;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter9;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter10;
    sc_signal< bool > ap_block_state13_pp0_stage0_iter11;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter12;
    sc_signal< bool > ap_block_state15_pp0_stage0_iter13;
    sc_signal< bool > ap_block_state16_pp0_stage0_iter14;
    sc_signal< bool > ap_block_state17_pp0_stage0_iter15;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter16;
    sc_signal< bool > ap_block_state19_pp0_stage0_iter17;
    sc_signal< bool > ap_block_state20_pp0_stage0_iter18;
    sc_signal< bool > ap_block_state21_pp0_stage0_iter19;
    sc_signal< bool > ap_block_state22_pp0_stage0_iter20;
    sc_signal< bool > ap_block_state23_pp0_stage0_iter21;
    sc_signal< bool > ap_block_state24_pp0_stage0_iter22;
    sc_signal< bool > ap_block_pp0_stage0_flag00011001;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter2_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter3_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter4_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter5_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter6_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter7_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter8_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter9_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter10_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter11_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter12_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter13_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter14_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter15_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter16_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter17_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter18_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter19_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter20_i_reg_750;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter21_i_reg_750;
    sc_signal< sc_lv<64> > p_8_az_read_1_reg_2613;
    sc_signal< sc_lv<64> > p_7_az_read_1_reg_2618;
    sc_signal< sc_lv<64> > p_6_az_read_1_reg_2623;
    sc_signal< sc_lv<64> > p_5_az_read_1_reg_2628;
    sc_signal< sc_lv<64> > p_4_az_read_1_reg_2633;
    sc_signal< sc_lv<64> > p_3_az_read_1_reg_2638;
    sc_signal< sc_lv<64> > p_2_az_read_1_reg_2643;
    sc_signal< sc_lv<64> > p_1_az_read_1_reg_2648;
    sc_signal< sc_lv<64> > p_0_az_read_1_reg_2653;
    sc_signal< sc_lv<64> > p_8_ay_read_1_reg_2658;
    sc_signal< sc_lv<64> > p_7_ay_read_1_reg_2663;
    sc_signal< sc_lv<64> > p_6_ay_read_1_reg_2668;
    sc_signal< sc_lv<64> > p_5_ay_read_1_reg_2673;
    sc_signal< sc_lv<64> > p_4_ay_read_1_reg_2678;
    sc_signal< sc_lv<64> > p_3_ay_read_1_reg_2683;
    sc_signal< sc_lv<64> > p_2_ay_read_1_reg_2688;
    sc_signal< sc_lv<64> > p_1_ay_read_1_reg_2693;
    sc_signal< sc_lv<64> > p_0_ay_read_1_reg_2698;
    sc_signal< sc_lv<64> > p_8_ax_read_1_reg_2703;
    sc_signal< sc_lv<64> > p_7_ax_read_1_reg_2708;
    sc_signal< sc_lv<64> > p_6_ax_read_1_reg_2713;
    sc_signal< sc_lv<64> > p_5_ax_read_1_reg_2718;
    sc_signal< sc_lv<64> > p_4_ax_read_1_reg_2723;
    sc_signal< sc_lv<64> > p_3_ax_read_1_reg_2728;
    sc_signal< sc_lv<64> > p_2_ax_read_1_reg_2733;
    sc_signal< sc_lv<64> > p_1_ax_read_1_reg_2738;
    sc_signal< sc_lv<64> > p_0_ax_read_1_reg_2743;
    sc_signal< sc_lv<1> > tmp_fu_897_p2;
    sc_signal< sc_lv<1> > tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter3_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter4_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter5_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter6_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter7_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter8_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter9_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter10_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter11_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter12_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter13_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter14_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter15_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter16_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter17_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter18_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter19_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter20_tmp_reg_2883;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter21_tmp_reg_2883;
    sc_signal< sc_lv<1> > sel_tmp_fu_903_p2;
    sc_signal< sc_lv<1> > sel_tmp_reg_2887;
    sc_signal< sc_lv<1> > sel_tmp2_fu_909_p2;
    sc_signal< sc_lv<1> > sel_tmp2_reg_2894;
    sc_signal< sc_lv<4> > i_3_0_t_fu_915_p2;
    sc_signal< sc_lv<4> > i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter1_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter2_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter3_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter4_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter5_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter6_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter7_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter8_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter9_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter10_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter11_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter12_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter13_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter14_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter15_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter16_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter17_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter18_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter19_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter20_i_3_0_t_reg_2907;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter21_i_3_0_t_reg_2907;
    sc_signal< sc_lv<1> > tmp_68_fu_921_p2;
    sc_signal< sc_lv<1> > tmp_68_reg_2923;
    sc_signal< sc_lv<4> > i_3_1_t_fu_927_p2;
    sc_signal< sc_lv<4> > i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter1_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter2_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter3_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter4_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter5_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter6_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter7_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter8_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter9_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter10_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter11_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter12_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter13_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter14_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter15_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter16_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter17_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter18_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter19_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter20_i_3_1_t_reg_2930;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter21_i_3_1_t_reg_2930;
    sc_signal< sc_lv<1> > tmp_72_fu_933_p2;
    sc_signal< sc_lv<1> > tmp_72_reg_2946;
    sc_signal< sc_lv<4> > i_3_2_fu_939_p2;
    sc_signal< sc_lv<4> > i_3_2_reg_2953;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > grp_fu_807_p2;
    sc_signal< sc_lv<64> > tmp_25_reg_3003;
    sc_signal< sc_lv<64> > grp_fu_812_p2;
    sc_signal< sc_lv<64> > tmp_29_reg_3008;
    sc_signal< sc_lv<64> > grp_fu_817_p2;
    sc_signal< sc_lv<64> > tmp_33_reg_3013;
    sc_signal< sc_lv<64> > grp_fu_822_p2;
    sc_signal< sc_lv<64> > tmp_25_1_reg_3018;
    sc_signal< sc_lv<64> > grp_fu_827_p2;
    sc_signal< sc_lv<64> > tmp_29_1_reg_3023;
    sc_signal< sc_lv<64> > grp_fu_832_p2;
    sc_signal< sc_lv<64> > tmp_33_1_reg_3028;
    sc_signal< sc_lv<64> > grp_fu_837_p2;
    sc_signal< sc_lv<64> > tmp_25_2_reg_3033;
    sc_signal< sc_lv<64> > grp_fu_842_p2;
    sc_signal< sc_lv<64> > tmp_29_2_reg_3038;
    sc_signal< sc_lv<64> > grp_fu_847_p2;
    sc_signal< sc_lv<64> > tmp_33_2_reg_3043;
    sc_signal< sc_lv<64> > grp_fu_852_p2;
    sc_signal< sc_lv<64> > tmp_26_reg_3048;
    sc_signal< sc_lv<64> > grp_fu_857_p2;
    sc_signal< sc_lv<64> > tmp_30_reg_3053;
    sc_signal< sc_lv<64> > grp_fu_862_p2;
    sc_signal< sc_lv<64> > tmp_34_reg_3058;
    sc_signal< sc_lv<64> > grp_fu_867_p2;
    sc_signal< sc_lv<64> > tmp_26_1_reg_3063;
    sc_signal< sc_lv<64> > grp_fu_872_p2;
    sc_signal< sc_lv<64> > tmp_30_1_reg_3068;
    sc_signal< sc_lv<64> > grp_fu_877_p2;
    sc_signal< sc_lv<64> > tmp_34_1_reg_3073;
    sc_signal< sc_lv<64> > grp_fu_882_p2;
    sc_signal< sc_lv<64> > tmp_26_2_reg_3078;
    sc_signal< sc_lv<64> > grp_fu_887_p2;
    sc_signal< sc_lv<64> > tmp_30_2_reg_3083;
    sc_signal< sc_lv<64> > grp_fu_892_p2;
    sc_signal< sc_lv<64> > tmp_34_2_reg_3088;
    sc_signal< sc_lv<64> > p_int_vx6_1_fu_1097_p18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter22;
    sc_signal< sc_lv<64> > p_int_vx3_1_fu_1135_p18;
    sc_signal< sc_lv<64> > p_int_vx_1_fu_1173_p18;
    sc_signal< sc_lv<64> > p_int_vy14_1_fu_1255_p18;
    sc_signal< sc_lv<64> > p_int_vy1114_1_fu_1293_p18;
    sc_signal< sc_lv<64> > p_int_vy_1_fu_1331_p18;
    sc_signal< sc_lv<64> > p_int_vz22_1_fu_1413_p18;
    sc_signal< sc_lv<64> > p_int_vz19_1_fu_1451_p18;
    sc_signal< sc_lv<64> > p_int_vz_1_fu_1489_p18;
    sc_signal< sc_lv<64> > p_int_vx7_1_fu_1570_p18;
    sc_signal< sc_lv<64> > p_int_vx4_1_fu_1607_p18;
    sc_signal< sc_lv<64> > p_int_vx12_1_fu_1644_p18;
    sc_signal< sc_lv<64> > p_int_vy15_1_fu_1724_p18;
    sc_signal< sc_lv<64> > p_int_vy12_1_fu_1761_p18;
    sc_signal< sc_lv<64> > p_int_vy9_1_fu_1798_p18;
    sc_signal< sc_lv<64> > p_int_vz23_1_fu_1878_p18;
    sc_signal< sc_lv<64> > p_int_vz20_1_fu_1915_p18;
    sc_signal< sc_lv<64> > p_int_vz17_1_fu_1952_p18;
    sc_signal< sc_lv<64> > p_int_vx8_1_fu_2032_p18;
    sc_signal< sc_lv<64> > p_int_vx5_1_fu_2069_p18;
    sc_signal< sc_lv<64> > p_int_vx2_1_fu_2106_p18;
    sc_signal< sc_lv<64> > p_int_vy16_1_fu_2186_p18;
    sc_signal< sc_lv<64> > p_int_vy13_1_fu_2223_p18;
    sc_signal< sc_lv<64> > p_int_vy10_1_fu_2260_p18;
    sc_signal< sc_lv<64> > p_int_vz24_1_fu_2340_p18;
    sc_signal< sc_lv<64> > p_int_vz2126_1_fu_2377_p18;
    sc_signal< sc_lv<64> > p_int_vz18_1_fu_2414_p18;
    sc_signal< bool > ap_block_pp0_stage0_flag00011011;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter19;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter20;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter21;
    sc_signal< sc_lv<64> > tmp_27_p_hls_fptosi_double_s_fu_762_ap_return;
    sc_signal< sc_lv<64> > tmp_31_p_hls_fptosi_double_s_fu_767_ap_return;
    sc_signal< sc_lv<64> > tmp_35_p_hls_fptosi_double_s_fu_772_ap_return;
    sc_signal< sc_lv<64> > tmp_27_1_p_hls_fptosi_double_s_fu_777_ap_return;
    sc_signal< sc_lv<64> > tmp_31_1_p_hls_fptosi_double_s_fu_782_ap_return;
    sc_signal< sc_lv<64> > tmp_35_1_p_hls_fptosi_double_s_fu_787_ap_return;
    sc_signal< sc_lv<64> > tmp_27_2_p_hls_fptosi_double_s_fu_792_ap_return;
    sc_signal< sc_lv<64> > tmp_31_2_p_hls_fptosi_double_s_fu_797_ap_return;
    sc_signal< sc_lv<64> > tmp_35_2_p_hls_fptosi_double_s_fu_802_ap_return;
    sc_signal< sc_lv<4> > i_phi_fu_754_p4;
    sc_signal< bool > ap_block_pp0_stage0_flag00000000;
    sc_signal< sc_lv<64> > grp_fu_807_p0;
    sc_signal< sc_lv<64> > grp_fu_812_p0;
    sc_signal< sc_lv<64> > grp_fu_817_p0;
    sc_signal< sc_lv<64> > grp_fu_822_p0;
    sc_signal< sc_lv<64> > grp_fu_827_p0;
    sc_signal< sc_lv<64> > grp_fu_832_p0;
    sc_signal< sc_lv<64> > grp_fu_837_p0;
    sc_signal< sc_lv<64> > grp_fu_842_p0;
    sc_signal< sc_lv<64> > grp_fu_847_p0;
    sc_signal< sc_lv<64> > sel_tmp1_fu_945_p3;
    sc_signal< sc_lv<64> > tmp_65_fu_957_p3;
    sc_signal< sc_lv<64> > tmp_66_fu_969_p3;
    sc_signal< sc_lv<64> > tmp_67_fu_981_p3;
    sc_signal< sc_lv<64> > tmp_69_fu_993_p3;
    sc_signal< sc_lv<64> > tmp_70_fu_1005_p3;
    sc_signal< sc_lv<64> > tmp_71_fu_1017_p3;
    sc_signal< sc_lv<64> > tmp_73_fu_1029_p3;
    sc_signal< sc_lv<64> > tmp_74_fu_1041_p3;
    sc_signal< sc_lv<64> > p_int_vx_load_0_phi_fu_1053_p18;
    sc_signal< sc_lv<64> > tmp_28_fu_1091_p2;
    sc_signal< sc_lv<64> > p_int_vy_load_0_phi_fu_1211_p18;
    sc_signal< sc_lv<64> > tmp_32_fu_1249_p2;
    sc_signal< sc_lv<64> > p_int_vz_load_0_phi_fu_1369_p18;
    sc_signal< sc_lv<64> > tmp_36_fu_1407_p2;
    sc_signal< sc_lv<64> > p_int_vx_load_1_phi_fu_1527_p18;
    sc_signal< sc_lv<64> > tmp_28_1_fu_1564_p2;
    sc_signal< sc_lv<64> > p_int_vy_load_1_phi_fu_1681_p18;
    sc_signal< sc_lv<64> > tmp_32_1_fu_1718_p2;
    sc_signal< sc_lv<64> > p_int_vz_load_1_phi_fu_1835_p18;
    sc_signal< sc_lv<64> > tmp_36_1_fu_1872_p2;
    sc_signal< sc_lv<64> > p_int_vx_load_2_phi_fu_1989_p18;
    sc_signal< sc_lv<64> > tmp_28_2_fu_2026_p2;
    sc_signal< sc_lv<64> > p_int_vy_load_2_phi_fu_2143_p18;
    sc_signal< sc_lv<64> > tmp_32_2_fu_2180_p2;
    sc_signal< sc_lv<64> > p_int_vz_load_2_phi_fu_2297_p18;
    sc_signal< sc_lv<64> > tmp_36_2_fu_2334_p2;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state25;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_3F847AE147AE147B;
    static const sc_lv<64> ap_const_lv64_3C9CD2B297D889BC;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state25();
    void thread_ap_block_pp0_stage0_flag00000000();
    void thread_ap_block_pp0_stage0_flag00011001();
    void thread_ap_block_pp0_stage0_flag00011011();
    void thread_ap_block_state10_pp0_stage0_iter8();
    void thread_ap_block_state11_pp0_stage0_iter9();
    void thread_ap_block_state12_pp0_stage0_iter10();
    void thread_ap_block_state13_pp0_stage0_iter11();
    void thread_ap_block_state14_pp0_stage0_iter12();
    void thread_ap_block_state15_pp0_stage0_iter13();
    void thread_ap_block_state16_pp0_stage0_iter14();
    void thread_ap_block_state17_pp0_stage0_iter15();
    void thread_ap_block_state18_pp0_stage0_iter16();
    void thread_ap_block_state19_pp0_stage0_iter17();
    void thread_ap_block_state20_pp0_stage0_iter18();
    void thread_ap_block_state21_pp0_stage0_iter19();
    void thread_ap_block_state22_pp0_stage0_iter20();
    void thread_ap_block_state23_pp0_stage0_iter21();
    void thread_ap_block_state24_pp0_stage0_iter22();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_block_state9_pp0_stage0_iter7();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_16();
    void thread_ap_return_17();
    void thread_ap_return_18();
    void thread_ap_return_19();
    void thread_ap_return_2();
    void thread_ap_return_20();
    void thread_ap_return_21();
    void thread_ap_return_22();
    void thread_ap_return_23();
    void thread_ap_return_24();
    void thread_ap_return_25();
    void thread_ap_return_26();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_grp_fu_807_p0();
    void thread_grp_fu_812_p0();
    void thread_grp_fu_817_p0();
    void thread_grp_fu_822_p0();
    void thread_grp_fu_827_p0();
    void thread_grp_fu_832_p0();
    void thread_grp_fu_837_p0();
    void thread_grp_fu_842_p0();
    void thread_grp_fu_847_p0();
    void thread_i_3_0_t_fu_915_p2();
    void thread_i_3_1_t_fu_927_p2();
    void thread_i_3_2_fu_939_p2();
    void thread_i_phi_fu_754_p4();
    void thread_sel_tmp1_fu_945_p3();
    void thread_sel_tmp2_fu_909_p2();
    void thread_sel_tmp_fu_903_p2();
    void thread_tmp_28_1_fu_1564_p2();
    void thread_tmp_28_2_fu_2026_p2();
    void thread_tmp_28_fu_1091_p2();
    void thread_tmp_32_1_fu_1718_p2();
    void thread_tmp_32_2_fu_2180_p2();
    void thread_tmp_32_fu_1249_p2();
    void thread_tmp_36_1_fu_1872_p2();
    void thread_tmp_36_2_fu_2334_p2();
    void thread_tmp_36_fu_1407_p2();
    void thread_tmp_65_fu_957_p3();
    void thread_tmp_66_fu_969_p3();
    void thread_tmp_67_fu_981_p3();
    void thread_tmp_68_fu_921_p2();
    void thread_tmp_69_fu_993_p3();
    void thread_tmp_70_fu_1005_p3();
    void thread_tmp_71_fu_1017_p3();
    void thread_tmp_72_fu_933_p2();
    void thread_tmp_73_fu_1029_p3();
    void thread_tmp_74_fu_1041_p3();
    void thread_tmp_fu_897_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
