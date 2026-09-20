// FUN_001495b8 @ 001495b8

void FUN_001495b8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong local_48 [3];
  uint local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar3;
  while (uVar3 = local_28, local_28 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_28;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar3 = local_48[0];
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar3;
      }
      local_2c = (uint)bVar1;
      _objc_storeStrong(local_48,0);
      if (local_2c != 0) goto LAB_001497f0;
    }
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_28 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  local_2c = 2;
LAB_001497f0:
  _objc_storeStrong(&local_28,0);
  iVar6 = local_2c - 2;
  if (iVar6 == 0) {
    local_18 = 0;
    iVar6 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(iVar6,&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

