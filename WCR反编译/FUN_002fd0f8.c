// FUN_002fd0f8 @ 002fd0f8

void FUN_002fd0f8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uVar5;
  byte local_110;
  double local_e0;
  double local_80;
  ulong local_78;
  byte local_6e;
  byte local_6d;
  ulong local_60;
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  local_58 = puVar1;
  FUN_0030f84c();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar2;
  if (uVar2 == 0) {
    FUN_0030fa70();
    local_110 = (byte)uVar2;
  }
  else {
    FUN_0030f9ec();
    local_110 = (byte)uVar2;
  }
  local_6d = local_110 & 1;
  uVar2 = local_60;
  FUN_0030fc08();
  local_6e = (byte)uVar2;
  if ((((local_6d & 1) != 0) && (puVar1 = local_58, FUN_0030fc8c(), ((ulong)puVar1 & 1) != 0)) ||
     (((local_6e & 1) != 0 &&
      (puVar1 = local_58,
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homepageCornerEnabled_0269fc40),
      ((ulong)puVar1 & 1) != 0)))) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_0030fd54();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_78 != 0) {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_globalCornerMargin_026a1fe0);
      local_80 = (double)(long)puVar1;
      if (local_80 <= 0.0) {
        local_80 = 8.0;
      }
      uVar5 = 0x4059000000000000;
      if (100.0 < local_80) {
        local_80 = 100.0;
      }
      dVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
      _CGRectGetWidth(dVar4,uVar5,param_3,param_4);
      dVar4 = dVar4 - local_80 * 2.0;
      if (((0.0 < dVar4) && (dVar4 + 0.5 < local_30)) && (ABS(local_40) <= 0.5)) {
        local_40 = local_80;
        local_30 = dVar4;
      }
    }
    _objc_storeStrong(&local_78,0);
  }
  puVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homepageCornerEnabled_0269fc40);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_discoverPageCornerEnabled_026a1fe8),
     uVar2 = local_60, ((ulong)puVar1 & 1) == 0)) {
    (*DAT_028c9ad0)(local_40,uStack_38,local_30,uStack_28,local_48,local_50);
  }
  else {
    FUN_0030ffc8();
    FUN_0030fef4(uVar2,puVar1);
    if (((uVar2 & 1) != 0) && (local_40 == 0.0)) {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_globalCornerMargin_026a1fe0);
      local_e0 = (double)(long)puVar1;
      if (local_e0 <= 0.0) {
        local_e0 = 8.0;
      }
      if (100.0 < local_e0) {
        local_e0 = 100.0;
      }
      local_40 = local_40 + local_e0;
      local_30 = local_30 - local_e0 * 2.0;
    }
    (*DAT_028c9ad0)(local_40,uStack_38,local_30,uStack_28,local_48,local_50);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  return;
}

