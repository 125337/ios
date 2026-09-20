// FUN_00125510 @ 00125510

uint FUN_00125510(undefined8 param_1)

{
  ulong uVar1;
  uint local_3c;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_yQN_J);
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_yQ_J);
    local_2c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsString__0269d0b0,&cf_ydN_J);
      local_2c = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_removed);
        local_3c = 0;
        if ((uVar1 & 1) != 0) {
          uVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_group);
          local_3c = (uint)uVar1;
        }
        local_2c = local_3c;
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

