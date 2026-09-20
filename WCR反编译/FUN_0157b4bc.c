// FUN_0157b4bc @ 0157b4bc

byte FUN_0157b4bc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (uVar1 = local_20, FUN_01564574(), (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_01563370();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      local_38 = 0;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_38;
        local_38 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if ((local_38 == 0) &&
         (uVar1 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0),
         (uVar1 & 1) != 0)) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_38;
        local_38 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if ((local_38 == 0) || (uVar2 = local_38, FUN_01564574(), uVar1 = local_20, (uVar2 & 1) == 0))
      {
        local_11 = 0;
      }
      else {
        FUN_01569d5c();
        _objc_retainAutoreleasedReturnValue();
        FUN_0157cf84();
        local_11 = (byte)uVar1 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

