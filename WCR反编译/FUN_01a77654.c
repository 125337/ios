// FUN_01a77654 @ 01a77654

byte FUN_01a77654(undefined8 param_1)

{
  ulong uVar1;
  byte local_5c;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_N_kR_);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_N_kRD_),
       (uVar1 & 1) == 0)) {
      FUN_01a77848();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      local_5c = 0;
      if (uVar1 != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,local_38);
        local_5c = (byte)uVar1;
      }
      local_11 = local_5c & 1;
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_11 = 1;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

