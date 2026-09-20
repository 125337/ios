// FUN_004cd8a0 @ 004cd8a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004cd8a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ulong local_188;
  undefined8 local_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ulong local_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  FUN_004cdf64();
  local_58 = param_5;
  if (param_5 == 1) {
    FUN_004ce66c(0);
    if (((param_5 & 1) != 0) || (FUN_004ce780(local_48), 0.0 < param_1)) {
      uStack_b8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
      local_c0 = *(undefined8 *)PTR__CGRectZero_025782f0;
      uStack_a8 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
      local_b0 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
      local_c8 = 0.0;
      uStack_108 = uStack_38;
      local_110 = local_40;
      uStack_f8 = uStack_28;
      local_100 = local_30;
      dVar1 = local_40;
      uVar2 = uStack_38;
      uVar3 = local_30;
      uVar4 = uStack_28;
      FUN_004ce880(local_48,local_58,&local_c0,&local_c8);
      local_e8 = dVar1;
      uStack_e0 = uVar2;
      local_d8 = uVar3;
      uStack_d0 = uVar4;
      if (local_c8 <= 0.5) {
        local_1a8 = PTR___NSConcreteGlobalBlock_02578658;
        local_1a0 = 0xd0800000;
        local_19c = 0;
        local_198 = FUN_004ceecc;
        local_190 = &DAT_02579f70;
        local_188 = local_48;
        local_180 = local_50;
        local_178 = dVar1;
        uStack_170 = uVar2;
        local_168 = uVar3;
        uStack_160 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0,
                   &local_1a8);
      }
      else {
        local_158 = PTR___NSConcreteGlobalBlock_02578658;
        local_150 = 0xd0800000;
        local_14c = 0;
        local_148 = FUN_004cec84;
        local_140 = &DAT_0257d558;
        local_138 = local_48;
        local_130 = dVar1;
        uStack_128 = uVar2;
        local_120 = uVar3;
        uStack_118 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_performWithoutAnimation__0269e7e0);
      }
      FUN_004cef2c(local_c0,uStack_b8,local_b0,uStack_a8,local_c8,local_48);
      FUN_004cf320(local_c8,local_48);
    }
    else {
      uStack_98 = uStack_38;
      local_a0 = local_40;
      uStack_88 = uStack_28;
      local_90 = local_30;
      (*DAT_028cac50)(local_40,uStack_38,local_30,uStack_28,local_48,local_50);
    }
  }
  else {
    uStack_78 = uStack_38;
    local_80 = local_40;
    uStack_68 = uStack_28;
    local_70 = local_30;
    (*DAT_028cac50)(local_40,uStack_38,local_30,uStack_28,local_48,local_50);
  }
  return;
}

