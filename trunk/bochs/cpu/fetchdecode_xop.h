/////////////////////////////////////////////////////////////////////////
// $Id$
/////////////////////////////////////////////////////////////////////////
//
//   Copyright (c) 2011-2013 Stanislav Shwartsman
//          Written by Stanislav Shwartsman [sshwarts at sourceforge net]
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA B 02110-1301 USA
//
/////////////////////////////////////////////////////////////////////////

#ifndef BX_XOP_FETCHDECODE_TABLES_H
#define BX_XOP_FETCHDECODE_TABLES_H

#if BX_SUPPORT_AVX

/* ************************************************************************ */

static const BxOpcodeInfo_t BxOpcodeInfoXOP_G1d[8] = {
  /* 0 */ { 0, BX_IA_ERROR },
  /* 1 */ { 0, BX_IA_BLCFILL_BdEd },
  /* 2 */ { 0, BX_IA_BLSFILL_BdEd },
  /* 3 */ { 0, BX_IA_BLCS_BdEd },
  /* 4 */ { 0, BX_IA_TZMSK_BdEd },
  /* 5 */ { 0, BX_IA_BLCIC_BdEd },
  /* 6 */ { 0, BX_IA_BLSIC_BdEd },
  /* 7 */ { 0, BX_IA_T1MSKC_BdEd }
};

static const BxOpcodeInfo_t BxOpcodeInfoXOP_G1q[8] = {
  /* 0 */ { 0, BX_IA_ERROR },
  /* 1 */ { 0, BX_IA_BLCFILL_BqEq },
  /* 2 */ { 0, BX_IA_BLSFILL_BqEq },
  /* 3 */ { 0, BX_IA_BLCS_BqEq },
  /* 4 */ { 0, BX_IA_TZMSK_BqEq },
  /* 5 */ { 0, BX_IA_BLCIC_BqEq },
  /* 6 */ { 0, BX_IA_BLSIC_BqEq },
  /* 7 */ { 0, BX_IA_T1MSKC_BqEq }
};

static const BxOpcodeInfo_t BxOpcodeInfoXOP_G1[2] = {
  /* 0 */ { BxGroupN, BX_IA_ERROR, BxOpcodeInfoXOP_G1d },
  /* 1 */ { BxGroupN, BX_IA_ERROR, BxOpcodeInfoXOP_G1q }
};

static const BxOpcodeInfo_t BxOpcodeInfoXOP_G2d[8] = {
  /* 0 */ { 0, BX_IA_ERROR },
  /* 1 */ { 0, BX_IA_BLCMSK_BdEd },
  /* 2 */ { 0, BX_IA_ERROR },
  /* 3 */ { 0, BX_IA_ERROR },
  /* 4 */ { 0, BX_IA_ERROR },
  /* 5 */ { 0, BX_IA_ERROR },
  /* 6 */ { 0, BX_IA_BLCI_BdEd },
  /* 7 */ { 0, BX_IA_ERROR }
};

static const BxOpcodeInfo_t BxOpcodeInfoXOP_G2q[8] = {
  /* 0 */ { 0, BX_IA_ERROR },
  /* 1 */ { 0, BX_IA_BLCMSK_BqEq },
  /* 2 */ { 0, BX_IA_ERROR },
  /* 3 */ { 0, BX_IA_ERROR },
  /* 4 */ { 0, BX_IA_ERROR },
  /* 5 */ { 0, BX_IA_ERROR },
  /* 6 */ { 0, BX_IA_BLCI_BqEq },
  /* 7 */ { 0, BX_IA_ERROR }
};

static const BxOpcodeInfo_t BxOpcodeInfoXOP_G2[2] = {
  /* 0 */ { BxGroupN, BX_IA_ERROR, BxOpcodeInfoXOP_G2d },
  /* 1 */ { BxGroupN, BX_IA_ERROR, BxOpcodeInfoXOP_G2q }
};

static const BxOpcodeInfo_t BxOpcodeInfoXOP_A10[2] = {
  /* 0 */ { BxImmediate_Id, BX_IA_BEXTR_GdEdId },
  /* 1 */ { BxImmediate_Id, BX_IA_BEXTR_GqEqId }
};

/* ************************************************************************ */

