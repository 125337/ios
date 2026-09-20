// FUN_01735098 @ 01735098

byte FUN_01735098(undefined8 param_1)

{
  ulong uVar1;
  byte local_38;
  uint local_34;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__bg);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_QQbcx);
      local_34 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_o_mx);
        local_34 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_aS_);
          local_34 = (uint)uVar1;
        }
      }
      if ((local_34 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf___O_u);
        local_38 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf___O_u);
          local_38 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_containsString__0269d0b0,&cf____O_u);
            local_38 = (byte)uVar1;
          }
        }
        local_11 = local_38 & 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

