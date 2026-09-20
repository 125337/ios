// FUN_00f227b0 @ 00f227b0

byte FUN_00f227b0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_3c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_gh_);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,&cf_brandsessionholder);
      local_3c = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,&cf_officialaccounts);
        local_3c = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_brandservicesessionholder);
          local_3c = (byte)uVar1;
        }
      }
      local_11 = local_3c & 1;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

