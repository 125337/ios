// FUN_0014aee8 @ 0014aee8

void FUN_0014aee8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_38;
  int local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    iVar4 = 1;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar3;
    while (uVar2 = local_38, local_38 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar3 = local_38;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
        local_30 = 1;
        goto LAB_0014b0a4;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_30 = 2;
LAB_0014b0a4:
    _objc_storeStrong(&local_38,0);
    iVar4 = local_30 + -2;
    if (iVar4 == 0) {
      local_18 = 0;
      iVar4 = 1;
      local_30 = 1;
    }
  }
  _objc_storeStrong(iVar4,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

