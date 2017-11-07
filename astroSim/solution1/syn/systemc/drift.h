// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _drift_HH_
#define _drift_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "p_hls_fptosi_double_s.h"
#include "astroSim_dmul_64ndEe.h"
#include "astroSim_ddiv_64nbkb.h"
#include "astroSim_sitodp_6eOg.h"
#include "astroSim_mux_164_cud.h"

namespace ap_rtl {

struct drift : public sc_module {
    // Port declarations 87
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > p_int_0_x_read;
    sc_in< sc_lv<64> > p_int_1_x_read;
    sc_in< sc_lv<64> > p_int_2_x_read;
    sc_in< sc_lv<64> > p_int_3_x_read;
    sc_in< sc_lv<64> > p_int_4_x_read;
    sc_in< sc_lv<64> > p_int_5_x_read;
    sc_in< sc_lv<64> > p_int_6_x_read;
    sc_in< sc_lv<64> > p_int_7_x_read;
    sc_in< sc_lv<64> > p_int_8_x_read;
    sc_in< sc_lv<64> > p_int_0_y_read;
    sc_in< sc_lv<64> > p_int_1_y_read;
    sc_in< sc_lv<64> > p_int_2_y_read;
    sc_in< sc_lv<64> > p_int_3_y_read;
    sc_in< sc_lv<64> > p_int_4_y_read;
    sc_in< sc_lv<64> > p_int_5_y_read;
    sc_in< sc_lv<64> > p_int_6_y_read;
    sc_in< sc_lv<64> > p_int_7_y_read;
    sc_in< sc_lv<64> > p_int_8_y_read;
    sc_in< sc_lv<64> > p_int_0_z_read;
    sc_in< sc_lv<64> > p_int_1_z_read;
    sc_in< sc_lv<64> > p_int_2_z_read;
    sc_in< sc_lv<64> > p_int_3_z_read;
    sc_in< sc_lv<64> > p_int_4_z_read;
    sc_in< sc_lv<64> > p_int_5_z_read;
    sc_in< sc_lv<64> > p_int_6_z_read;
    sc_in< sc_lv<64> > p_int_7_z_read;
    sc_in< sc_lv<64> > p_int_8_z_read;
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
    drift(sc_module_name name);
    SC_HAS_PROCESS(drift);

    ~drift();

    sc_trace_file* mVcdFile;

