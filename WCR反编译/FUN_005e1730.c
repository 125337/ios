// FUN_005e1730 @ 005e1730

void FUN_005e1730(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_005e1a60;
  }
  uVar1 = local_20;
  FUN_005e1d10(local_20,PTR_s_delegate_0269e808);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_30;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIResponder_026ce050;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIResponder_026ce050,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_30;
      FUN_005e1e18();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar3;
      if (uVar3 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_24 = (uint)(uVar3 != 0);
      _objc_storeStrong(local_48,0);
      if (local_24 != 0) goto LAB_005e1a40;
    }
    uVar3 = local_20;
    FUN_005e1d10(local_20,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    if (uVar3 == 0) {
      uVar1 = local_20;
      FUN_005e1d10(local_20,PTR_s_getTableView_026a09c8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_50;
    puVar2 = PTR__OBJC_CLASS___UIResponder_026ce050;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIResponder_026ce050,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar3 = local_50;
      FUN_005e1e18();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
    }
    local_24 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
    local_24 = 1;
  }
LAB_005e1a40:
  _objc_storeStrong(&local_30,0);
LAB_005e1a60:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

