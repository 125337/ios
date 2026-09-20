// FUN_001256a8 @ 001256a8

uint FUN_001256a8(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf___);
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_y);
    local_2c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_leftthegroup);
      local_2c = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_quitthegroup);
        local_2c = (uint)uVar1;
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

