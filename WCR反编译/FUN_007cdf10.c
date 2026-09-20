// FUN_007cdf10 @ 007cdf10

byte FUN_007cdf10(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  byte local_70;
  ulong local_48 [3];
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_ContactsViewController;
    _NSClassFromString();
    local_30 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_ContactsViewController);
      local_70 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_hasSuffix__0269d018,&cf__ContactsViewController);
        local_70 = (byte)uVar2;
      }
      local_11 = local_70 & 1;
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

