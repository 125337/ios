// FUN_00286a38 @ 00286a38

byte FUN_00286a38(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_6c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_0027bc38();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_mediaType);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_6c = 1;
      if (uVar2 != 2) {
        local_6c = 1;
        if (uVar2 != 0) {
          uVar1 = local_20;
          FUN_0027bc38();
          local_6c = (byte)uVar1 ^ 1;
        }
      }
      local_11 = local_6c & 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

