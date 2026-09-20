// FUN_008a7f40 @ 008a7f40

byte FUN_008a7f40(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_7c;
  ulong local_48;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsVideoMsg_0269da40);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsVideoMsg_0269da40),
       (uVar1 & 1) == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_008a82d4();
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)();
      FUN_008a84bc();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40[0];
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
      local_7c = 0;
      if (uVar2 != 0) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        local_7c = 0;
        if (uVar1 != 0) {
          uVar1 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40[0],PTR_s_isEqualToString__0269ccc8,local_48);
          local_7c = (byte)uVar1;
        }
      }
      local_11 = local_7c & 1;
      local_24 = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

