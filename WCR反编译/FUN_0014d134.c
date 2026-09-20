// FUN_0014d134 @ 0014d134

byte FUN_0014d134(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  byte local_50;
  ulong local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 0;
  }
  else {
    bVar1 = false;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_US);
    local_50 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_xU);
      local_50 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_Menu);
        local_50 = 1;
        if ((uVar2 & 1) == 0) {
          local_38 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_50 = (byte)uVar2;
        }
      }
    }
    local_11 = local_50 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

