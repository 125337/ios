// FUN_00396798 @ 00396798

ulong FUN_00396798(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong local_a0;
  ulong local_58 [4];
  long local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    _NSSelectorFromString();
    uVar2 = local_20;
    local_38 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,lVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
      if ((uVar2 & 1) == 0) {
        local_a0 = 0;
      }
      else {
        local_a0 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_unsignedLongLongValue_0269d6b8);
      }
      local_18 = local_a0;
      local_2c = 1;
      _objc_storeStrong(local_58,0);
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38);
      local_2c = 1;
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

