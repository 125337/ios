// FUN_00f877ac @ 00f877ac

void FUN_00f877ac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_60;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if ((local_20 == 0) || (param_2 == 0)) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    _object_getClass();
    _class_getInstanceVariable();
    local_38 = uVar1;
    if (uVar1 == 0) {
      local_18 = 0;
      local_2c = 1;
    }
    else {
      uVar2 = local_20;
      _object_getIvar(local_20,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) == 0) {
        local_60 = 0;
      }
      else {
        local_60 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_60;
      local_2c = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

