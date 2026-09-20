// FUN_00741ee8 @ 00741ee8

void FUN_00741ee8(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_2c = param_3;
  local_28 = param_2;
  local_20 = param_1;
  FUN_00745c20(param_1,param_3);
  if ((param_1 & 1) != 0) {
    uVar3 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026f45b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) == 0) {
      FUN_00745e30();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_38 != 0) {
        _objc_setAssociatedObject(local_20,DAT_026f45b8,local_38,1);
      }
    }
    uVar3 = local_38;
    bVar1 = local_38 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
    }
    _objc_storeStrong(&local_38,0);
    if (bVar1) goto LAB_0074208c;
  }
  uVar3 = local_20;
  (*DAT_028cc680)(local_20,local_28,local_2c);
  _objc_retainAutoreleasedReturnValue();
  local_18 = uVar3;
LAB_0074208c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

