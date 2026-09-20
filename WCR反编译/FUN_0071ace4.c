// FUN_0071ace4 @ 0071ace4

void FUN_0071ace4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar3;
  do {
    if (local_28 == 0) {
      local_18 = 0;
      goto LAB_0071ae34;
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_28 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_18 = local_28;
  } while ((uVar3 & 1) == 0);
  (*(code *)PTR__objc_retain_02578638)();
LAB_0071ae34:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

