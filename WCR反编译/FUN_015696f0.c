// FUN_015696f0 @ 015696f0

byte FUN_015696f0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte local_54;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_38 = uVar1;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_40 = uVar2;
    FUN_01564574();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      FUN_01564574();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_01569b94();
        local_11 = (byte)uVar1 & 1;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      uVar1 = local_28;
      FUN_01564574();
      local_54 = 0;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        local_54 = 0;
        if (uVar1 != 0) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_40);
          local_54 = (byte)uVar1;
        }
      }
      local_11 = local_54 & 1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

