// FUN_0024674c @ 0024674c

void FUN_0024674c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar3;
  while (local_28 != 0) {
    uVar1 = local_28;
    FUN_00244f18(local_28,PTR_s_getChatContact_0269d630);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_38 = uVar1;
    if (uVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        FUN_00244f18();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_38;
        local_38 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar3 = local_38;
        if (local_38 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar3;
          local_2c = 1;
          goto LAB_00246954;
        }
      }
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_2c = 1;
      local_18 = uVar1;
    }
LAB_00246954:
    _objc_storeStrong(&local_38,0);
    if (local_2c != 0) goto LAB_002469c8;
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_28 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  local_2c = 2;
LAB_002469c8:
  _objc_storeStrong(&local_28,0);
  iVar5 = local_2c + -2;
  if (iVar5 == 0) {
    local_18 = 0;
    iVar5 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(iVar5,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

