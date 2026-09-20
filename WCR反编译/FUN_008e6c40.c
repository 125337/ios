// FUN_008e6c40 @ 008e6c40

byte FUN_008e6c40(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf_AppFile);
  if (uVar1 == 0x7fffffffffffffff) {
    uVar1 = local_20;
    FUN_008e61ec(0);
    if (((uVar1 & 1) == 0) && (uVar1 = local_20, FUN_008e62e4(), (uVar1 & 1) == 0)) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf_VoiceMessage)
      ;
      if (uVar1 == 0x7fffffffffffffff) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfString__0269d838,&cf_File);
        local_11 = uVar1 != 0x7fffffffffffffff;
      }
      else {
        local_11 = false;
      }
    }
    else {
      local_11 = false;
    }
  }
  else {
    local_11 = true;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

