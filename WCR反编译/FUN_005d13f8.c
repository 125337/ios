// FUN_005d13f8 @ 005d13f8

byte FUN_005d13f8(undefined8 param_1)

{
  ulong uVar1;
  byte local_40;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_Sight);
    local_40 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_sight);
      local_40 = (byte)uVar1;
    }
    local_11 = local_40 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

