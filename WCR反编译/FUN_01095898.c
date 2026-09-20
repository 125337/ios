// FUN_01095898 @ 01095898

uint FUN_01095898(undefined8 param_1)

{
  ulong uVar1;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_doutu);
  local_24 = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_emotion);
    local_24 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_emoticon);
      local_24 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_fav);
        local_24 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_eV);
          local_24 = (uint)uVar1;
        }
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_24 & 1;
}

