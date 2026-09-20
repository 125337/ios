// FUN_01565bcc @ 01565bcc

void FUN_01565bcc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      FUN_01566074(local_20,&cf_viewModel);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_30 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_24 = 1;
    }
    else {
      pcVar1 = local_30;
      FUN_01533df4(local_30,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar2 = local_30;
        FUN_01566074(local_30,&cf_messageWrap);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_38;
        local_38 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_38 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
        local_24 = 1;
      }
      else {
        pcVar1 = local_38;
        FUN_01533df4(local_38,PTR_s_m_nsRealChatUsr_0269d190);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_01533bf8();
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          pcVar2 = local_38;
          FUN_01533eb8(local_38,&cf_m_nsRealChatUsr);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_40;
          local_40 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        pcVar1 = local_40;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar1 = local_38;
          FUN_01533df4(local_38,PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar1;
          FUN_01533bf8();
          _objc_retainAutoreleasedReturnValue();
          local_48 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          pcVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          if (pcVar1 == (cfstringStruct *)0x0) {
            pcVar2 = local_38;
            FUN_01533eb8(local_38,&cf_m_nsFromUsr);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_48;
            local_48 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar1);
          }
          if (local_48 == (cfstringStruct *)0x0) {
            local_88 = &cf___;
          }
          else {
            local_88 = local_48;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_88;
          local_24 = 1;
          _objc_storeStrong(&local_48,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          local_24 = 1;
        }
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

