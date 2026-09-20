// FUN_0007b310 @ 0007b310

void FUN_0007b310(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0007b4b4;
  }
  uVar2 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026df780);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if (uVar2 == 0) {
LAB_0007b494:
    local_18 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) goto LAB_0007b494;
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = local_30;
    if (uVar4 - uVar1 != 0) {
      FUN_0007b4e8(uVar4 - uVar1,local_20);
      goto LAB_0007b494;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_0007b4b4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

