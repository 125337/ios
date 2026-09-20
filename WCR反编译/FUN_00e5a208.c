// FUN_00e5a208 @ 00e5a208

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e5a208(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 auStack_370 [88];
  undefined1 *local_318;
  undefined **local_300;
  undefined8 local_2f8;
  undefined *local_2f0;
  undefined4 local_2e4;
  undefined *local_2e0;
  undefined4 local_2d4;
  undefined *local_2d0;
  undefined4 local_2c4;
  undefined *local_2c0;
  undefined4 local_2b4;
  undefined *local_2b0;
  undefined4 local_2a4;
  undefined *local_2a0;
  undefined4 local_294;
  undefined *local_290;
  undefined4 local_284;
  undefined *local_280;
  undefined4 local_274;
  undefined *local_270;
  undefined4 local_264;
  undefined *local_260;
  undefined4 local_254;
  undefined *local_250;
  undefined4 local_244;
  undefined *local_240;
  undefined *local_230;
  undefined *local_220;
  undefined4 local_214;
  undefined *local_210;
  undefined *local_200;
  undefined *local_1f0;
  undefined4 local_1e4;
  undefined *local_1e0;
  undefined *local_1d0;
  undefined *local_1c0;
  undefined4 local_1b4;
  undefined *local_1b0;
  undefined *local_1a0;
  undefined *local_190;
  undefined4 local_184;
  undefined *local_180;
  undefined *local_170;
  undefined *local_160;
  undefined4 local_154;
  undefined *local_150;
  undefined *local_140;
  undefined *local_130;
  undefined4 local_124;
  undefined *local_120;
  undefined *local_110;
  undefined *local_100;
  undefined4 local_f4;
  undefined *local_f0;
  undefined *local_e0;
  undefined *local_d0;
  undefined4 local_c4;
  undefined *local_c0;
  undefined *local_b0;
  undefined *local_a0;
  undefined *local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  uint local_44;
  undefined *local_40;
  uint local_34;
  undefined **local_30;
  undefined8 local_28;
  
  local_300 = &local_260;
  local_28 = *(undefined8 *)PTR____stack_chk_guard_02578670;
  local_30 = &switchD_00e5a520::switchdataD_028076e8;
  bVar1 = 0x16805b43 <
          (~((DAT_0271cd58 ^ 0x1b321860) & (DAT_0271cd54 ^ 0x96cceeea) |
            (DAT_0271cd58 ^ 0x1b321860) & (DAT_0271cd54 ^ 0x96cceeea)) / 0xede0613c + 0x69786980) *
          0x2d09f11d;
  local_34 = (uint)bVar1;
  local_40 = &DAT_028076f8;
  local_2f0 = &DAT_0271e020;
  local_50 = &DAT_0271e020;
  local_54 = 0xcbc8;
  local_60 = &DAT_02807708;
  local_70 = &DAT_02807718;
  local_80 = &DAT_0271e020;
  local_84 = 0xcbcb;
  local_90 = &DAT_02807728;
  local_a0 = &DAT_02807738;
  local_b0 = &DAT_02807748;
  local_c0 = &DAT_0271e020;
  local_c4 = 0xcbcf;
  local_d0 = &DAT_02807758;
  local_e0 = &DAT_02807768;
  local_f0 = &DAT_0271e020;
  local_f4 = 0xcbdb;
  local_100 = &DAT_02807778;
  local_110 = &DAT_02807788;
  local_120 = &DAT_0271e020;
  local_124 = 0xcbd5;
  local_130 = &DAT_02807798;
  local_140 = &DAT_028077a8;
  local_150 = &DAT_0271e020;
  local_154 = 0xcbd8;
  local_160 = &DAT_028077b8;
  local_170 = &DAT_028077c8;
  local_180 = &DAT_0271e020;
  local_184 = 0xcbdb;
  local_190 = &DAT_028077d8;
  local_1a0 = &DAT_028077e8;
  local_1b0 = &DAT_0271e020;
  local_1b4 = 0xcbde;
  local_1c0 = &DAT_028077f8;
  local_1d0 = &DAT_02807808;
  local_1e0 = &DAT_0271e020;
  local_1e4 = 0xcbe1;
  local_1f0 = &DAT_02807818;
  local_200 = &DAT_02807828;
  local_210 = &DAT_0271e020;
  local_214 = 0xcbe4;
  local_220 = &DAT_02807838;
  local_230 = &DAT_02807848;
  local_240 = &DAT_0271e020;
  local_244 = 0xcbc6;
  local_250 = &DAT_0271e020;
  local_254 = 0xcbc9;
  local_260 = &DAT_0271e020;
  local_264 = 0xcbcd;
  local_270 = &DAT_0271e020;
  local_274 = 0xcbd0;
  local_280 = &DAT_0271e020;
  local_284 = 0xcbd3;
  local_290 = &DAT_0271e020;
  local_294 = 0xcbd6;
  local_2a0 = &DAT_0271e020;
  local_2a4 = 0xcbd9;
  local_2b0 = &DAT_0271e020;
  local_2b4 = 0xcbdc;
  local_2c0 = &DAT_0271e020;
  local_2c4 = 0xcbdf;
  local_2d0 = &DAT_0271e020;
  local_2d4 = 0xcbe2;
  local_2e0 = &DAT_0271e020;
  local_2e4 = 0xcbe5;
  local_2f8 = param_1;
  switch(bVar1) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00e5a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_02783e50)();
    return;
  case true:
    uVar2 = (((DAT_0271cd5c ^ 0xda397c4f) & (DAT_0271cd60 ^ 0xb69f4a37)) + 0x1993f855) / 0x2abc95f8;
    local_318 = auStack_370;
    local_44 = (uint)(((uVar2 | 0x2b733194) & (uVar2 ^ 0xd48cce6b)) < 0xd75aa73b);
                    /* WARNING: Could not recover jumptable at 0x00e5a820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_028076f8 + (long)(int)local_44 * 8))();
    return;
  }
}

