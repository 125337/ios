// _WCRVoiceProgressSeekPlayFromTime @ 015c2240

byte _WCRVoiceProgressSeekPlayFromTime(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  uint local_34;
  ulong local_30;
  undefined4 local_28;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_24 = param_2;
  if (local_20 == 0) {
    local_11 = 0;
    local_28 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_015c1a34();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_11 = 0;
      local_28 = 1;
    }
    else {
      uVar1 = local_20;
      _WCRVoiceProgressSeekRealDurationMS();
      local_34 = (uint)uVar1;
      if ((200 < local_34) && (local_34 < local_24 + 200U)) {
        local_24 = local_34 - 200;
      }
      local_40 = 0;
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getViewController_0269d328);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getViewController_0269d328);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_40;
        local_40 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_BeginPlaying_fromTime__026b0da0);
      if ((uVar1 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_delegate);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_40;
        local_40 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_BeginPlaying_fromTime__026b0da0);
      if ((uVar1 & 1) == 0) {
        uVar2 = local_20;
        FUN_015c26b8();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_015c25f4();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_40;
        local_40 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_BeginPlaying_fromTime__026b0da0);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_checkVoiceState__026b0da8);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_checkVoiceState__026b0da8,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_BeginPlaying_fromTime__026b0da0,local_30,local_24);
        local_11 = 1;
      }
      local_28 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

