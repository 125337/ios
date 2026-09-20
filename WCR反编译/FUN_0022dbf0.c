// FUN_0022dbf0 @ 0022dbf0

void FUN_0022dbf0(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *local_238;
  double local_1e8;
  double local_1a0;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
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
  double local_48;
  undefined8 local_40;
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
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    bVar1 = true;
    dVar3 = param_1;
    local_48 = param_1;
    local_40 = param_2;
    if (0.0 < param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      bVar1 = dVar3 <= 0.0;
      local_68 = param_1;
      local_60 = dVar3;
    }
    if (bVar1) {
      local_28 = 0;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      dVar6 = dVar3;
      local_80 = dVar3;
      local_78 = param_1;
      local_70 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
      local_a8 = local_70;
      local_1a0 = dVar6;
      if (local_70 < dVar6) {
        local_1a0 = local_70;
      }
      local_b8 = local_1a0;
      local_a0 = local_1a0;
      dVar4 = (local_1a0 - local_70) * 0.5;
      dVar7 = (local_1a0 - dVar6) * 0.5;
      dVar9 = local_70;
      local_b0 = dVar6;
      local_98 = dVar3;
      local_90 = dVar6;
      local_88 = dVar6;
      FUN_0022e368();
      dVar3 = local_a0;
      local_1e8 = local_a0;
      local_d8 = dVar4;
      dStack_d0 = dVar7;
      local_c8 = dVar9;
      dStack_c0 = dVar6;
      FUN_0022e3b4();
      local_e8 = dVar3;
      local_e0 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
      if (local_1e8 <= 0.0) {
        local_1e8 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
      }
      _UIGraphicsBeginImageContextWithOptions(local_e8,local_e0,local_1e8,0);
      dStack_108 = dStack_d0;
      local_110 = local_d8;
      dStack_f8 = dStack_c0;
      local_100 = local_c8;
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,dStack_d0,local_c8,dStack_c0,local_30,PTR_s_drawInRect__026ca610);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_118 = lVar2;
      _UIGraphicsEndImageContext();
      if (local_118 == 0) {
        local_28 = 0;
        local_34 = 1;
      }
      else {
        uVar8 = 0x4084000000000000;
        uVar5 = 0x4084000000000000;
        FUN_0022e3b4();
        local_128 = uVar5;
        local_120 = uVar8;
        _UIGraphicsBeginImageContextWithOptions(uVar5,uVar8,0x3ff0000000000000,0);
        lVar2 = local_118;
        uVar8 = 0;
        uVar5 = 0;
        uVar11 = 0x4084000000000000;
        uVar10 = 0x4084000000000000;
        FUN_0022e368();
        local_148 = uVar5;
        local_140 = uVar8;
        local_138 = uVar10;
        local_130 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,uVar8,uVar10,uVar11,lVar2,PTR_s_drawInRect__026ca610);
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        local_150 = lVar2;
        _UIGraphicsEndImageContext();
        if (local_150 == 0) {
          local_238 = &local_118;
        }
        else {
          local_238 = &local_150;
        }
        lVar2 = *local_238;
        (*(code *)PTR__objc_retain_02578638)();
        local_34 = 1;
        local_28 = lVar2;
        _objc_storeStrong(&local_150,0);
      }
      _objc_storeStrong(&local_118,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

