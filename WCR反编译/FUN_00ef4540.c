// FUN_00ef4540 @ 00ef4540

void FUN_00ef4540(double param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long local_1e0;
  double local_1b8;
  double local_198;
  double local_190;
  long local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
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
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  undefined4 local_40;
  byte local_39;
  double local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  lVar2 = local_30;
  local_39 = param_3;
  local_38 = param_1;
  if ((local_30 == 0) || (param_1 <= 0.0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    local_40 = 1;
  }
  else {
    dVar5 = param_1;
    FUN_00eff734();
    uVar1 = 0;
    local_50 = param_1;
    dStack_48 = dVar5;
    _UIGraphicsBeginImageContextWithOptions(param_1,dVar5,0);
    _UIGraphicsGetCurrentContext();
    local_58 = uVar1;
    if ((local_39 & 1) != 0) {
      dVar5 = *(double *)(PTR__CGPointZero_025782e0 + 8);
      local_80 = *(undefined8 *)PTR__CGPointZero_025782e0;
      dStack_68 = dStack_48;
      local_70 = local_50;
      dStack_78 = dVar5;
      _CGContextAddEllipseInRect(local_80,dVar5,local_50,dStack_48,uVar1);
      _CGContextClip(local_58);
    }
    dVar6 = local_38;
    if ((local_39 & 1) == 0) {
      dVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar3 = local_38;
      local_c8 = dVar6 / dVar4;
      dVar6 = local_38;
      local_d8 = dVar4;
      local_d0 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar3 = dVar3 / dVar4;
      local_1b8 = dVar3;
      if (local_c8 < dVar3) {
        local_1b8 = local_c8;
      }
      local_f8 = local_1b8;
      local_198 = local_1b8;
      local_f0 = dVar6;
      local_e8 = dVar4;
      local_e0 = dVar3;
    }
    else {
      dVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar3 = local_38;
      local_90 = dVar6 / dVar4;
      dVar6 = local_38;
      local_a0 = dVar4;
      local_98 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar3 = dVar3 / dVar4;
      local_190 = dVar3;
      if (dVar3 <= local_90) {
        local_190 = local_90;
      }
      local_c0 = local_190;
      local_198 = local_190;
      local_b8 = dVar6;
      local_b0 = dVar4;
      local_a8 = dVar3;
    }
    local_88 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    dVar4 = local_198 * local_88;
    dVar5 = dVar4;
    dVar6 = local_88;
    local_118 = local_198;
    local_110 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    dVar3 = dVar6 * local_88;
    local_128 = dVar5;
    local_120 = dVar6;
    FUN_00eff734();
    lVar2 = local_30;
    dVar5 = (local_38 - dVar4) * 0.5;
    dVar6 = (local_38 - dVar3) * 0.5;
    local_108 = dVar4;
    local_100 = dVar3;
    FUN_00eff760();
    local_148 = dVar5;
    local_140 = dVar6;
    local_138 = dVar4;
    local_130 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar6,dVar4,dVar3,lVar2,PTR_s_drawInRect__026ca610);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_150 = lVar2;
    _UIGraphicsEndImageContext();
    if (local_150 == 0) {
      local_1e0 = local_30;
    }
    else {
      local_1e0 = local_150;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_1e0;
    local_40 = 1;
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

