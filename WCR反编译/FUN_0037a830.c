// FUN_0037a830 @ 0037a830

byte FUN_0037a830(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  int local_94;
  ulong local_58 [4];
  long local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
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
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if ((uVar2 & 1) == 0) {
        local_94 = 0;
      }
      else {
        uVar2 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_boolValue_026ca540);
        local_94 = (int)uVar2;
      }
      local_11 = local_94 != 0;
      local_2c = 1;
      _objc_storeStrong(local_58,0);
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38);
      local_11 = (byte)uVar2 & 1;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

