// FUN_0095ade0 @ 0095ade0

void FUN_0095ade0(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_1f0;
  double local_1d8;
  double local_1c0;
  double local_1b0;
  double local_1a8;
  double local_190;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  undefined4 local_3c;
  double local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_1;
  if (local_30 == 0) {
    local_28 = 0;
    local_3c = 1;
  }
  else {
    FUN_00961814();
    local_48 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    dVar3 = param_1;
    local_60 = param_1;
    local_58 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
    param_1 = param_1 * dVar3;
    local_50 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    dVar2 = dVar3;
    local_78 = param_1;
    local_70 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
    local_90 = dVar3 * dVar2;
    local_88 = local_50;
    local_190 = local_90;
    if (local_90 <= local_50) {
      local_190 = local_50;
    }
    local_98 = local_190;
    local_80 = local_190;
    local_a0 = local_38 * local_48;
    local_68 = local_90;
    if ((local_a0 < local_190) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830), local_28 = local_30,
       DAT_02323c68 <= ABS(local_190 - local_48))) {
      local_b0 = 0x3ff0000000000000;
      local_c0 = local_80;
      local_c8 = 0x3ff0000000000000;
      if (1.0 <= local_80) {
        local_1a8 = local_80;
      }
      else {
        local_1a8 = 1.0;
      }
      local_d0 = local_1a8;
      local_1a8 = local_a0 / local_1a8;
      local_1b0 = local_1a8;
      if (1.0 < local_1a8) {
        local_1b0 = 1.0;
      }
      local_d8 = local_1b0;
      local_a8 = local_1b0;
      dVar2 = 1.0;
      local_f0 = 1.0;
      local_b8 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar3 = dVar2;
      local_108 = dVar2;
      local_100 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
      dVar3 = (dVar2 * dVar3 * local_a8) / local_48;
      local_1c0 = dVar3;
      if (dVar3 <= local_f0) {
        local_1c0 = local_f0;
      }
      local_110 = local_1c0;
      uVar4 = 0x3ff0000000000000;
      local_118 = 1.0;
      local_f8 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar2 = dVar3;
      local_130 = uVar4;
      local_128 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
      local_120 = (dVar3 * dVar2 * local_a8) / local_48;
      local_1d8 = local_120;
      if (local_120 <= local_118) {
        local_1d8 = local_118;
      }
      local_138 = local_1d8;
      FUN_0094cbf0();
      local_e8 = local_1c0;
      local_e0 = local_1d8;
      _UIGraphicsBeginImageContextWithOptions(local_1c0,local_1d8,local_48,0);
      lVar1 = local_30;
      uVar5 = 0;
      uVar4 = 0;
      dVar3 = local_e8;
      dVar2 = local_e0;
      FUN_00944b60();
      local_158 = uVar4;
      local_150 = uVar5;
      local_148 = dVar3;
      local_140 = dVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar5,dVar3,dVar2,lVar1,PTR_s_drawInRect__026ca610);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_160 = lVar1;
      _UIGraphicsEndImageContext();
      if (local_160 == 0) {
        local_1f0 = local_30;
      }
      else {
        local_1f0 = local_160;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_1f0;
      local_3c = 1;
      _objc_storeStrong(&local_160,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

