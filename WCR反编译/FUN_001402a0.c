// FUN_001402a0 @ 001402a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_001402a0(double param_1,double param_2,double param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,int param_7)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double local_268;
  double local_260;
  double local_230;
  double local_1f8;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  long local_190;
  ulong local_188;
  ulong local_180;
  long local_178;
  int local_16c;
  int local_168;
  int local_164;
  double local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  int local_f4;
  double local_f0;
  double local_e8;
  long local_e0;
  undefined4 local_d8;
  byte local_d1;
  undefined *local_d0;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  byte local_62;
  byte local_61;
  double local_60;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  double local_40;
  double dStack_38;
  double local_30;
  undefined8 uStack_28;
  undefined *puVar4;
  
  local_60 = param_1;
  local_54 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  FUN_00150878();
  bVar2 = (byte)param_5;
  local_61 = bVar2;
  FUN_00150088();
  local_62 = bVar2;
  if (((local_61 & 1) == 0) && ((bVar2 & 1) == 0)) {
    (*DAT_028c86f8)(local_48,local_50,local_54);
    local_40 = local_60;
  }
  else if (((local_61 & 1) == 0) && ((bVar2 & 1) != 0)) {
    dVar6 = local_60;
    (*DAT_028c86f8)(local_48,local_50,local_54);
    uVar8 = local_48;
    local_88 = dVar6;
    dStack_80 = param_2;
    local_78 = param_3;
    uStack_70 = param_4;
    FUN_00150124();
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar8;
    FUN_00150468(local_48,uVar8);
    local_98 = dVar6;
    if (dVar6 < 1.0) {
      uVar8 = 0x3ff0000000000000;
      local_d1 = 0;
      if (local_60 <= 1.0) {
        puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        dVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_d0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1f8 = param_3;
        local_c8 = dVar6;
        local_c0 = uVar8;
        local_b8 = param_3;
        local_b0 = param_4;
      }
      else {
        local_1f8 = local_60;
      }
      local_98 = local_1f8;
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
    }
    if (1.0 <= local_98) {
      local_e0 = (long)(local_88 / local_98 + DAT_02323db0);
      dVar6 = (double)NEON_ucvtf(local_e0);
      dVar7 = local_88 - local_98 * dVar6;
      local_e8 = dVar7;
      FUN_001506f4(local_48,local_90);
      dVar6 = (double)NEON_ucvtf(local_e0);
      dVar9 = dStack_80 + dVar7 * dVar6;
      dVar6 = local_e8;
      dVar10 = local_78;
      uVar8 = uStack_70;
      local_f0 = dVar7;
      FUN_0013a194();
      local_40 = dVar6;
      dStack_38 = dVar9;
      local_30 = dVar10;
      uStack_28 = uVar8;
    }
    else {
      local_40 = local_88;
      dStack_38 = dStack_80;
      local_30 = local_78;
      uStack_28 = uStack_70;
    }
    local_d8 = 1;
    _objc_storeStrong(&local_90,0);
  }
  else {
    local_f4 = local_54;
    uVar8 = local_48;
    dVar6 = local_60;
    (*DAT_028c86f8)(local_48,local_50,local_54);
    local_164 = (int)uVar8;
    local_118 = dVar6;
    local_110 = param_2;
    local_108 = param_3;
    local_100 = param_4;
    if (DAT_028c87e8 <= 0.0) {
      uVar8 = local_48;
      dVar6 = DAT_028c87e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      local_164 = (int)uVar8;
      local_230 = param_3;
      local_140 = dVar6;
      local_138 = param_2;
      local_130 = param_3;
      local_128 = param_4;
    }
    else {
      local_230 = DAT_028c87e8;
    }
    local_120 = local_230;
    uVar8 = 0x3ff0000000000000;
    if (local_230 < 1.0) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      iVar3 = (int)puVar4;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_160 = local_230;
      local_158 = uVar8;
      local_150 = param_3;
      local_148 = param_4;
      local_120 = param_3;
      local_164 = iVar3;
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((DAT_028c87e8 == 0.0) && (0.0 < local_120)) {
      DAT_028c87e8 = local_120;
    }
    FUN_00150d34();
    local_168 = local_164 * 2;
    local_16c = local_f4;
    iVar3 = 0;
    if (local_168 != 0) {
      iVar3 = local_f4 / local_168;
    }
    local_178 = (long)iVar3;
    iVar3 = 0;
    if (local_168 != 0) {
      iVar3 = local_f4 / local_168;
    }
    local_180 = (ulong)(local_f4 - iVar3 * local_168);
    if (local_f4 < 0) {
      dVar6 = local_120 * 100.0;
      FUN_0013a194();
      local_40 = dVar6;
    }
    else {
      local_188 = 0;
      if ((long)local_164 != 0) {
        local_188 = local_180 / (ulong)(long)local_164;
      }
      uVar5 = (ulong)local_164;
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = local_180 / uVar5;
      }
      local_190 = local_180 - uVar1 * uVar5;
      local_198 = 0x4058000000000000;
      if ((local_60 <= 1.0) || (120.0 <= local_60)) {
        local_260 = 65.0;
      }
      else {
        local_260 = local_60;
      }
      local_1a0 = local_260;
      local_1a8 = 0x4034000000000000;
      local_1b0 = local_120 + -40.0;
      if (local_164 < 2) {
        local_268 = 0.0;
      }
      else {
        local_268 = (local_1b0 - (double)(long)local_164 * local_260) / (double)(local_164 + -1);
      }
      local_1b8 = local_268;
      if (local_268 < 0.0) {
        local_1b8 = 0.0;
      }
      local_1c0 = 0x4034000000000000;
      dVar6 = (double)NEON_ucvtf(local_190);
      local_1c8 = (local_260 + local_1b8) * dVar6 + 20.0;
      dVar6 = (double)NEON_ucvtf(local_188);
      dVar6 = dVar6 * 96.0;
      local_1d0 = dVar6;
      if ((local_62 & 1) == 0) {
        dVar6 = (double)NEON_ucvtf(local_178);
        dVar6 = local_1c8 + local_120 * dVar6;
        FUN_0013a194();
        local_40 = dVar6;
      }
      else {
        uVar8 = local_48;
        FUN_00150124();
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = uVar8;
        FUN_001506f4(local_48,uVar8);
        dVar10 = (double)NEON_ucvtf(local_178);
        dVar7 = local_1d0 + dVar6 * dVar10;
        dVar6 = local_1c8;
        dVar10 = local_1a0;
        uVar8 = local_198;
        FUN_0013a194();
        local_d8 = 1;
        local_40 = dVar6;
        dStack_38 = dVar7;
        local_30 = dVar10;
        uStack_28 = uVar8;
        _objc_storeStrong(&local_1d8,0);
      }
    }
  }
  return local_40;
}

