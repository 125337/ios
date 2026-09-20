// FUN_0007f2f4 @ 0007f2f4

void FUN_0007f2f4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_18 = 0;
    local_2c = 1;
    goto LAB_0007f4b8;
  }
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026df7a0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
LAB_0007f46c:
    if (local_38 != 0) {
      _objc_setAssociatedObject(local_20,DAT_026df7a0,0,1);
    }
    local_18 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((uVar1 & 1) == 0) || (local_38 - local_28 == 0)) ||
       (uVar3 = local_38, FUN_0007f7bc(local_38 - local_28,local_38,local_28), uVar1 = local_38,
       (uVar3 & 1) == 0)) goto LAB_0007f46c;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_0007f4b8:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

