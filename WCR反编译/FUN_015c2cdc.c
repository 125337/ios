// FUN_015c2cdc @ 015c2cdc

void FUN_015c2cdc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint local_48;
  uint local_40;
  uint local_3c;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = 1;
  if (uVar1 != 0) {
    uVar2 = uVar1;
    _WCRVoiceProgressSeekEnabled();
    local_48 = (uint)uVar2 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((local_48 & 1) == 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e3b28);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      FUN_015c1a34();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_18;
      local_30 = uVar1;
      _objc_getAssociatedObject(local_18,&DAT_028e3b29);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_38 = uVar2;
      FUN_015c54f8();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
        if ((uVar1 & 1) == 0) {
          _WCRVoiceProgressSeekHideOverlay(local_18);
        }
        local_1c = 1;
      }
      else {
        uVar1 = local_18;
        _objc_getAssociatedObject(local_18,&DAT_028e3b2a);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_3c = (uint)uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_3c == 0) {
          uVar1 = local_18;
          _WCRVoiceProgressSeekRealDurationMS();
          local_3c = (uint)uVar1;
        }
        uVar1 = local_30;
        FUN_015c4840();
        local_40 = (uint)uVar1;
        if ((local_3c != 0) && (local_3c < local_40)) {
          local_40 = local_3c;
        }
        if (local_40 == 0) {
          uVar1 = local_18;
          FUN_015c4660(local_18,local_3c);
          if ((uint)uVar1 != 0) {
            local_40 = (uint)uVar1;
          }
        }
        FUN_015c4980(local_18,local_40,local_3c,0);
        local_1c = 0;
      }
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_1c = 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  else {
    _WCRVoiceProgressSeekHideOverlay(local_18);
    local_1c = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

