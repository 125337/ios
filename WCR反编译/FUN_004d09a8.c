// FUN_004d09a8 @ 004d09a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004d09a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  double local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_48;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar2 = local_28;
  local_30 = param_6;
  FUN_004d0d20();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if (uVar2 == 0) {
    local_48 = 1;
  }
  else {
    lVar3 = local_30;
    FUN_004cf768();
    local_50 = lVar3;
    if (lVar3 < 1) {
      FUN_004ce780(lVar3,local_38);
      param_2 = 0x3fe0000000000000;
      if (param_1 <= 0.5) {
        local_48 = 1;
        goto LAB_004d0ccc;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    uStack_88 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_90 = *(undefined8 *)PTR__CGRectZero_025782f0;
    uStack_78 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_80 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    local_98 = 0;
    uVar4 = local_38;
    local_e0 = param_1;
    uStack_d8 = param_2;
    local_d0 = param_3;
    uStack_c8 = param_4;
    local_70 = param_1;
    uStack_68 = param_2;
    local_60 = param_3;
    uStack_58 = param_4;
    FUN_004ce880(local_38,local_30,&local_90,&local_98);
    uStack_f8 = uStack_68;
    local_100 = local_70;
    uStack_e8 = uStack_58;
    local_f0 = local_60;
    local_120 = param_1;
    uStack_118 = param_2;
    local_110 = param_3;
    uStack_108 = param_4;
    local_b8 = param_1;
    uStack_b0 = param_2;
    local_a8 = param_3;
    uStack_a0 = param_4;
    FUN_004d035c(local_70,uStack_68,local_60,uStack_58,param_1,param_2,param_3,param_4);
    uVar2 = local_38;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = uVar2;
      uStack_138 = uStack_b0;
      local_140 = local_b8;
      uStack_128 = uStack_a0;
      local_130 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutAnimation__0269e7e0);
      _objc_storeStrong(&local_148,0);
    }
    FUN_004cef2c(local_90,uStack_88,local_80,uStack_78,local_98,local_38);
    FUN_004cf320(local_98,local_38);
    local_48 = 0;
  }
LAB_004d0ccc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

