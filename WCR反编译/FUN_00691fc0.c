// FUN_00691fc0 @ 00691fc0

byte FUN_00691fc0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_8c;
  ulong local_50;
  undefined4 local_44;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_006807d4();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  uVar2 = local_28;
  if (uVar1 == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    uVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringFromIndex__0269d120,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    local_8c = 1;
    if (uVar2 != 0) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf__);
      local_8c = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_isEqualToString__0269ccc8,&cf_format_s_);
        local_8c = (byte)uVar2;
      }
    }
    local_11 = local_8c & 1;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

