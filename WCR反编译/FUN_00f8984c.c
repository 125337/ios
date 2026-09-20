// FUN_00f8984c @ 00f8984c

byte FUN_00f8984c(undefined8 param_1)

{
  ulong uVar1;
  byte local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_Refer);
    local_28 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_Quote);
      local_28 = (byte)uVar1;
    }
    local_11 = local_28 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

