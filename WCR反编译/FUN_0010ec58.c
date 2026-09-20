// FUN_0010ec58 @ 0010ec58

uint FUN_0010ec58(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_ReQN_J);
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_ReQ_J);
    local_2c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_joinedthegroup);
      local_2c = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_joinedgroup);
        local_2c = (uint)uVar1;
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

