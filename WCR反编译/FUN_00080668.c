// FUN_00080668 @ 00080668

byte FUN_00080668(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulong local_a8 [2];
  ulong local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  uVar4 = local_30;
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
    goto LAB_00080aa4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_bounds_026ca548);
  dVar6 = 0.5;
  bVar1 = true;
  dVar5 = param_3;
  dVar7 = param_2;
  local_60 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  local_48 = param_4;
  if (0.5 < param_3) {
    dVar5 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    bVar1 = dVar5 <= 0.5;
    dVar7 = dVar6;
    local_90 = param_3;
    local_88 = dVar6;
    local_80 = param_2;
    local_78 = dVar5;
  }
  if (bVar1) {
    local_21 = 1;
    local_34 = 1;
  }
  else {
    local_98 = 0;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_headImageView);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_98;
    local_98 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_98;
    if (local_98 == 0) {
LAB_00080a38:
      local_21 = 0;
      local_34 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar2 = local_98;
      if ((uVar4 & 1) == 0) goto LAB_00080a38;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_bounds_026ca548);
      bVar1 = true;
      if (0.5 < dVar7) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a8[0],PTR_s_bounds_026ca548);
        bVar1 = dVar5 <= 0.5;
      }
      if (bVar1) {
        local_21 = 1;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(local_a8,0);
      if (local_34 == 0) goto LAB_00080a38;
    }
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_00080aa4:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

