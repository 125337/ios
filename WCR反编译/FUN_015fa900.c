// FUN_015fa900 @ 015fa900

byte FUN_015fa900(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else if (DAT_028e3c08 == 0) {
    if (local_20 == 0) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      pcVar2 = &cf_GetSessionByUserName_;
      _NSSelectorFromString();
      uVar3 = local_20;
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar3 & 1) == 0) {
        local_11 = 0;
        local_2c = 1;
      }
      else {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,local_38,local_28);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = &cf_isHidden;
        local_40 = uVar3;
        _NSSelectorFromString();
        FUN_016054b4(uVar3,pcVar2);
        local_11 = (byte)uVar3 & 1;
        local_2c = 1;
        _objc_storeStrong(&local_40,0);
      }
    }
  }
  else {
    lVar1 = DAT_028e3c08;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3c08,PTR_s_containsObject__0269cbb8,local_28);
    local_11 = (byte)lVar1 & 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

