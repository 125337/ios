// FUN_0035af20 @ 0035af20

void FUN_0035af20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  undefined1 local_49;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  uVar4 = local_38;
  puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    local_40 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_49 = 0;
    bVar2 = false;
    uVar1 = (uVar4 & 1) != 0;
    if ((bool)uVar1) {
      uVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar4 != 0;
      local_49 = uVar1;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar1 = local_49;
    }
    local_49 = uVar1;
    uVar4 = local_40;
    if (bVar2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
      local_78 = param_1;
      local_70 = param_2;
      local_68 = param_3;
      local_60 = param_4;
      _CGRectGetWidth();
      uVar4 = local_38;
      local_58 = param_1;
      FUN_003ae180(local_38,2);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar4;
      }
      local_50 = (uint)(uVar4 != 0);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_40,0);
    if (local_50 != 0) goto LAB_0035b2f4;
  }
  uVar5 = local_30;
  FUN_003612b8(local_30,&cf_view);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_88 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar4 = local_88;
  if ((uVar5 & 1) == 0) {
LAB_0035b2d4:
    local_28 = 0;
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_bounds_026ca548);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    FUN_003ae180(uVar4,3);
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar4;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
    }
    local_50 = (uint)(uVar4 != 0);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    if (local_50 == 0) goto LAB_0035b2d4;
  }
  _objc_storeStrong(&local_88,0);
LAB_0035b2f4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