static const BxOpcodeInfo_t BxOpcodeTableXOP[256*3] = {
  // 256 entries for XOP-encoded map 0x8 opcodes
  /* 00 /0 */ { 0, BX_IA_ERROR },
  /* 01 /0 */ { BxSplitVexW64 | BxVexL0, BX_IA_ERROR, BxOpcodeInfoXOP_G1 },
  /* 02 /0 */ { BxSplitVexW64 | BxVexL0, BX_IA_ERROR, BxOpcodeInfoXOP_G2 },
  /* 03 /0 */ { 0, BX_IA_ERROR },
  /* 04 /0 */ { 0, BX_IA_ERROR },
  /* 05 /0 */ { 0, BX_IA_ERROR },
  /* 06 /0 */ { 0, BX_IA_ERROR },
  /* 07 /0 */ { 0, BX_IA_ERROR },
  /* 08 /0 */ { 0, BX_IA_ERROR },
  /* 09 /0 */ { 0, BX_IA_ERROR },
  /* 0A /0 */ { 0, BX_IA_ERROR },
  /* 0B /0 */ { 0, BX_IA_ERROR },
  /* 0C /0 */ { 0, BX_IA_ERROR },
  /* 0D /0 */ { 0, BX_IA_ERROR },
  /* 0E /0 */ { 0, BX_IA_ERROR },
  /* 0F /0 */ { 0, BX_IA_ERROR },
  /* 10 /0 */ { 0, BX_IA_ERROR },
  /* 11 /0 */ { 0, BX_IA_ERROR },
  /* 12 /0 */ { 0, BX_IA_ERROR },
  /* 13 /0 */ { 0, BX_IA_ERROR },
  /* 14 /0 */ { 0, BX_IA_ERROR },
  /* 15 /0 */ { 0, BX_IA_ERROR },
  /* 16 /0 */ { 0, BX_IA_ERROR },
  /* 17 /0 */ { 0, BX_IA_ERROR },
  /* 18 /0 */ { 0, BX_IA_ERROR },
  /* 19 /0 */ { 0, BX_IA_ERROR },
  /* 1A /0 */ { 0, BX_IA_ERROR },
  /* 1B /0 */ { 0, BX_IA_ERROR },
  /* 1C /0 */ { 0, BX_IA_ERROR },
  /* 1D /0 */ { 0, BX_IA_ERROR },
  /* 1E /0 */ { 0, BX_IA_ERROR },
  /* 1F /0 */ { 0, BX_IA_ERROR },
  /* 20 /0 */ { 0, BX_IA_ERROR },
  /* 21 /0 */ { 0, BX_IA_ERROR },
  /* 22 /0 */ { 0, BX_IA_ERROR },
  /* 23 /0 */ { 0, BX_IA_ERROR },
  /* 24 /0 */ { 0, BX_IA_ERROR },
  /* 25 /0 */ { 0, BX_IA_ERROR },
  /* 26 /0 */ { 0, BX_IA_ERROR },
  /* 27 /0 */ { 0, BX_IA_ERROR },
  /* 28 /0 */ { 0, BX_IA_ERROR },
  /* 29 /0 */ { 0, BX_IA_ERROR },
  /* 2A /0 */ { 0, BX_IA_ERROR },
  /* 2B /0 */ { 0, BX_IA_ERROR },
  /* 2C /0 */ { 0, BX_IA_ERROR },
  /* 2D /0 */ { 0, BX_IA_ERROR },
  /* 2E /0 */ { 0, BX_IA_ERROR },
  /* 2F /0 */ { 0, BX_IA_ERROR },
  /* 30 /0 */ { 0, BX_IA_ERROR },
  /* 31 /0 */ { 0, BX_IA_ERROR },
  /* 32 /0 */ { 0, BX_IA_ERROR },
  /* 33 /0 */ { 0, BX_IA_ERROR },
  /* 34 /0 */ { 0, BX_IA_ERROR },
  /* 35 /0 */ { 0, BX_IA_ERROR },
  /* 36 /0 */ { 0, BX_IA_ERROR },
  /* 37 /0 */ { 0, BX_IA_ERROR },
  /* 38 /0 */ { 0, BX_IA_ERROR },
  /* 39 /0 */ { 0, BX_IA_ERROR },
  /* 3A /0 */ { 0, BX_IA_ERROR },
  /* 3B /0 */ { 0, BX_IA_ERROR },
  /* 3C /0 */ { 0, BX_IA_ERROR },
  /* 3D /0 */ { 0, BX_IA_ERROR },
  /* 3E /0 */ { 0, BX_IA_ERROR },
  /* 3F /0 */ { 0, BX_IA_ERROR },
  /* 40 /0 */ { 0, BX_IA_ERROR },
  /* 41 /0 */ { 0, BX_IA_ERROR },
  /* 42 /0 */ { 0, BX_IA_ERROR },
  /* 43 /0 */ { 0, BX_IA_ERROR },
  /* 44 /0 */ { 0, BX_IA_ERROR },
  /* 45 /0 */ { 0, BX_IA_ERROR },
  /* 46 /0 */ { 0, BX_IA_ERROR },
  /* 47 /0 */ { 0, BX_IA_ERROR },
  /* 48 /0 */ { 0, BX_IA_ERROR },
  /* 49 /0 */ { 0, BX_IA_ERROR },
  /* 4A /0 */ { 0, BX_IA_ERROR },
  /* 4B /0 */ { 0, BX_IA_ERROR },
  /* 4C /0 */ { 0, BX_IA_ERROR },
  /* 4D /0 */ { 0, BX_IA_ERROR },
  /* 4E /0 */ { 0, BX_IA_ERROR },
  /* 4F /0 */ { 0, BX_IA_ERROR },
  /* 50 /0 */ { 0, BX_IA_ERROR },
  /* 51 /0 */ { 0, BX_IA_ERROR },
  /* 52 /0 */ { 0, BX_IA_ERROR },
  /* 53 /0 */ { 0, BX_IA_ERROR },
  /* 54 /0 */ { 0, BX_IA_ERROR },
  /* 55 /0 */ { 0, BX_IA_ERROR },
  /* 56 /0 */ { 0, BX_IA_ERROR },
  /* 57 /0 */ { 0, BX_IA_ERROR },
  /* 58 /0 */ { 0, BX_IA_ERROR },
  /* 59 /0 */ { 0, BX_IA_ERROR },
  /* 5A /0 */ { 0, BX_IA_ERROR },
  /* 5B /0 */ { 0, BX_IA_ERROR },
  /* 5C /0 */ { 0, BX_IA_ERROR },
  /* 5D /0 */ { 0, BX_IA_ERROR },
  /* 5E /0 */ { 0, BX_IA_ERROR },
  /* 5F /0 */ { 0, BX_IA_ERROR },
  /* 60 /0 */ { 0, BX_IA_ERROR },
  /* 61 /0 */ { 0, BX_IA_ERROR },
  /* 62 /0 */ { 0, BX_IA_ERROR },
  /* 63 /0 */ { 0, BX_IA_ERROR },
  /* 64 /0 */ { 0, BX_IA_ERROR },
  /* 65 /0 */ { 0, BX_IA_ERROR },
  /* 66 /0 */ { 0, BX_IA_ERROR },
  /* 67 /0 */ { 0, BX_IA_ERROR },
  /* 68 /0 */ { 0, BX_IA_ERROR },
  /* 69 /0 */ { 0, BX_IA_ERROR },
  /* 6A /0 */ { 0, BX_IA_ERROR },
  /* 6B /0 */ { 0, BX_IA_ERROR },
  /* 6C /0 */ { 0, BX_IA_ERROR },
  /* 6D /0 */ { 0, BX_IA_ERROR },
  /* 6E /0 */ { 0, BX_IA_ERROR },
  /* 6F /0 */ { 0, BX_IA_ERROR },
  /* 70 /0 */ { 0, BX_IA_ERROR },
  /* 71 /0 */ { 0, BX_IA_ERROR },
  /* 72 /0 */ { 0, BX_IA_ERROR },
  /* 73 /0 */ { 0, BX_IA_ERROR },
  /* 74 /0 */ { 0, BX_IA_ERROR },
  /* 75 /0 */ { 0, BX_IA_ERROR },
  /* 76 /0 */ { 0, BX_IA_ERROR },
  /* 77 /0 */ { 0, BX_IA_ERROR },
  /* 78 /0 */ { 0, BX_IA_ERROR },
  /* 79 /0 */ { 0, BX_IA_ERROR },
  /* 7A /0 */ { 0, BX_IA_ERROR },
  /* 7B /0 */ { 0, BX_IA_ERROR },
  /* 7C /0 */ { 0, BX_IA_ERROR },
  /* 7D /0 */ { 0, BX_IA_ERROR },
  /* 7E /0 */ { 0, BX_IA_ERROR },
  /* 7F /0 */ { 0, BX_IA_ERROR },
  /* 80 /0 */ { 0, BX_IA_ERROR },
  /* 81 /0 */ { 0, BX_IA_ERROR },
  /* 82 /0 */ { 0, BX_IA_ERROR },
  /* 83 /0 */ { 0, BX_IA_ERROR },
  /* 84 /0 */ { 0, BX_IA_ERROR },
  /* 85 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSSWW_VdqHdqWdqVIb },
  /* 86 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSSWD_VdqHdqWdqVIb },
  /* 87 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSSDQL_VdqHdqWdqVIb },
  /* 88 /0 */ { 0, BX_IA_ERROR },
  /* 89 /0 */ { 0, BX_IA_ERROR },
  /* 8A /0 */ { 0, BX_IA_ERROR },
  /* 8B /0 */ { 0, BX_IA_ERROR },
  /* 8C /0 */ { 0, BX_IA_ERROR },
  /* 8D /0 */ { 0, BX_IA_ERROR },
  /* 8E /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSSDD_VdqHdqWdqVIb },
  /* 8F /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSSDQH_VdqHdqWdqVIb },
  /* 90 /0 */ { 0, BX_IA_ERROR },
  /* 91 /0 */ { 0, BX_IA_ERROR },
  /* 92 /0 */ { 0, BX_IA_ERROR },
  /* 93 /0 */ { 0, BX_IA_ERROR },
  /* 94 /0 */ { 0, BX_IA_ERROR },
  /* 95 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSWW_VdqHdqWdqVIb },
  /* 96 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSWD_VdqHdqWdqVIb },
  /* 97 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSDQL_VdqHdqWdqVIb },
  /* 98 /0 */ { 0, BX_IA_ERROR },
  /* 99 /0 */ { 0, BX_IA_ERROR },
  /* 9A /0 */ { 0, BX_IA_ERROR },
  /* 9B /0 */ { 0, BX_IA_ERROR },
  /* 9C /0 */ { 0, BX_IA_ERROR },
  /* 9D /0 */ { 0, BX_IA_ERROR },
  /* 9E /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSDD_VdqHdqWdqVIb },
  /* 9F /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMACSDQH_VdqHdqWdqVIb },
  /* A0 /0 */ { 0, BX_IA_ERROR },
  /* A1 /0 */ { 0, BX_IA_ERROR },
  /* A2 /0 */ { BxAliasVexW | BxImmediate_Ib4, BX_IA_VPCMOV_VdqHdqVIbWdq },
  /* A3 /0 */ { BxAliasVexW | BxVexL0 | BxImmediate_Ib4, BX_IA_VPPERM_VdqHdqVIbWdq },
  /* A4 /0 */ { 0, BX_IA_ERROR },
  /* A5 /0 */ { 0, BX_IA_ERROR },
  /* A6 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMADCSSWD_VdqHdqWdqVIb },
  /* A7 /0 */ { 0, BX_IA_ERROR },
  /* A8 /0 */ { 0, BX_IA_ERROR },
  /* A9 /0 */ { 0, BX_IA_ERROR },
  /* AA /0 */ { 0, BX_IA_ERROR },
  /* AB /0 */ { 0, BX_IA_ERROR },
  /* AC /0 */ { 0, BX_IA_ERROR },
  /* AD /0 */ { 0, BX_IA_ERROR },
  /* AE /0 */ { 0, BX_IA_ERROR },
  /* AF /0 */ { 0, BX_IA_ERROR },
  /* B0 /0 */ { 0, BX_IA_ERROR },
  /* B1 /0 */ { 0, BX_IA_ERROR },
  /* B2 /0 */ { 0, BX_IA_ERROR },
  /* B3 /0 */ { 0, BX_IA_ERROR },
  /* B4 /0 */ { 0, BX_IA_ERROR },
  /* B5 /0 */ { 0, BX_IA_ERROR },
  /* B6 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib4, BX_IA_VPMADCSWD_VdqHdqWdqVIb },
  /* B7 /0 */ { 0, BX_IA_ERROR },
  /* B8 /0 */ { 0, BX_IA_ERROR },
  /* B9 /0 */ { 0, BX_IA_ERROR },
  /* BA /0 */ { 0, BX_IA_ERROR },
  /* BB /0 */ { 0, BX_IA_ERROR },
  /* BC /0 */ { 0, BX_IA_ERROR },
  /* BD /0 */ { 0, BX_IA_ERROR },
  /* BE /0 */ { 0, BX_IA_ERROR },
  /* BF /0 */ { 0, BX_IA_ERROR },
  /* C0 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPROTB_VdqWdqIb },
  /* C1 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPROTW_VdqWdqIb },
  /* C2 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPROTD_VdqWdqIb },
  /* C3 /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPROTQ_VdqWdqIb },
  /* C4 /0 */ { 0, BX_IA_ERROR },
  /* C5 /0 */ { 0, BX_IA_ERROR },
  /* C6 /0 */ { 0, BX_IA_ERROR },
  /* C7 /0 */ { 0, BX_IA_ERROR },
  /* C8 /0 */ { 0, BX_IA_ERROR },
  /* C9 /0 */ { 0, BX_IA_ERROR },
  /* CA /0 */ { 0, BX_IA_ERROR },
  /* CB /0 */ { 0, BX_IA_ERROR },
  /* CC /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMB_VdqHdqWdqIb },
  /* CD /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMW_VdqHdqWdqIb },
  /* CE /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMD_VdqHdqWdqIb },
  /* CF /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMQ_VdqHdqWdqIb },
  /* D0 /0 */ { 0, BX_IA_ERROR },
  /* D1 /0 */ { 0, BX_IA_ERROR },
  /* D2 /0 */ { 0, BX_IA_ERROR },
  /* D3 /0 */ { 0, BX_IA_ERROR },
  /* D4 /0 */ { 0, BX_IA_ERROR },
  /* D5 /0 */ { 0, BX_IA_ERROR },
  /* D6 /0 */ { 0, BX_IA_ERROR },
  /* D7 /0 */ { 0, BX_IA_ERROR },
  /* D8 /0 */ { 0, BX_IA_ERROR },
  /* D9 /0 */ { 0, BX_IA_ERROR },
  /* DA /0 */ { 0, BX_IA_ERROR },
  /* DB /0 */ { 0, BX_IA_ERROR },
  /* DC /0 */ { 0, BX_IA_ERROR },
  /* DD /0 */ { 0, BX_IA_ERROR },
  /* DE /0 */ { 0, BX_IA_ERROR },
  /* DF /0 */ { 0, BX_IA_ERROR },
  /* E0 /0 */ { 0, BX_IA_ERROR },
  /* E1 /0 */ { 0, BX_IA_ERROR },
  /* E2 /0 */ { 0, BX_IA_ERROR },
  /* E3 /0 */ { 0, BX_IA_ERROR },
  /* E4 /0 */ { 0, BX_IA_ERROR },
  /* E5 /0 */ { 0, BX_IA_ERROR },
  /* E6 /0 */ { 0, BX_IA_ERROR },
  /* E7 /0 */ { 0, BX_IA_ERROR },
  /* E8 /0 */ { 0, BX_IA_ERROR },
  /* E9 /0 */ { 0, BX_IA_ERROR },
  /* EA /0 */ { 0, BX_IA_ERROR },
  /* EB /0 */ { 0, BX_IA_ERROR },
  /* EC /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMUB_VdqHdqWdqIb },
  /* ED /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMUW_VdqHdqWdqIb },
  /* EE /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMUD_VdqHdqWdqIb },
  /* EF /0 */ { BxVexW0 | BxVexL0 | BxImmediate_Ib, BX_IA_VPCOMUQ_VdqHdqWdqIb },
  /* F0 /0 */ { 0, BX_IA_ERROR },
  /* F1 /0 */ { 0, BX_IA_ERROR },
  /* F2 /0 */ { 0, BX_IA_ERROR },
  /* F3 /0 */ { 0, BX_IA_ERROR },
  /* F4 /0 */ { 0, BX_IA_ERROR },
  /* F5 /0 */ { 0, BX_IA_ERROR },
  /* F6 /0 */ { 0, BX_IA_ERROR },
  /* F7 /0 */ { 0, BX_IA_ERROR },
  /* F8 /0 */ { 0, BX_IA_ERROR },
  /* F9 /0 */ { 0, BX_IA_ERROR },
  /* FA /0 */ { 0, BX_IA_ERROR },
  /* FB /0 */ { 0, BX_IA_ERROR },
  /* FC /0 */ { 0, BX_IA_ERROR },
  /* FD /0 */ { 0, BX_IA_ERROR },
  /* FE /0 */ { 0, BX_IA_ERROR },
  /* FF /0 */ { 0, BX_IA_ERROR },

  // 256 entries for XOP-encoded map 0x9 opcodes
  /* 00 /0 */ { 0, BX_IA_ERROR },
  /* 01 /0 */ { 0, BX_IA_ERROR },
  /* 02 /0 */ { 0, BX_IA_ERROR },
  /* 03 /0 */ { 0, BX_IA_ERROR },
  /* 04 /0 */ { 0, BX_IA_ERROR },
  /* 05 /0 */ { 0, BX_IA_ERROR },
  /* 06 /0 */ { 0, BX_IA_ERROR },
  /* 07 /0 */ { 0, BX_IA_ERROR },
  /* 08 /0 */ { 0, BX_IA_ERROR },
  /* 09 /0 */ { 0, BX_IA_ERROR },
  /* 0A /0 */ { 0, BX_IA_ERROR },
  /* 0B /0 */ { 0, BX_IA_ERROR },
  /* 0C /0 */ { 0, BX_IA_ERROR },
  /* 0D /0 */ { 0, BX_IA_ERROR },
  /* 0E /0 */ { 0, BX_IA_ERROR },
  /* 0F /0 */ { 0, BX_IA_ERROR },
  /* 10 /0 */ { 0, BX_IA_ERROR },
  /* 11 /0 */ { 0, BX_IA_ERROR },
  /* 12 /0 */ { 0, BX_IA_ERROR },
  /* 13 /0 */ { 0, BX_IA_ERROR },
  /* 14 /0 */ { 0, BX_IA_ERROR },
  /* 15 /0 */ { 0, BX_IA_ERROR },
  /* 16 /0 */ { 0, BX_IA_ERROR },
  /* 17 /0 */ { 0, BX_IA_ERROR },
  /* 18 /0 */ { 0, BX_IA_ERROR },
  /* 19 /0 */ { 0, BX_IA_ERROR },
  /* 1A /0 */ { 0, BX_IA_ERROR },
  /* 1B /0 */ { 0, BX_IA_ERROR },
  /* 1C /0 */ { 0, BX_IA_ERROR },
  /* 1D /0 */ { 0, BX_IA_ERROR },
  /* 1E /0 */ { 0, BX_IA_ERROR },
  /* 1F /0 */ { 0, BX_IA_ERROR },
  /* 20 /0 */ { 0, BX_IA_ERROR },
  /* 21 /0 */ { 0, BX_IA_ERROR },
  /* 22 /0 */ { 0, BX_IA_ERROR },
  /* 23 /0 */ { 0, BX_IA_ERROR },
  /* 24 /0 */ { 0, BX_IA_ERROR },
  /* 25 /0 */ { 0, BX_IA_ERROR },
  /* 26 /0 */ { 0, BX_IA_ERROR },
  /* 27 /0 */ { 0, BX_IA_ERROR },
  /* 28 /0 */ { 0, BX_IA_ERROR },
  /* 29 /0 */ { 0, BX_IA_ERROR },
  /* 2A /0 */ { 0, BX_IA_ERROR },
  /* 2B /0 */ { 0, BX_IA_ERROR },
  /* 2C /0 */ { 0, BX_IA_ERROR },
  /* 2D /0 */ { 0, BX_IA_ERROR },
  /* 2E /0 */ { 0, BX_IA_ERROR },
  /* 2F /0 */ { 0, BX_IA_ERROR },
  /* 30 /0 */ { 0, BX_IA_ERROR },
  /* 31 /0 */ { 0, BX_IA_ERROR },
  /* 32 /0 */ { 0, BX_IA_ERROR },
  /* 33 /0 */ { 0, BX_IA_ERROR },
  /* 34 /0 */ { 0, BX_IA_ERROR },
  /* 35 /0 */ { 0, BX_IA_ERROR },
  /* 36 /0 */ { 0, BX_IA_ERROR },
  /* 37 /0 */ { 0, BX_IA_ERROR },
  /* 38 /0 */ { 0, BX_IA_ERROR },
  /* 39 /0 */ { 0, BX_IA_ERROR },
  /* 3A /0 */ { 0, BX_IA_ERROR },
  /* 3B /0 */ { 0, BX_IA_ERROR },
  /* 3C /0 */ { 0, BX_IA_ERROR },
  /* 3D /0 */ { 0, BX_IA_ERROR },
  /* 3E /0 */ { 0, BX_IA_ERROR },
  /* 3F /0 */ { 0, BX_IA_ERROR },
  /* 40 /0 */ { 0, BX_IA_ERROR },
  /* 41 /0 */ { 0, BX_IA_ERROR },
  /* 42 /0 */ { 0, BX_IA_ERROR },
  /* 43 /0 */ { 0, BX_IA_ERROR },
  /* 44 /0 */ { 0, BX_IA_ERROR },
  /* 45 /0 */ { 0, BX_IA_ERROR },
  /* 46 /0 */ { 0, BX_IA_ERROR },
  /* 47 /0 */ { 0, BX_IA_ERROR },
  /* 48 /0 */ { 0, BX_IA_ERROR },
  /* 49 /0 */ { 0, BX_IA_ERROR },
  /* 4A /0 */ { 0, BX_IA_ERROR },
  /* 4B /0 */ { 0, BX_IA_ERROR },
  /* 4C /0 */ { 0, BX_IA_ERROR },
  /* 4D /0 */ { 0, BX_IA_ERROR },
  /* 4E /0 */ { 0, BX_IA_ERROR },
  /* 4F /0 */ { 0, BX_IA_ERROR },
  /* 50 /0 */ { 0, BX_IA_ERROR },
  /* 51 /0 */ { 0, BX_IA_ERROR },
  /* 52 /0 */ { 0, BX_IA_ERROR },
  /* 53 /0 */ { 0, BX_IA_ERROR },
  /* 54 /0 */ { 0, BX_IA_ERROR },
  /* 55 /0 */ { 0, BX_IA_ERROR },
  /* 56 /0 */ { 0, BX_IA_ERROR },
  /* 57 /0 */ { 0, BX_IA_ERROR },
  /* 58 /0 */ { 0, BX_IA_ERROR },
  /* 59 /0 */ { 0, BX_IA_ERROR },
  /* 5A /0 */ { 0, BX_IA_ERROR },
  /* 5B /0 */ { 0, BX_IA_ERROR },
  /* 5C /0 */ { 0, BX_IA_ERROR },
  /* 5D /0 */ { 0, BX_IA_ERROR },
  /* 5E /0 */ { 0, BX_IA_ERROR },
  /* 5F /0 */ { 0, BX_IA_ERROR },
  /* 60 /0 */ { 0, BX_IA_ERROR },
  /* 61 /0 */ { 0, BX_IA_ERROR },
  /* 62 /0 */ { 0, BX_IA_ERROR },
  /* 63 /0 */ { 0, BX_IA_ERROR },
  /* 64 /0 */ { 0, BX_IA_ERROR },
  /* 65 /0 */ { 0, BX_IA_ERROR },
  /* 66 /0 */ { 0, BX_IA_ERROR },
  /* 67 /0 */ { 0, BX_IA_ERROR },
  /* 68 /0 */ { 0, BX_IA_ERROR },
  /* 69 /0 */ { 0, BX_IA_ERROR },
  /* 6A /0 */ { 0, BX_IA_ERROR },
  /* 6B /0 */ { 0, BX_IA_ERROR },
  /* 6C /0 */ { 0, BX_IA_ERROR },
  /* 6D /0 */ { 0, BX_IA_ERROR },
  /* 6E /0 */ { 0, BX_IA_ERROR },
  /* 6F /0 */ { 0, BX_IA_ERROR },
  /* 70 /0 */ { 0, BX_IA_ERROR },
  /* 71 /0 */ { 0, BX_IA_ERROR },
  /* 72 /0 */ { 0, BX_IA_ERROR },
  /* 73 /0 */ { 0, BX_IA_ERROR },
  /* 74 /0 */ { 0, BX_IA_ERROR },
  /* 75 /0 */ { 0, BX_IA_ERROR },
  /* 76 /0 */ { 0, BX_IA_ERROR },
  /* 77 /0 */ { 0, BX_IA_ERROR },
  /* 78 /0 */ { 0, BX_IA_ERROR },
  /* 79 /0 */ { 0, BX_IA_ERROR },
  /* 7A /0 */ { 0, BX_IA_ERROR },
  /* 7B /0 */ { 0, BX_IA_ERROR },
  /* 7C /0 */ { 0, BX_IA_ERROR },
  /* 7D /0 */ { 0, BX_IA_ERROR },
  /* 7E /0 */ { 0, BX_IA_ERROR },
  /* 7F /0 */ { 0, BX_IA_ERROR },
  /* 80 /0 */ { BxVexW0, BX_IA_VFRCZPS_VpsWps },
  /* 81 /0 */ { BxVexW0, BX_IA_VFRCZPD_VpdWpd },
  /* 82 /0 */ { BxVexW0 | BxVexL0, BX_IA_VFRCZSS_VssWss },
  /* 83 /0 */ { BxVexW0 | BxVexL0, BX_IA_VFRCZSD_VsdWsd },
  /* 84 /0 */ { 0, BX_IA_ERROR },
  /* 85 /0 */ { 0, BX_IA_ERROR },
  /* 86 /0 */ { 0, BX_IA_ERROR },
  /* 87 /0 */ { 0, BX_IA_ERROR },
  /* 88 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHAB_VdqHdqWdq },
  /* 89 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHAW_VdqHdqWdq },
  /* 8A /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHAD_VdqHdqWdq },
  /* 8B /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHAQ_VdqHdqWdq },
  /* 8C /0 */ { 0, BX_IA_ERROR },
  /* 8D /0 */ { 0, BX_IA_ERROR },
  /* 8E /0 */ { 0, BX_IA_ERROR },
  /* 8F /0 */ { 0, BX_IA_ERROR },
  /* 90 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPROTB_VdqHdqWdq },
  /* 91 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPROTW_VdqHdqWdq },
  /* 92 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPROTD_VdqHdqWdq },
  /* 93 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPROTQ_VdqHdqWdq },
  /* 94 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHLB_VdqHdqWdq },
  /* 95 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHLW_VdqHdqWdq },
  /* 96 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHLD_VdqHdqWdq },
  /* 97 /0 */ { BxAliasVexW | BxVexL0, BX_IA_VPSHLQ_VdqHdqWdq },
  /* 98 /0 */ { 0, BX_IA_ERROR },
  /* 99 /0 */ { 0, BX_IA_ERROR },
  /* 9A /0 */ { 0, BX_IA_ERROR },
  /* 9B /0 */ { 0, BX_IA_ERROR },
  /* 9C /0 */ { 0, BX_IA_ERROR },
  /* 9D /0 */ { 0, BX_IA_ERROR },
  /* 9E /0 */ { 0, BX_IA_ERROR },
  /* 9F /0 */ { 0, BX_IA_ERROR },
  /* A0 /0 */ { 0, BX_IA_ERROR },
  /* A1 /0 */ { 0, BX_IA_ERROR },
  /* A2 /0 */ { 0, BX_IA_ERROR },
  /* A3 /0 */ { 0, BX_IA_ERROR },
  /* A4 /0 */ { 0, BX_IA_ERROR },
  /* A5 /0 */ { 0, BX_IA_ERROR },
  /* A6 /0 */ { 0, BX_IA_ERROR },
  /* A7 /0 */ { 0, BX_IA_ERROR },
  /* A8 /0 */ { 0, BX_IA_ERROR },
  /* A9 /0 */ { 0, BX_IA_ERROR },
  /* AA /0 */ { 0, BX_IA_ERROR },
  /* AB /0 */ { 0, BX_IA_ERROR },
  /* AC /0 */ { 0, BX_IA_ERROR },
  /* AD /0 */ { 0, BX_IA_ERROR },
  /* AE /0 */ { 0, BX_IA_ERROR },
  /* AF /0 */ { 0, BX_IA_ERROR },
  /* B0 /0 */ { 0, BX_IA_ERROR },
  /* B1 /0 */ { 0, BX_IA_ERROR },
  /* B2 /0 */ { 0, BX_IA_ERROR },
  /* B3 /0 */ { 0, BX_IA_ERROR },
  /* B4 /0 */ { 0, BX_IA_ERROR },
  /* B5 /0 */ { 0, BX_IA_ERROR },
  /* B6 /0 */ { 0, BX_IA_ERROR },
  /* B7 /0 */ { 0, BX_IA_ERROR },
  /* B8 /0 */ { 0, BX_IA_ERROR },
  /* B9 /0 */ { 0, BX_IA_ERROR },
  /* BA /0 */ { 0, BX_IA_ERROR },
  /* BB /0 */ { 0, BX_IA_ERROR },
  /* BC /0 */ { 0, BX_IA_ERROR },
  /* BD /0 */ { 0, BX_IA_ERROR },
  /* BE /0 */ { 0, BX_IA_ERROR },
  /* BF /0 */ { 0, BX_IA_ERROR },
  /* C0 /0 */ { 0, BX_IA_ERROR },
  /* C1 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDBW_VdqWdq },
  /* C2 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDBD_VdqWdq },
  /* C3 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDBQ_VdqWdq },
  /* C4 /0 */ { 0, BX_IA_ERROR },
  /* C5 /0 */ { 0, BX_IA_ERROR },
  /* C6 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDWD_VdqWdq },
  /* C7 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDWQ_VdqWdq },
  /* C8 /0 */ { 0, BX_IA_ERROR },
  /* C9 /0 */ { 0, BX_IA_ERROR },
  /* CA /0 */ { 0, BX_IA_ERROR },
  /* CB /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDDQ_VdqWdq },
  /* CC /0 */ { 0, BX_IA_ERROR },
  /* CD /0 */ { 0, BX_IA_ERROR },
  /* CE /0 */ { 0, BX_IA_ERROR },
  /* CF /0 */ { 0, BX_IA_ERROR },
  /* D0 /0 */ { 0, BX_IA_ERROR },
  /* D1 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDUBW_VdqWdq },
  /* D2 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDUBD_VdqWdq },
  /* D3 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDUBQ_VdqWdq },
  /* D4 /0 */ { 0, BX_IA_ERROR },
  /* D5 /0 */ { 0, BX_IA_ERROR },
  /* D6 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDUWD_VdqWdq },
  /* D7 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDUWQ_VdqWdq },
  /* D8 /0 */ { 0, BX_IA_ERROR },
  /* D9 /0 */ { 0, BX_IA_ERROR },
  /* DA /0 */ { 0, BX_IA_ERROR },
  /* DB /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHADDUDQ_VdqWdq },
  /* DC /0 */ { 0, BX_IA_ERROR },
  /* DD /0 */ { 0, BX_IA_ERROR },
  /* DE /0 */ { 0, BX_IA_ERROR },
  /* DF /0 */ { 0, BX_IA_ERROR },
  /* E0 /0 */ { 0, BX_IA_ERROR },
  /* E1 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHSUBBW_VdqWdq },
  /* E2 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHSUBWD_VdqWdq },
  /* E3 /0 */ { BxVexW0 | BxVexL0, BX_IA_VPHSUBDQ_VdqWdq },
  /* E4 /0 */ { 0, BX_IA_ERROR },
  /* E5 /0 */ { 0, BX_IA_ERROR },
  /* E6 /0 */ { 0, BX_IA_ERROR },
  /* E7 /0 */ { 0, BX_IA_ERROR },
  /* E8 /0 */ { 0, BX_IA_ERROR },
  /* E9 /0 */ { 0, BX_IA_ERROR },
  /* EA /0 */ { 0, BX_IA_ERROR },
  /* EB /0 */ { 0, BX_IA_ERROR },
  /* EC /0 */ { 0, BX_IA_ERROR },
  /* ED /0 */ { 0, BX_IA_ERROR },
  /* EE /0 */ { 0, BX_IA_ERROR },
  /* EF /0 */ { 0, BX_IA_ERROR },
  /* F0 /0 */ { 0, BX_IA_ERROR },
  /* F1 /0 */ { 0, BX_IA_ERROR },
  /* F2 /0 */ { 0, BX_IA_ERROR },
  /* F3 /0 */ { 0, BX_IA_ERROR },
  /* F4 /0 */ { 0, BX_IA_ERROR },
  /* F5 /0 */ { 0, BX_IA_ERROR },
  /* F6 /0 */ { 0, BX_IA_ERROR },
  /* F7 /0 */ { 0, BX_IA_ERROR },
  /* F8 /0 */ { 0, BX_IA_ERROR },
  /* F9 /0 */ { 0, BX_IA_ERROR },
  /* FA /0 */ { 0, BX_IA_ERROR },
  /* FB /0 */ { 0, BX_IA_ERROR },
  /* FC /0 */ { 0, BX_IA_ERROR },
  /* FD /0 */ { 0, BX_IA_ERROR },
  /* FE /0 */ { 0, BX_IA_ERROR },
  /* FF /0 */ { 0, BX_IA_ERROR },

  // 256 entries for XOP-encoded map 0xA opcodes
  /* 00 /0 */ { 0, BX_IA_ERROR },
  /* 01 /0 */ { 0, BX_IA_ERROR },
  /* 02 /0 */ { 0, BX_IA_ERROR },
  /* 03 /0 */ { 0, BX_IA_ERROR },
  /* 04 /0 */ { 0, BX_IA_ERROR },
  /* 05 /0 */ { 0, BX_IA_ERROR },
  /* 06 /0 */ { 0, BX_IA_ERROR },
  /* 07 /0 */ { 0, BX_IA_ERROR },
  /* 08 /0 */ { 0, BX_IA_ERROR },
  /* 09 /0 */ { 0, BX_IA_ERROR },
  /* 0A /0 */ { 0, BX_IA_ERROR },
  /* 0B /0 */ { 0, BX_IA_ERROR },
  /* 0C /0 */ { 0, BX_IA_ERROR },
  /* 0D /0 */ { 0, BX_IA_ERROR },
  /* 0E /0 */ { 0, BX_IA_ERROR },
  /* 0F /0 */ { 0, BX_IA_ERROR },
  /* 10 /0 */ { BxSplitVexW64 | BxVexL0, BX_IA_ERROR, BxOpcodeInfoXOP_A10 },
  /* 11 /0 */ { 0, BX_IA_ERROR },
  /* 12 /0 */ { 0, BX_IA_ERROR },
  /* 13 /0 */ { 0, BX_IA_ERROR },
  /* 14 /0 */ { 0, BX_IA_ERROR },
  /* 15 /0 */ { 0, BX_IA_ERROR },
  /* 16 /0 */ { 0, BX_IA_ERROR },
  /* 17 /0 */ { 0, BX_IA_ERROR },
  /* 18 /0 */ { 0, BX_IA_ERROR },
  /* 19 /0 */ { 0, BX_IA_ERROR },
  /* 1A /0 */ { 0, BX_IA_ERROR },
  /* 1B /0 */ { 0, BX_IA_ERROR },
  /* 1C /0 */ { 0, BX_IA_ERROR },
  /* 1D /0 */ { 0, BX_IA_ERROR },
  /* 1E /0 */ { 0, BX_IA_ERROR },
  /* 1F /0 */ { 0, BX_IA_ERROR },
  /* 20 /0 */ { 0, BX_IA_ERROR },
  /* 21 /0 */ { 0, BX_IA_ERROR },
  /* 22 /0 */ { 0, BX_IA_ERROR },
  /* 23 /0 */ { 0, BX_IA_ERROR },
  /* 24 /0 */ { 0, BX_IA_ERROR },
  /* 25 /0 */ { 0, BX_IA_ERROR },
  /* 26 /0 */ { 0, BX_IA_ERROR },
  /* 27 /0 */ { 0, BX_IA_ERROR },
  /* 28 /0 */ { 0, BX_IA_ERROR },
  /* 29 /0 */ { 0, BX_IA_ERROR },
  /* 2A /0 */ { 0, BX_IA_ERROR },
  /* 2B /0 */ { 0, BX_IA_ERROR },
  /* 2C /0 */ { 0, BX_IA_ERROR },
  /* 2D /0 */ { 0, BX_IA_ERROR },
  /* 2E /0 */ { 0, BX_IA_ERROR },
  /* 2F /0 */ { 0, BX_IA_ERROR },
  /* 30 /0 */ { 0, BX_IA_ERROR },
  /* 31 /0 */ { 0, BX_IA_ERROR },
  /* 32 /0 */ { 0, BX_IA_ERROR },
  /* 33 /0 */ { 0, BX_IA_ERROR },
  /* 34 /0 */ { 0, BX_IA_ERROR },
  /* 35 /0 */ { 0, BX_IA_ERROR },
  /* 36 /0 */ { 0, BX_IA_ERROR },
  /* 37 /0 */ { 0, BX_IA_ERROR },
  /* 38 /0 */ { 0, BX_IA_ERROR },
  /* 39 /0 */ { 0, BX_IA_ERROR },
  /* 3A /0 */ { 0, BX_IA_ERROR },
  /* 3B /0 */ { 0, BX_IA_ERROR },
  /* 3C /0 */ { 0, BX_IA_ERROR },
  /* 3D /0 */ { 0, BX_IA_ERROR },
  /* 3E /0 */ { 0, BX_IA_ERROR },
  /* 3F /0 */ { 0, BX_IA_ERROR },
  /* 40 /0 */ { 0, BX_IA_ERROR },
  /* 41 /0 */ { 0, BX_IA_ERROR },
  /* 42 /0 */ { 0, BX_IA_ERROR },
  /* 43 /0 */ { 0, BX_IA_ERROR },
  /* 44 /0 */ { 0, BX_IA_ERROR },
  /* 45 /0 */ { 0, BX_IA_ERROR },
  /* 46 /0 */ { 0, BX_IA_ERROR },
  /* 47 /0 */ { 0, BX_IA_ERROR },
  /* 48 /0 */ { 0, BX_IA_ERROR },
  /* 49 /0 */ { 0, BX_IA_ERROR },
  /* 4A /0 */ { 0, BX_IA_ERROR },
  /* 4B /0 */ { 0, BX_IA_ERROR },
  /* 4C /0 */ { 0, BX_IA_ERROR },
  /* 4D /0 */ { 0, BX_IA_ERROR },
  /* 4E /0 */ { 0, BX_IA_ERROR },
  /* 4F /0 */ { 0, BX_IA_ERROR },
  /* 50 /0 */ { 0, BX_IA_ERROR },
  /* 51 /0 */ { 0, BX_IA_ERROR },
  /* 52 /0 */ { 0, BX_IA_ERROR },
  /* 53 /0 */ { 0, BX_IA_ERROR },
  /* 54 /0 */ { 0, BX_IA_ERROR },
  /* 55 /0 */ { 0, BX_IA_ERROR },
  /* 56 /0 */ { 0, BX_IA_ERROR },
  /* 57 /0 */ { 0, BX_IA_ERROR },
  /* 58 /0 */ { 0, BX_IA_ERROR },
  /* 59 /0 */ { 0, BX_IA_ERROR },
  /* 5A /0 */ { 0, BX_IA_ERROR },
  /* 5B /0 */ { 0, BX_IA_ERROR },
  /* 5C /0 */ { 0, BX_IA_ERROR },
  /* 5D /0 */ { 0, BX_IA_ERROR },
  /* 5E /0 */ { 0, BX_IA_ERROR },
  /* 5F /0 */ { 0, BX_IA_ERROR },
  /* 60 /0 */ { 0, BX_IA_ERROR },
  /* 61 /0 */ { 0, BX_IA_ERROR },
  /* 62 /0 */ { 0, BX_IA_ERROR },
  /* 63 /0 */ { 0, BX_IA_ERROR },
  /* 64 /0 */ { 0, BX_IA_ERROR },
  /* 65 /0 */ { 0, BX_IA_ERROR },
  /* 66 /0 */ { 0, BX_IA_ERROR },
  /* 67 /0 */ { 0, BX_IA_ERROR },
  /* 68 /0 */ { 0, BX_IA_ERROR },
  /* 69 /0 */ { 0, BX_IA_ERROR },
  /* 6A /0 */ { 0, BX_IA_ERROR },
  /* 6B /0 */ { 0, BX_IA_ERROR },
  /* 6C /0 */ { 0, BX_IA_ERROR },
  /* 6D /0 */ { 0, BX_IA_ERROR },
  /* 6E /0 */ { 0, BX_IA_ERROR },
  /* 6F /0 */ { 0, BX_IA_ERROR },
  /* 70 /0 */ { 0, BX_IA_ERROR },
  /* 71 /0 */ { 0, BX_IA_ERROR },
  /* 72 /0 */ { 0, BX_IA_ERROR },
  /* 73 /0 */ { 0, BX_IA_ERROR },
  /* 74 /0 */ { 0, BX_IA_ERROR },
  /* 75 /0 */ { 0, BX_IA_ERROR },
  /* 76 /0 */ { 0, BX_IA_ERROR },
  /* 77 /0 */ { 0, BX_IA_ERROR },
  /* 78 /0 */ { 0, BX_IA_ERROR },
  /* 79 /0 */ { 0, BX_IA_ERROR },
  /* 7A /0 */ { 0, BX_IA_ERROR },
  /* 7B /0 */ { 0, BX_IA_ERROR },
  /* 7C /0 */ { 0, BX_IA_ERROR },
  /* 7D /0 */ { 0, BX_IA_ERROR },
  /* 7E /0 */ { 0, BX_IA_ERROR },
  /* 7F /0 */ { 0, BX_IA_ERROR },
  /* 80 /0 */ { 0, BX_IA_ERROR },
  /* 81 /0 */ { 0, BX_IA_ERROR },
  /* 82 /0 */ { 0, BX_IA_ERROR },
  /* 83 /0 */ { 0, BX_IA_ERROR },
  /* 84 /0 */ { 0, BX_IA_ERROR },
  /* 85 /0 */ { 0, BX_IA_ERROR },
  /* 86 /0 */ { 0, BX_IA_ERROR },
  /* 87 /0 */ { 0, BX_IA_ERROR },
  /* 88 /0 */ { 0, BX_IA_ERROR },
  /* 89 /0 */ { 0, BX_IA_ERROR },
  /* 8A /0 */ { 0, BX_IA_ERROR },
  /* 8B /0 */ { 0, BX_IA_ERROR },
  /* 8C /0 */ { 0, BX_IA_ERROR },
  /* 8D /0 */ { 0, BX_IA_ERROR },
  /* 8E /0 */ { 0, BX_IA_ERROR },
  /* 8F /0 */ { 0, BX_IA_ERROR },
  /* 90 /0 */ { 0, BX_IA_ERROR },
  /* 91 /0 */ { 0, BX_IA_ERROR },
  /* 92 /0 */ { 0, BX_IA_ERROR },
  /* 93 /0 */ { 0, BX_IA_ERROR },
  /* 94 /0 */ { 0, BX_IA_ERROR },
  /* 95 /0 */ { 0, BX_IA_ERROR },
  /* 96 /0 */ { 0, BX_IA_ERROR },
  /* 97 /0 */ { 0, BX_IA_ERROR },
  /* 98 /0 */ { 0, BX_IA_ERROR },
  /* 99 /0 */ { 0, BX_IA_ERROR },
  /* 9A /0 */ { 0, BX_IA_ERROR },
  /* 9B /0 */ { 0, BX_IA_ERROR },
  /* 9C /0 */ { 0, BX_IA_ERROR },
  /* 9D /0 */ { 0, BX_IA_ERROR },
  /* 9E /0 */ { 0, BX_IA_ERROR },
  /* 9F /0 */ { 0, BX_IA_ERROR },
  /* A0 /0 */ { 0, BX_IA_ERROR },
  /* A1 /0 */ { 0, BX_IA_ERROR },
  /* A2 /0 */ { 0, BX_IA_ERROR },
  /* A3 /0 */ { 0, BX_IA_ERROR },
  /* A4 /0 */ { 0, BX_IA_ERROR },
  /* A5 /0 */ { 0, BX_IA_ERROR },
  /* A6 /0 */ { 0, BX_IA_ERROR },
  /* A7 /0 */ { 0, BX_IA_ERROR },
  /* A8 /0 */ { 0, BX_IA_ERROR },
  /* A9 /0 */ { 0, BX_IA_ERROR },
  /* AA /0 */ { 0, BX_IA_ERROR },
  /* AB /0 */ { 0, BX_IA_ERROR },
  /* AC /0 */ { 0, BX_IA_ERROR },
  /* AD /0 */ { 0, BX_IA_ERROR },
  /* AE /0 */ { 0, BX_IA_ERROR },
  /* AF /0 */ { 0, BX_IA_ERROR },
  /* B0 /0 */ { 0, BX_IA_ERROR },
  /* B1 /0 */ { 0, BX_IA_ERROR },
  /* B2 /0 */ { 0, BX_IA_ERROR },
  /* B3 /0 */ { 0, BX_IA_ERROR },
  /* B4 /0 */ { 0, BX_IA_ERROR },
  /* B5 /0 */ { 0, BX_IA_ERROR },
  /* B6 /0 */ { 0, BX_IA_ERROR },
  /* B7 /0 */ { 0, BX_IA_ERROR },
  /* B8 /0 */ { 0, BX_IA_ERROR },
  /* B9 /0 */ { 0, BX_IA_ERROR },
  /* BA /0 */ { 0, BX_IA_ERROR },
  /* BB /0 */ { 0, BX_IA_ERROR },
  /* BC /0 */ { 0, BX_IA_ERROR },
  /* BD /0 */ { 0, BX_IA_ERROR },
  /* BE /0 */ { 0, BX_IA_ERROR },
  /* BF /0 */ { 0, BX_IA_ERROR },
  /* C0 /0 */ { 0, BX_IA_ERROR },
  /* C1 /0 */ { 0, BX_IA_ERROR },
  /* C2 /0 */ { 0, BX_IA_ERROR },
  /* C3 /0 */ { 0, BX_IA_ERROR },
  /* C4 /0 */ { 0, BX_IA_ERROR },
  /* C5 /0 */ { 0, BX_IA_ERROR },
  /* C6 /0 */ { 0, BX_IA_ERROR },
  /* C7 /0 */ { 0, BX_IA_ERROR },
  /* C8 /0 */ { 0, BX_IA_ERROR },
  /* C9 /0 */ { 0, BX_IA_ERROR },
  /* CA /0 */ { 0, BX_IA_ERROR },
  /* CB /0 */ { 0, BX_IA_ERROR },
  /* CC /0 */ { 0, BX_IA_ERROR },
  /* CD /0 */ { 0, BX_IA_ERROR },
  /* CE /0 */ { 0, BX_IA_ERROR },
  /* CF /0 */ { 0, BX_IA_ERROR },
  /* D0 /0 */ { 0, BX_IA_ERROR },
  /* D1 /0 */ { 0, BX_IA_ERROR },
  /* D2 /0 */ { 0, BX_IA_ERROR },
  /* D3 /0 */ { 0, BX_IA_ERROR },
  /* D4 /0 */ { 0, BX_IA_ERROR },
  /* D5 /0 */ { 0, BX_IA_ERROR },
  /* D6 /0 */ { 0, BX_IA_ERROR },
  /* D7 /0 */ { 0, BX_IA_ERROR },
  /* D8 /0 */ { 0, BX_IA_ERROR },
  /* D9 /0 */ { 0, BX_IA_ERROR },
  /* DA /0 */ { 0, BX_IA_ERROR },
  /* DB /0 */ { 0, BX_IA_ERROR },
  /* DC /0 */ { 0, BX_IA_ERROR },
  /* DD /0 */ { 0, BX_IA_ERROR },
  /* DE /0 */ { 0, BX_IA_ERROR },
  /* DF /0 */ { 0, BX_IA_ERROR },
  /* E0 /0 */ { 0, BX_IA_ERROR },
  /* E1 /0 */ { 0, BX_IA_ERROR },
  /* E2 /0 */ { 0, BX_IA_ERROR },
  /* E3 /0 */ { 0, BX_IA_ERROR },
  /* E4 /0 */ { 0, BX_IA_ERROR },
  /* E5 /0 */ { 0, BX_IA_ERROR },
  /* E6 /0 */ { 0, BX_IA_ERROR },
  /* E7 /0 */ { 0, BX_IA_ERROR },
  /* E8 /0 */ { 0, BX_IA_ERROR },
  /* E9 /0 */ { 0, BX_IA_ERROR },
  /* EA /0 */ { 0, BX_IA_ERROR },
  /* EB /0 */ { 0, BX_IA_ERROR },
  /* EC /0 */ { 0, BX_IA_ERROR },
  /* ED /0 */ { 0, BX_IA_ERROR },
  /* EE /0 */ { 0, BX_IA_ERROR },
  /* EF /0 */ { 0, BX_IA_ERROR },
  /* F0 /0 */ { 0, BX_IA_ERROR },
  /* F1 /0 */ { 0, BX_IA_ERROR },
  /* F2 /0 */ { 0, BX_IA_ERROR },
  /* F3 /0 */ { 0, BX_IA_ERROR },
  /* F4 /0 */ { 0, BX_IA_ERROR },
  /* F5 /0 */ { 0, BX_IA_ERROR },
  /* F6 /0 */ { 0, BX_IA_ERROR },
  /* F7 /0 */ { 0, BX_IA_ERROR },
  /* F8 /0 */ { 0, BX_IA_ERROR },
  /* F9 /0 */ { 0, BX_IA_ERROR },
  /* FA /0 */ { 0, BX_IA_ERROR },
  /* FB /0 */ { 0, BX_IA_ERROR },
  /* FC /0 */ { 0, BX_IA_ERROR },
  /* FD /0 */ { 0, BX_IA_ERROR },
  /* FE /0 */ { 0, BX_IA_ERROR },
  /* FF /0 */ { 0, BX_IA_ERROR }
};

#endif // BX_SUPPORT_AVX

#endif // BX_XOP_FETCHDECODE_TABLES_H