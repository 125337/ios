// FUN_007cfc4c @ 007cfc4c

byte FUN_007cfc4c(undefined8 param_1)

{
  ulong uVar1;
  byte local_78;
  byte local_70;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_007c9cf4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_wechat);
    if (((uVar1 & 1) == 0) ||
       (((uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_containsString__0269d0b0,&cf_notconnected), (uVar1 & 1) == 0 &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_containsString__0269d0b0,&cf_unconnected), (uVar1 & 1) == 0)) &&
        (uVar1 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_containsString__0269d0b0,&cf_disconnected), (uVar1 & 1) == 0)))) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__O);
      local_70 = 0;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__gc);
        local_78 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__g_c);
          local_78 = (byte)uVar1;
        }
        local_70 = local_78;
      }
      local_11 = local_70 & 1;
    }
    else {
      local_11 = 1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

