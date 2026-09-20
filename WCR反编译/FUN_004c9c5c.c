// FUN_004c9c5c @ 004c9c5c

void FUN_004c9c5c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_18 = local_20;
    if ((uVar3 & 1) == 0) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_customView_0269ea28);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_30;
    if ((uVar3 & 1) == 0) {
      uVar2 = local_28;
      FUN_004ca080();
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