    p_hls_fptosi_double_s* tmp_77_p_hls_fptosi_double_s_fu_756;
    p_hls_fptosi_double_s* tmp_83_p_hls_fptosi_double_s_fu_761;
    p_hls_fptosi_double_s* tmp_89_p_hls_fptosi_double_s_fu_766;
    p_hls_fptosi_double_s* tmp_77_1_p_hls_fptosi_double_s_fu_771;
    p_hls_fptosi_double_s* tmp_83_1_p_hls_fptosi_double_s_fu_776;
    p_hls_fptosi_double_s* tmp_89_1_p_hls_fptosi_double_s_fu_781;
    p_hls_fptosi_double_s* tmp_77_2_p_hls_fptosi_double_s_fu_786;
    p_hls_fptosi_double_s* tmp_83_2_p_hls_fptosi_double_s_fu_791;
    p_hls_fptosi_double_s* tmp_89_2_p_hls_fptosi_double_s_fu_796;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U74;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U75;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U76;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U77;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U78;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U79;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U80;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U81;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U82;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U83;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U84;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U85;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U86;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U87;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U88;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U89;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U90;
    astroSim_dmul_64ndEe<1,4,64,64,64>* astroSim_dmul_64ndEe_U91;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U92;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U93;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U94;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U95;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U96;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U97;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U98;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U99;
    astroSim_ddiv_64nbkb<1,17,64,64,64>* astroSim_ddiv_64nbkb_x_U100;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U101;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U102;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U103;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U104;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U105;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U106;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U107;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U108;
    astroSim_sitodp_6eOg<1,3,64,64>* astroSim_sitodp_6eOg_U109;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U110;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U111;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U112;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U113;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U114;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U115;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U116;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U117;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U118;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U119;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U120;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U121;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U122;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U123;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U124;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U125;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U126;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U127;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U128;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U129;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U130;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U131;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U132;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U133;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U134;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U135;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U136;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U137;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U138;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U139;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U140;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U141;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U142;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U143;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U144;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U145;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U146;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U147;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U148;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U149;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U150;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U151;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U152;
    astroSim_mux_164_cud<1,1,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,64,4,64>* astroSim_mux_164_cud_x_U153;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > p_int_x_reg_474;
    sc_signal< sc_lv<64> > p_int_x1_reg_484;
    sc_signal< sc_lv<64> > p_int_x2_reg_494;
    sc_signal< sc_lv<64> > p_int_x3_reg_504;
    sc_signal< sc_lv<64> > p_int_x4_reg_514;
    sc_signal< sc_lv<64> > p_int_x5_reg_524;
    sc_signal< sc_lv<64> > p_int_x6_reg_534;
    sc_signal< sc_lv<64> > p_int_x7_reg_544;
    sc_signal< sc_lv<64> > p_int_x8_reg_554;
    sc_signal< sc_lv<64> > p_int_y_reg_564;
    sc_signal< sc_lv<64> > p_int_y9_reg_574;
    sc_signal< sc_lv<64> > p_int_y2_reg_584;
    sc_signal< sc_lv<64> > p_int_y3_reg_594;
    sc_signal< sc_lv<64> > p_int_y4_reg_604;
    sc_signal< sc_lv<64> > p_int_y5_reg_614;
    sc_signal< sc_lv<64> > p_int_y6_reg_624;
    sc_signal< sc_lv<64> > p_int_y7_reg_634;
    sc_signal< sc_lv<64> > p_int_y8_reg_644;
    sc_signal< sc_lv<64> > p_int_z_reg_654;
    sc_signal< sc_lv<64> > p_int_z3_reg_664;
    sc_signal< sc_lv<64> > p_int_z4_reg_674;
    sc_signal< sc_lv<64> > p_int_z5_reg_684;
    sc_signal< sc_lv<64> > p_int_z6_reg_694;
    sc_signal< sc_lv<64> > p_int_z7_reg_704;
    sc_signal< sc_lv<64> > p_int_z8_reg_714;
    sc_signal< sc_lv<64> > p_int_z9_reg_724;
    sc_signal< sc_lv<64> > p_int_z1_reg_734;
    sc_signal< sc_lv<4> > i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter1_i_reg_744;
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
    sc_signal< bool > ap_block_state25_pp0_stage0_iter23;
    sc_signal< bool > ap_block_state26_pp0_stage0_iter24;
    sc_signal< bool > ap_block_state27_pp0_stage0_iter25;
    sc_signal< bool > ap_block_state28_pp0_stage0_iter26;
    sc_signal< bool > ap_block_state29_pp0_stage0_iter27;
    sc_signal< bool > ap_block_state30_pp0_stage0_iter28;
    sc_signal< bool > ap_block_state31_pp0_stage0_iter29;
    sc_signal< bool > ap_block_pp0_stage0_flag00011001;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter2_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter3_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter4_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter5_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter6_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter7_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter8_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter9_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter10_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter11_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter12_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter13_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter14_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter15_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter16_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter17_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter18_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter19_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter20_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter21_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter22_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter23_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter24_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter25_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter26_i_reg_744;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter27_i_reg_744;
    sc_signal< sc_lv<64> > p_int_8_vz_read_4_reg_2751;
    sc_signal< sc_lv<64> > p_int_7_vz_read53_reg_2769;
    sc_signal< sc_lv<64> > p_int_6_vz_read52_reg_2787;
    sc_signal< sc_lv<64> > p_int_5_vz_read51_reg_2805;
    sc_signal< sc_lv<64> > p_int_4_vz_read_4_reg_2810;
    sc_signal< sc_lv<64> > p_int_3_vz_read_4_reg_2815;
    sc_signal< sc_lv<64> > p_int_2_vz_read_3_reg_2820;
    sc_signal< sc_lv<64> > p_int_1_vz_read_4_reg_2825;
    sc_signal< sc_lv<64> > p_int_0_vz_read_4_reg_2830;
    sc_signal< sc_lv<64> > p_int_8_vy_read_4_reg_2835;
    sc_signal< sc_lv<64> > p_int_7_vy_read_4_reg_2853;
    sc_signal< sc_lv<64> > p_int_6_vy_read43_reg_2871;
    sc_signal< sc_lv<64> > p_int_5_vy_read42_reg_2889;
    sc_signal< sc_lv<64> > p_int_4_vy_read41_reg_2894;
    sc_signal< sc_lv<64> > p_int_3_vy_read_4_reg_2899;
    sc_signal< sc_lv<64> > p_int_2_vy_read_4_reg_2904;
    sc_signal< sc_lv<64> > p_int_1_vy_read_3_reg_2909;
    sc_signal< sc_lv<64> > p_int_0_vy_read_4_reg_2914;
    sc_signal< sc_lv<64> > p_int_8_vx_read_4_reg_2919;
    sc_signal< sc_lv<64> > p_int_7_vx_read_4_reg_2937;
    sc_signal< sc_lv<64> > p_int_6_vx_read_4_reg_2955;
    sc_signal< sc_lv<64> > p_int_5_vx_read33_reg_2960;
    sc_signal< sc_lv<64> > p_int_4_vx_read32_reg_2965;
    sc_signal< sc_lv<64> > p_int_3_vx_read31_reg_2970;
    sc_signal< sc_lv<64> > p_int_2_vx_read_4_reg_2975;
    sc_signal< sc_lv<64> > p_int_1_vx_read_4_reg_2980;
    sc_signal< sc_lv<64> > p_int_0_vx_read_4_reg_2985;
    sc_signal< sc_lv<1> > tmp_fu_963_p2;
    sc_signal< sc_lv<1> > tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter3_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter4_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter5_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter6_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter7_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter8_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter9_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter10_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter11_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter12_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter13_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter14_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter15_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter16_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter17_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter18_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter19_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter20_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter21_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter22_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter23_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter24_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter25_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter26_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter27_tmp_reg_3125;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter28_tmp_reg_3125;
    sc_signal< sc_lv<64> > p_int_vy_load_0_phi_fu_995_p18;
    sc_signal< sc_lv<64> > p_int_vz_load_0_phi_fu_1018_p18;
    sc_signal< sc_lv<4> > i_5_0_t_fu_1041_p2;
    sc_signal< sc_lv<4> > i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter1_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter2_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter3_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter4_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter5_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter6_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter7_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter8_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter9_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter10_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter11_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter12_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter13_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter14_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter15_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter16_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter17_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter18_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter19_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter20_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter21_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter22_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter23_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter24_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter25_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter26_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter27_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter28_i_5_0_t_reg_3144;
    sc_signal< sc_lv<4> > i_5_1_t_fu_1047_p2;
    sc_signal< sc_lv<4> > i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter1_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter2_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter3_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter4_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter5_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter6_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter7_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter8_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter9_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter10_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter11_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter12_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter13_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter14_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter15_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter16_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter17_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter18_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter19_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter20_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter21_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter22_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter23_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter24_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter25_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter26_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter27_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > ap_reg_pp0_iter28_i_5_1_t_reg_3163;
    sc_signal< sc_lv<4> > i_5_2_fu_1053_p2;
    sc_signal< sc_lv<4> > i_5_2_reg_3182;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > p_int_vx_load_1_phi_fu_1059_p18;
    sc_signal< sc_lv<64> > p_int_vy_load_1_phi_fu_1081_p18;
    sc_signal< sc_lv<64> > p_int_vz_load_1_phi_fu_1103_p18;
    sc_signal< sc_lv<64> > p_int_vx_load_2_phi_fu_1125_p18;
    sc_signal< sc_lv<64> > p_int_vy_load_2_phi_fu_1147_p18;
    sc_signal< sc_lv<64> > p_int_vz_load_2_phi_fu_1169_p18;
    sc_signal< sc_lv<64> > grp_fu_936_p1;
    sc_signal< sc_lv<64> > tmp_73_reg_3217;
    sc_signal< sc_lv<64> > grp_fu_939_p1;
    sc_signal< sc_lv<64> > tmp_79_reg_3222;
    sc_signal< sc_lv<64> > grp_fu_942_p1;
    sc_signal< sc_lv<64> > tmp_85_reg_3227;
    sc_signal< sc_lv<64> > grp_fu_945_p1;
    sc_signal< sc_lv<64> > tmp_73_1_reg_3232;
    sc_signal< sc_lv<64> > grp_fu_948_p1;
    sc_signal< sc_lv<64> > tmp_79_1_reg_3237;
    sc_signal< sc_lv<64> > grp_fu_951_p1;
    sc_signal< sc_lv<64> > tmp_85_1_reg_3242;
    sc_signal< sc_lv<64> > grp_fu_954_p1;
    sc_signal< sc_lv<64> > tmp_73_2_reg_3247;
    sc_signal< sc_lv<64> > grp_fu_957_p1;
    sc_signal< sc_lv<64> > tmp_79_2_reg_3252;
    sc_signal< sc_lv<64> > grp_fu_960_p1;
    sc_signal< sc_lv<64> > tmp_85_2_reg_3257;
    sc_signal< sc_lv<64> > grp_fu_801_p2;
    sc_signal< sc_lv<64> > tmp_74_reg_3262;
    sc_signal< sc_lv<64> > grp_fu_806_p2;
    sc_signal< sc_lv<64> > tmp_80_reg_3267;
    sc_signal< sc_lv<64> > grp_fu_811_p2;
    sc_signal< sc_lv<64> > tmp_86_reg_3272;
    sc_signal< sc_lv<64> > grp_fu_816_p2;
    sc_signal< sc_lv<64> > tmp_74_1_reg_3277;
    sc_signal< sc_lv<64> > grp_fu_821_p2;
    sc_signal< sc_lv<64> > tmp_80_1_reg_3282;
    sc_signal< sc_lv<64> > grp_fu_826_p2;
    sc_signal< sc_lv<64> > tmp_86_1_reg_3287;
    sc_signal< sc_lv<64> > grp_fu_831_p2;
    sc_signal< sc_lv<64> > tmp_74_2_reg_3292;
    sc_signal< sc_lv<64> > grp_fu_836_p2;
    sc_signal< sc_lv<64> > tmp_80_2_reg_3297;
    sc_signal< sc_lv<64> > grp_fu_841_p2;
    sc_signal< sc_lv<64> > tmp_86_2_reg_3302;
    sc_signal< sc_lv<64> > grp_fu_846_p2;
    sc_signal< sc_lv<64> > tmp_75_reg_3307;
    sc_signal< sc_lv<64> > grp_fu_851_p2;
    sc_signal< sc_lv<64> > tmp_81_reg_3312;
    sc_signal< sc_lv<64> > grp_fu_856_p2;
    sc_signal< sc_lv<64> > tmp_87_reg_3317;
    sc_signal< sc_lv<64> > grp_fu_861_p2;
    sc_signal< sc_lv<64> > tmp_75_1_reg_3322;
    sc_signal< sc_lv<64> > grp_fu_866_p2;
    sc_signal< sc_lv<64> > tmp_81_1_reg_3327;
    sc_signal< sc_lv<64> > grp_fu_871_p2;
    sc_signal< sc_lv<64> > tmp_87_1_reg_3332;
    sc_signal< sc_lv<64> > grp_fu_876_p2;
    sc_signal< sc_lv<64> > tmp_75_2_reg_3337;
    sc_signal< sc_lv<64> > grp_fu_881_p2;
    sc_signal< sc_lv<64> > tmp_81_2_reg_3342;
    sc_signal< sc_lv<64> > grp_fu_886_p2;
    sc_signal< sc_lv<64> > tmp_87_2_reg_3347;
    sc_signal< sc_lv<64> > grp_fu_891_p2;
    sc_signal< sc_lv<64> > tmp_76_reg_3352;
    sc_signal< sc_lv<64> > grp_fu_896_p2;
    sc_signal< sc_lv<64> > tmp_82_reg_3357;
    sc_signal< sc_lv<64> > grp_fu_901_p2;
    sc_signal< sc_lv<64> > tmp_88_reg_3362;
    sc_signal< sc_lv<64> > p_int_x6_1_fu_1235_p18;
    sc_signal< sc_lv<64> > p_int_x6_1_reg_3367;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter28;
    sc_signal< sc_lv<64> > p_int_x3_1_fu_1273_p18;
    sc_signal< sc_lv<64> > p_int_x3_1_reg_3372;
    sc_signal< sc_lv<64> > p_int_x_1_fu_1311_p18;
    sc_signal< sc_lv<64> > p_int_x_1_reg_3377;
    sc_signal< sc_lv<64> > p_int_y14_1_fu_1393_p18;
    sc_signal< sc_lv<64> > p_int_y14_1_reg_3382;
    sc_signal< sc_lv<64> > p_int_y1114_1_fu_1431_p18;
    sc_signal< sc_lv<64> > p_int_y1114_1_reg_3387;
    sc_signal< sc_lv<64> > p_int_y_1_fu_1469_p18;
    sc_signal< sc_lv<64> > p_int_y_1_reg_3392;
    sc_signal< sc_lv<64> > p_int_z22_1_fu_1551_p18;
    sc_signal< sc_lv<64> > p_int_z22_1_reg_3397;
    sc_signal< sc_lv<64> > p_int_z19_1_fu_1589_p18;
    sc_signal< sc_lv<64> > p_int_z19_1_reg_3402;
    sc_signal< sc_lv<64> > p_int_z_1_fu_1627_p18;
    sc_signal< sc_lv<64> > p_int_z_1_reg_3407;
    sc_signal< sc_lv<64> > grp_fu_906_p2;
    sc_signal< sc_lv<64> > tmp_76_1_reg_3412;
    sc_signal< sc_lv<64> > grp_fu_911_p2;
    sc_signal< sc_lv<64> > tmp_82_1_reg_3417;
    sc_signal< sc_lv<64> > grp_fu_916_p2;
    sc_signal< sc_lv<64> > tmp_88_1_reg_3422;
    sc_signal< sc_lv<64> > grp_fu_921_p2;
    sc_signal< sc_lv<64> > tmp_76_2_reg_3427;
    sc_signal< sc_lv<64> > grp_fu_926_p2;
    sc_signal< sc_lv<64> > tmp_82_2_reg_3432;
    sc_signal< sc_lv<64> > grp_fu_931_p2;
    sc_signal< sc_lv<64> > tmp_88_2_reg_3437;
    sc_signal< sc_lv<64> > p_int_x7_1_fu_1708_p18;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter29;
    sc_signal< sc_lv<64> > p_int_x4_1_fu_1745_p18;
    sc_signal< sc_lv<64> > p_int_x12_1_fu_1782_p18;
    sc_signal< sc_lv<64> > p_int_y15_1_fu_1862_p18;
    sc_signal< sc_lv<64> > p_int_y12_1_fu_1899_p18;
    sc_signal< sc_lv<64> > p_int_y9_1_fu_1936_p18;
    sc_signal< sc_lv<64> > p_int_z23_1_fu_2016_p18;
    sc_signal< sc_lv<64> > p_int_z20_1_fu_2053_p18;
    sc_signal< sc_lv<64> > p_int_z17_1_fu_2090_p18;
    sc_signal< sc_lv<64> > p_int_x8_1_fu_2170_p18;
    sc_signal< sc_lv<64> > p_int_x5_1_fu_2207_p18;
    sc_signal< sc_lv<64> > p_int_x2_1_fu_2244_p18;
    sc_signal< sc_lv<64> > p_int_y16_1_fu_2324_p18;
    sc_signal< sc_lv<64> > p_int_y13_1_fu_2361_p18;
    sc_signal< sc_lv<64> > p_int_y10_1_fu_2398_p18;
    sc_signal< sc_lv<64> > p_int_z24_1_fu_2478_p18;
    sc_signal< sc_lv<64> > p_int_z2126_1_fu_2515_p18;
    sc_signal< sc_lv<64> > p_int_z18_1_fu_2552_p18;
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
    sc_signal< sc_logic > ap_enable_reg_pp0_iter22;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter23;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter24;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter25;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter26;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter27;
    sc_signal< sc_lv<64> > tmp_77_p_hls_fptosi_double_s_fu_756_ap_return;
    sc_signal< sc_lv<64> > tmp_83_p_hls_fptosi_double_s_fu_761_ap_return;
    sc_signal< sc_lv<64> > tmp_89_p_hls_fptosi_double_s_fu_766_ap_return;
    sc_signal< sc_lv<64> > tmp_77_1_p_hls_fptosi_double_s_fu_771_ap_return;
    sc_signal< sc_lv<64> > tmp_83_1_p_hls_fptosi_double_s_fu_776_ap_return;
    sc_signal< sc_lv<64> > tmp_89_1_p_hls_fptosi_double_s_fu_781_ap_return;
    sc_signal< sc_lv<64> > tmp_77_2_p_hls_fptosi_double_s_fu_786_ap_return;
    sc_signal< sc_lv<64> > tmp_83_2_p_hls_fptosi_double_s_fu_791_ap_return;
    sc_signal< sc_lv<64> > tmp_89_2_p_hls_fptosi_double_s_fu_796_ap_return;
    sc_signal< sc_lv<64> > p_int_x_phi_fu_477_p4;
    sc_signal< bool > ap_block_pp0_stage0_flag00000000;
    sc_signal< sc_lv<64> > p_int_x3_phi_fu_507_p4;
    sc_signal< sc_lv<64> > p_int_x6_phi_fu_537_p4;
    sc_signal< sc_lv<64> > p_int_y_phi_fu_567_p4;
    sc_signal< sc_lv<64> > p_int_y3_phi_fu_597_p4;
    sc_signal< sc_lv<64> > p_int_y6_phi_fu_627_p4;
    sc_signal< sc_lv<64> > p_int_z_phi_fu_657_p4;
    sc_signal< sc_lv<64> > p_int_z5_phi_fu_687_p4;
    sc_signal< sc_lv<64> > p_int_z8_phi_fu_717_p4;
    sc_signal< sc_lv<4> > i_phi_fu_748_p4;
    sc_signal< sc_lv<64> > grp_fu_936_p0;
    sc_signal< sc_lv<1> > sel_tmp_fu_969_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_981_p2;
    sc_signal< sc_lv<64> > sel_tmp1_fu_975_p3;
    sc_signal< sc_lv<64> > p_int_x_load_0_phi_fu_1191_p18;
    sc_signal< sc_lv<64> > tmp_78_fu_1229_p2;
    sc_signal< sc_lv<64> > p_int_y_load_0_phi_fu_1349_p18;
    sc_signal< sc_lv<64> > tmp_84_fu_1387_p2;
    sc_signal< sc_lv<64> > p_int_z_load_0_phi_fu_1507_p18;
    sc_signal< sc_lv<64> > tmp_90_fu_1545_p2;
    sc_signal< sc_lv<64> > p_int_x_load_1_phi_fu_1665_p18;
    sc_signal< sc_lv<64> > tmp_78_1_fu_1702_p2;
    sc_signal< sc_lv<64> > p_int_y_load_1_phi_fu_1819_p18;
    sc_signal< sc_lv<64> > tmp_84_1_fu_1856_p2;
    sc_signal< sc_lv<64> > p_int_z_load_1_phi_fu_1973_p18;
    sc_signal< sc_lv<64> > tmp_90_1_fu_2010_p2;
    sc_signal< sc_lv<64> > p_int_x_load_2_phi_fu_2127_p18;
    sc_signal< sc_lv<64> > tmp_78_2_fu_2164_p2;
    sc_signal< sc_lv<64> > p_int_y_load_2_phi_fu_2281_p18;
    sc_signal< sc_lv<64> > tmp_84_2_fu_2318_p2;
    sc_signal< sc_lv<64> > p_int_z_load_2_phi_fu_2435_p18;
    sc_signal< sc_lv<64> > tmp_90_2_fu_2472_p2;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state32;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_3F747AE147AE147B;
    static const sc_lv<64> ap_const_lv64_3C9CD2B297D889BC;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state32();
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
    void thread_ap_block_state25_pp0_stage0_iter23();
    void thread_ap_block_state26_pp0_stage0_iter24();
    void thread_ap_block_state27_pp0_stage0_iter25();
    void thread_ap_block_state28_pp0_stage0_iter26();
    void thread_ap_block_state29_pp0_stage0_iter27();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state30_pp0_stage0_iter28();
    void thread_ap_block_state31_pp0_stage0_iter29();
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
    void thread_grp_fu_936_p0();
    void thread_i_5_0_t_fu_1041_p2();
    void thread_i_5_1_t_fu_1047_p2();
    void thread_i_5_2_fu_1053_p2();
    void thread_i_phi_fu_748_p4();
    void thread_p_int_x3_phi_fu_507_p4();
    void thread_p_int_x6_phi_fu_537_p4();
    void thread_p_int_x_phi_fu_477_p4();
    void thread_p_int_y3_phi_fu_597_p4();
    void thread_p_int_y6_phi_fu_627_p4();
    void thread_p_int_y_phi_fu_567_p4();
    void thread_p_int_z5_phi_fu_687_p4();
    void thread_p_int_z8_phi_fu_717_p4();
    void thread_p_int_z_phi_fu_657_p4();
    void thread_sel_tmp1_fu_975_p3();
    void thread_sel_tmp2_fu_981_p2();
    void thread_sel_tmp_fu_969_p2();
    void thread_tmp_78_1_fu_1702_p2();
    void thread_tmp_78_2_fu_2164_p2();
    void thread_tmp_78_fu_1229_p2();
    void thread_tmp_84_1_fu_1856_p2();
    void thread_tmp_84_2_fu_2318_p2();
    void thread_tmp_84_fu_1387_p2();
    void thread_tmp_90_1_fu_2010_p2();
    void thread_tmp_90_2_fu_2472_p2();
    void thread_tmp_90_fu_1545_p2();
    void thread_tmp_fu_963_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
