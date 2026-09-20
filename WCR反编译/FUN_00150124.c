// FUN_00150124 @ 00150124

void FUN_00150124(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_e0;
  ulong local_80;
  bool local_51;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable(uVar1,"_scrollView");
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_80 = 0;
    }
    else {
      local_80 = local_20;
      _object_getIvar(local_20,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    local_51 = uVar1 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = local_80;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    uVar1 = local_48[0];
    puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf__scrollView);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48[0];
      local_48[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_48[0];
    puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_e0 = 0;
    }
    else {
      local_e0 = local_48[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_e0;
    local_24 = 1;
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

