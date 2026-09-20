// FUN_0045533c @ 0045533c

byte FUN_0045533c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_98;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    local_38 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_headerViewModel_026a0fa0);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_headerViewModel_026a0fa0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (local_38 == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_isCustomPid_026a0fb0);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        FUN_00450ff4();
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar2;
        if (uVar2 == 0) {
          local_58 = local_38;
          FUN_004512d8();
          _objc_retainAutoreleasedReturnValue();
          local_98 = local_58;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_50[0] = local_98;
        if (uVar2 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_58);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid);
        local_11 = (byte)uVar2 & 1;
        local_30 = 1;
        _objc_storeStrong(local_50,0);
      }
      else {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isCustomPid_026a0fb0);
        local_11 = (byte)uVar2 & 1;
        local_30 = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

