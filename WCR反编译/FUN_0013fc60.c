// FUN_0013fc60 @ 0013fc60

void FUN_0013fc60(double param_1,undefined8 param_2,double param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  uint local_254;
  double local_240;
  ulong local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d0;
  ulong local_c8;
  byte local_b9;
  ulong local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_6;
  local_28 = param_5;
  FUN_0014f650();
  bVar1 = false;
  dVar4 = param_1;
  if ((param_5 & 1) != 0) {
    dVar4 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    bVar1 = 0.0 < dVar4;
    param_3 = dVar4;
    local_50 = param_1;
    local_48 = param_2;
    local_40 = dVar4;
    local_38 = param_4;
  }
  dVar6 = dVar4;
  if (bVar1) {
    dVar6 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    param_3 = dVar6;
    DAT_028c87e8 = dVar6;
    local_70 = dVar4;
    local_68 = param_2;
    local_60 = dVar6;
    local_58 = param_4;
  }
  (*DAT_028c86f0)(local_28,local_30);
  FUN_0014f690(local_28);
  uVar2 = local_28;
  FUN_00148f28();
  FUN_0014f650();
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    dVar4 = param_3;
    local_90 = dVar6;
    local_88 = param_2;
    local_80 = param_3;
    local_78 = param_4;
    if (0.0 < param_3) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      DAT_028c87e8 = dVar4;
      local_b0 = param_3;
      local_a8 = param_2;
      local_a0 = dVar4;
      local_98 = param_4;
    }
    FUN_0014fff4();
    local_b8 = uVar2;
    FUN_00150088();
    local_b9 = (byte)uVar2;
    if (local_b8 != 0) {
      uVar2 = local_28;
      FUN_00150124(local_b8);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar2;
      if (uVar2 != 0) {
        FUN_00150468(local_28,uVar2);
        local_d0 = dVar4;
        FUN_001506f4(local_28,local_c8);
        local_e8 = dVar4;
        if ((local_b9 & 1) == 0) {
          dVar6 = (double)NEON_ucvtf(local_b8);
          dVar4 = local_d0 * dVar6;
          local_148 = dVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentSize_026ca5a0);
          local_160 = dVar4;
          local_158 = dVar6;
          if (dVar6 <= 0.0) {
            local_240 = local_e8;
            local_178 = dVar4;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentSize_026ca5a0);
            local_178 = dVar6;
            local_240 = dVar4;
            local_170 = dVar6;
            local_168 = dVar4;
          }
          local_150 = local_240;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentSize_026ca5a0);
          local_254 = 1;
          dVar4 = local_148;
          local_180 = local_240;
          if (local_240 <= local_148) {
            local_254 = 1;
            FUN_00150878();
          }
          if ((local_254 & 1) != 0) {
            local_240 = local_148;
            dVar4 = local_150;
            FUN_0013b3dc();
            local_1a0 = local_240;
            dStack_198 = dVar4;
            local_190 = local_240;
            dStack_188 = dVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setContentSize__026ca8e8);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentOffset_0269dd18);
          uVar2 = local_c8;
          uVar5 = 0x3fe0000000000000;
          local_1b0 = local_240;
          local_1a8 = dVar4;
          if (0.5 < dVar4) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentOffset_0269dd18);
            uVar3 = 0;
            local_1d0 = dVar4;
            local_1c8 = uVar5;
            FUN_0014d384();
            local_1c0 = dVar4;
            local_1b8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar4,uVar3,uVar2,PTR_s_setContentOffset_animated__0269ddd8,0);
          }
        }
        else {
          dVar6 = (double)NEON_ucvtf(local_b8);
          dVar4 = dVar4 * dVar6;
          dVar6 = local_d0;
          FUN_0013b3dc();
          local_110 = dVar6;
          dStack_108 = dVar4;
          local_f8 = dVar6;
          dStack_f0 = dVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setContentSize__026ca8e8);
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentOffset_0269dd18);
          uVar2 = local_c8;
          uVar5 = 0x3fe0000000000000;
          local_120 = dVar6;
          local_118 = dVar4;
          if (0.5 < dVar6) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentOffset_0269dd18);
            uVar3 = 0;
            local_140 = dVar6;
            local_138 = uVar5;
            FUN_0014d384();
            local_130 = uVar3;
            local_128 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,uVar5,uVar2,PTR_s_setContentOffset_animated__0269ddd8,0);
          }
        }
      }
      uVar2 = local_28;
      FUN_00150914();
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setNumberOfPages__0269f4e0,local_b8);
        uVar2 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_currentPage_0269f4e8);
        if ((long)local_b8 <= (long)uVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d8,PTR_s_setCurrentPage__0269f4f0,local_b8 - 1);
        }
      }
      _objc_storeStrong(&local_1d8);
      _objc_storeStrong(&local_c8,0);
    }
  }
  return;
}

