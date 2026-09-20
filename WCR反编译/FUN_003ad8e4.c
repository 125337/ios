// FUN_003ad8e4 @ 003ad8e4

byte FUN_003ad8e4(undefined8 param_1)

{
  ulong uVar1;
  byte local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,&cf_WCRefine_group);
    local_30 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_WCRefine_);
      local_30 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_WCRefine_);
        local_30 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_sys_);
          local_30 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_grp_);
            local_30 = (byte)uVar1;
          }
        }
      }
    }
    local_11 = local_30 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

