// FUN_005e6c20 @ 005e6c20

void FUN_005e6c20(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_s_getSectionAt__026a0a78;
  if ((local_20 == 0) || (param_2 < 0)) {
    local_18 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,param_2);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

