// FUN_000c2bc0 @ 000c2bc0

void FUN_000c2bc0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_000c39b4(local_30,PTR_s_viewModel_0269d080);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar2 = local_30;
    FUN_000c3ab4(local_30,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  if (local_38 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    pcVar1 = local_38;
    FUN_000c39b4(local_38,PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_38;
      FUN_000c3ab4(local_38,&cf_messageWrap);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_50;
      local_50 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_50 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_48 = 1;
    }
    else {
      pcVar1 = local_50;
      FUN_000c39b4(local_50,PTR_s_m_nsRealChatUsr_0269d190);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_000c2a24();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar2 = local_50;
        FUN_000c3ab4(local_50,&cf_m_nsRealChatUsr);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_000c2a24();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      pcVar1 = local_58;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar1 = local_50;
        FUN_000c39b4(local_50,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_000c2a24();
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          pcVar2 = local_50;
          FUN_000c3ab4(local_50,&cf_m_nsFromUsr);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          FUN_000c2a24();
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_60;
          local_60 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar1 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_48 = 1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_48 = 1;
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

