// FUN_015cd968 @ 015cd968

void FUN_015cd968(double param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  long local_188;
  double local_170;
  double local_168;
  double local_160;
  double local_150;
  long local_138;
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
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  byte local_79;
  undefined *local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined4 local_44;
  long local_40;
  double local_38;
  double local_30;
  long local_28;
  
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_2;
  _objc_storeStrong(&local_40,param_3);
  lVar2 = local_40;
  if (((local_40 == 0) || (local_38 < 1.0)) || (uVar5 = 0x3ff0000000000000, local_30 < 1.0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar2;
    local_44 = 1;
  }
  else {
    dVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    dVar3 = ABS(dVar4 - local_38);
    dVar6 = 0.5;
    local_150 = dVar3;
    local_58 = dVar4;
    local_50 = uVar5;
    if (dVar3 < 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      local_28 = local_40;
      local_150 = ABS(dVar6 - local_30);
      local_68 = dVar3;
      local_60 = dVar6;
      if (local_150 < 0.5) {
        (*(code *)PTR__objc_retain_02578638)();
        local_44 = 1;
        goto LAB_015cddb8;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scale_026ca830);
    local_79 = 0;
    if (local_150 <= 0.0) {
      puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scale_026ca830);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    local_70 = local_150;
    dVar4 = local_38;
    dVar3 = local_30;
    _UIGraphicsBeginImageContextWithOptions(local_38,local_30,local_150,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_a8 = 0x3ff0000000000000;
    local_c8 = 1.0;
    local_160 = dVar4;
    if (dVar4 < 1.0) {
      local_160 = 1.0;
    }
    local_b0 = local_160;
    local_88 = local_160;
    local_a0 = dVar4;
    local_98 = dVar3;
    local_90 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
    local_d8 = 0x3ff0000000000000;
    local_168 = local_c8;
    if (local_c8 < 1.0) {
      local_168 = 1.0;
    }
    local_e0 = local_168;
    local_b8 = local_168;
    local_f0 = local_38 / local_88;
    local_f8 = local_30 / local_168;
    local_170 = local_f8;
    if (local_f0 < local_f8) {
      local_170 = local_f0;
    }
    local_100 = local_170;
    local_e8 = local_170;
    dVar4 = local_88 * local_170;
    local_168 = local_168 * local_170;
    local_d0 = local_160;
    local_c0 = local_c8;
    FUN_015cddd8();
    lVar2 = local_40;
    dVar3 = (local_38 - dVar4) * 0.5;
    dVar6 = (local_30 - local_168) * 0.5;
    local_110 = dVar4;
    local_108 = local_168;
    FUN_015d483c();
    local_130 = dVar3;
    local_128 = dVar6;
    local_120 = dVar4;
    local_118 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar3,dVar6,dVar4,local_168,lVar2,PTR_s_drawInRect__026ca610);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_138 = lVar2;
    _UIGraphicsEndImageContext();
    if (local_138 == 0) {
      local_188 = local_40;
    }
    else {
      local_188 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_188;
    local_44 = 1;
    _objc_storeStrong(&local_138,0);
  }
LAB_015cddb8:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

