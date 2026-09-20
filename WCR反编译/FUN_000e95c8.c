// FUN_000e95c8 @ 000e95c8

void FUN_000e95c8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_40;
  int local_38;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if (((uVar2 & 1) == 0) || (local_28 == 0)) {
    local_18 = 0;
    iVar4 = 1;
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar3;
    while (local_40 != 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_28);
      uVar2 = local_40;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
        local_38 = 1;
        goto LAB_000e9778;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_38 = 2;
LAB_000e9778:
    _objc_storeStrong(&local_40,0);
    iVar4 = local_38 + -2;
    if (iVar4 == 0) {
      local_18 = 0;
      iVar4 = 1;
      local_38 = 1;
    }
  }
  _objc_storeStrong(iVar4,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

