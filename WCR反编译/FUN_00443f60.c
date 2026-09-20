// FUN_00443f60 @ 00443f60

void FUN_00443f60(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double local_388;
  double local_358;
  double local_350;
  double local_2f8;
  double local_2c0;
  double local_60;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_6;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_viewWithTag__026cabe0,0x2c63f);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_5,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((param_5 & 1) == 0) {
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,0);
    FUN_00458884(local_28,1);
    local_50 = 0;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manageButton_026a1000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_60 = 12.0;
    if ((local_50 != 0) &&
       (uVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isHidden_026ca768),
       (uVar4 & 1) == 0)) {
      dVar5 = 12.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      _CGRectGetWidth();
      dVar6 = dVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
      _CGRectGetMinX(dVar6,param_2);
      param_2 = (dVar5 - dVar6) + 8.0;
      local_2c0 = param_2;
      if (param_2 <= 12.0) {
        local_2c0 = 12.0;
      }
      local_60 = local_2c0;
    }
    dVar6 = 80.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar6,param_2);
    local_60 = (dVar6 - 12.0) - local_60;
    local_2f8 = local_60;
    if (local_60 <= 80.0) {
      local_2f8 = 80.0;
    }
    dVar6 = local_2f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    _CGRectGetHeight(dVar6,local_60);
    uVar8 = 0x404a000000000000;
    if (52.0 <= dVar6) {
      dVar6 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      _CGRectGetHeight(dVar6,uVar8,param_3,param_4);
      local_388 = (dVar6 - 30.0) - 6.0;
      if (local_388 <= 0.0) {
        local_388 = 0.0;
      }
      local_358 = local_388;
    }
    else {
      dVar6 = 0.0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      _CGRectGetHeight(dVar6,uVar8,param_3,param_4);
      local_350 = (dVar6 - 30.0) * 0.5;
      if (local_350 <= 0.0) {
        local_350 = 0.0;
      }
      local_358 = local_350;
    }
    uVar7 = 0x4028000000000000;
    uVar9 = 0x403e000000000000;
    FUN_004593d4();
    uVar4 = local_38;
    uVar8 = uVar7;
    dVar6 = local_358;
    dVar5 = local_2f8;
    uVar10 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    uVar1 = (uint)uVar4;
    _CGRectEqualToRect(uVar8,dVar6,dVar5,uVar10,uVar7,local_358,local_2f8,uVar9);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,local_358,local_2f8,uVar9,local_38,PTR_s_setFrame__026ca960);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bringSubviewToFront__026ca550,local_38);
    if ((local_50 != 0) &&
       (uVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isHidden_026ca768),
       (uVar4 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bringSubviewToFront__026ca550,local_50);
    }
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

