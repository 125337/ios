// FUN_0017adbc @ 0017adbc

byte FUN_0017adbc(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_58;
  byte local_49;
  cfstringStruct *local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (uVar1 = local_20, FUN_00179ec8(), (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_0017abd0();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    FUN_0017c854();
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      FUN_0017ba68();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = &cf_setM_nsDescription_;
      local_40 = uVar1;
      _NSSelectorFromString();
      uVar1 = local_20;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,local_48,local_40);
      }
      local_49 = 0;
      FUN_0017ca6c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar1;
      if ((uVar1 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,
                     PTR_s_setContact_cardDesc_isLocal__0269f9f0), (uVar1 & 1) == 0)) {
        if ((local_58 != 0) &&
           (uVar1 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_58,PTR_s_respondsToSelector__026ca818,
                      PTR_s_setContact_cardDesc__0269f9f8), (uVar1 & 1) != 0)) {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setContact_cardDesc__0269f9f8,local_20,local_40);
          local_49 = (byte)uVar1;
        }
      }
      else {
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setContact_cardDesc_isLocal__0269f9f0,local_20,local_40,1);
        local_49 = (byte)uVar1;
      }
      if ((local_49 & 1) == 0) {
        FUN_0017cbd8(local_38);
      }
      local_11 = local_49 & 1;
      local_30 = 1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

