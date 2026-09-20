// FUN_018e2e48 @ 018e2e48

void FUN_018e2e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_1c8;
  double local_1b0;
  double local_1a0;
  double local_198;
  double local_190;
  double local_168;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
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
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    dVar3 = 52.0;
    local_40 = 52.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    dVar4 = dVar3;
    local_58 = dVar3;
    local_50 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
    dVar3 = dVar3 * dVar4;
    local_48 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    dVar5 = dVar4;
    local_70 = dVar3;
    local_68 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
    local_88 = dVar4 * dVar5;
    local_80 = local_48;
    local_168 = local_88;
    if (local_88 <= local_48) {
      local_168 = local_48;
    }
    local_90 = local_168;
    local_78 = local_168;
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    local_60 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_98 = local_168;
    if (local_168 < 0.5) {
      local_98 = 2.0;
    }
    local_a0 = local_40 * local_98;
    if ((local_a0 < local_78) ||
       (dVar4 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830),
       local_28 = local_30, DAT_02323c68 <= ABS(dVar4 - local_98))) {
      local_b0 = 0x3ff0000000000000;
      local_c0 = local_78;
      local_c8 = 0x3ff0000000000000;
      if (1.0 <= local_78) {
        local_190 = local_78;
      }
      else {
        local_190 = 1.0;
      }
      local_d0 = local_190;
      local_b8 = local_a0 / local_190;
      local_198 = local_b8;
      if (1.0 < local_b8) {
        local_198 = 1.0;
      }
      local_d8 = local_198;
      local_a8 = local_198;
      local_f0 = 0x3ff0000000000000;
      local_f8 = (local_48 * local_198) / local_98;
      local_1a0 = local_f8;
      if (local_f8 <= 1.0) {
        local_1a0 = 1.0;
      }
      local_100 = local_1a0;
      local_108 = 0x3ff0000000000000;
      local_110 = (local_60 * local_198) / local_98;
      local_1b0 = local_110;
      if (local_110 <= 1.0) {
        local_1b0 = 1.0;
      }
      local_118 = local_1b0;
      FUN_018e9694();
      local_e8 = local_1a0;
      local_e0 = local_1b0;
      _UIGraphicsBeginImageContextWithOptions(local_1a0,local_1b0,local_98,0);
      lVar2 = local_30;
      uVar7 = 0;
      uVar6 = 0;
      dVar4 = local_e8;
      dVar5 = local_e0;
      FUN_018e2124();
      local_138 = uVar6;
      local_130 = uVar7;
      local_128 = dVar4;
      local_120 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar7,dVar4,dVar5,lVar2,PTR_s_drawInRect__026ca610);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_140 = lVar2;
      _UIGraphicsEndImageContext();
      if (local_140 == 0) {
        local_1c8 = local_30;
      }
      else {
        local_1c8 = local_140;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_1c8;
      local_34 = 1;
      _objc_storeStrong(&local_140,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

