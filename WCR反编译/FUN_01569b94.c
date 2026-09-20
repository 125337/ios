// FUN_01569b94 @ 01569b94

byte FUN_01569b94(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == 0) || (uVar1 = local_20, FUN_01564574(), (uVar1 & 1) != 0)) ||
     (uVar1 = local_20, FUN_01565620(), (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_01532090();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_38 = uVar1;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if ((uVar1 == 0) ||
         (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         uVar1 == 0)) {
        local_11 = 0;
      }
      else {
        uVar1 = local_30;
        FUN_01564574();
        if ((uVar1 & 1) == 0) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_38);
          local_11 = (byte)uVar1 & 1;
        }
        else {
          local_11 = 1;
        }
      }
      local_24 = 1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

