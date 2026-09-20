// FUN_0087b010 @ 0087b010

void FUN_0087b010(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_90;
  bool local_51;
  ulong local_50;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    pcVar1 = &cf_delegate;
    _NSSelectorFromString();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      _object_getClass();
      _class_getInstanceVariable(uVar2,"_delegate");
      if (uVar2 == 0) {
        local_90 = 0;
      }
      else {
        local_90 = local_20;
        _object_getIvar(local_20,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_90;
      }
      local_51 = uVar2 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_90;
      if (local_51) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

