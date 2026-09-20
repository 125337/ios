// FUN_00751734 @ 00751734

byte FUN_00751734(undefined8 param_1)

{
  ulong uVar1;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    FUN_0075165c();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 == 0) ||
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_28),
       (uVar1 & 1) == 0)) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      FUN_00751a40();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
      if ((uVar1 == 0) ||
         (uVar1 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_40),
         (uVar1 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

