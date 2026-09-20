// FUN_000d288c @ 000d288c

void FUN_000d288c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte local_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  lVar3 = local_28;
  FUN_000cdecc();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar3;
  if (lVar3 == 0) {
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_frame_026ca640);
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    uStack_98 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_a0 = *(undefined8 *)PTR__CGRectZero_025782f0;
    uStack_88 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_90 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    lVar3 = local_30;
    local_e0 = param_1;
    uStack_d8 = param_2;
    local_d0 = param_3;
    uStack_c8 = param_4;
    local_60 = param_1;
    uStack_58 = param_2;
    local_50 = param_3;
    uStack_48 = param_4;
    FUN_000cca90(local_30,local_28,&local_68,&local_70,&local_78,&local_a0);
    bVar2 = (byte)lVar3;
    uStack_108 = uStack_58;
    local_110 = local_60;
    uStack_f8 = uStack_48;
    local_100 = local_50;
    local_130 = param_1;
    uStack_128 = param_2;
    local_120 = param_3;
    uStack_118 = param_4;
    local_c0 = param_1;
    uStack_b8 = param_2;
    local_b0 = param_3;
    uStack_a8 = param_4;
    FUN_000ca628(local_60,uStack_58,local_50,uStack_48,param_1,param_2,param_3,param_4);
    local_e1 = (bVar2 ^ 1) & 1;
    if (local_e1 == 0) {
      uStack_148 = uStack_98;
      local_150 = local_a0;
      uStack_138 = uStack_88;
      local_140 = local_90;
      FUN_000cce48(local_a0,uStack_98,local_90,uStack_88,local_68,local_70,local_30,local_28);
      FUN_000ccf6c(local_30);
      local_40 = 1;
    }
    else {
      uStack_168 = uStack_98;
      local_170 = local_a0;
      uStack_158 = uStack_88;
      local_160 = local_90;
      uStack_188 = uStack_b8;
      local_190 = local_c0;
      uStack_178 = uStack_a8;
      local_180 = local_b0;
      FUN_000cd328(local_68,local_70,local_78,local_a0,uStack_98,local_90,uStack_88,local_30);
      lVar3 = local_30;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = lVar3;
      uStack_1a8 = uStack_b8;
      local_1b0 = local_c0;
      uStack_198 = uStack_a8;
      local_1a0 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutAnimation__0269e7e0);
      FUN_000cce48(local_a0,uStack_98,local_90,uStack_88,local_68,local_70,local_30,local_28);
      _objc_storeStrong(&local_1b8,0);
      local_40 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

