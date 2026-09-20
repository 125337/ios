// FUN_008f8484 @ 008f8484

byte FUN_008f8484(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_74;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_008f82f8();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_008e5574();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)();
    FUN_008f3a68();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    local_74 = 0;
    if (uVar2 != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      local_74 = 0;
      if (uVar1 != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_40);
        local_74 = (byte)uVar1;
      }
    }
    local_11 = local_74 & 1;
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

