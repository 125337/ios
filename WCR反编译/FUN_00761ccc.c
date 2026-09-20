// FUN_00761ccc @ 00761ccc

byte FUN_00761ccc(undefined8 param_1)

{
  ulong uVar1;
  byte local_34;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_20, FUN_00762f44(), (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__);
    if (((uVar1 & 1) == 0) &&
       ((uVar1 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Hold),
        (uVar1 & 1) == 0 &&
        (uVar1 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Talk),
        (uVar1 & 1) == 0)))) {
      FUN_007630c0();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      local_34 = 0;
      if (uVar1 != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_30);
        local_34 = (byte)uVar1;
      }
      local_11 = local_34 & 1;
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

