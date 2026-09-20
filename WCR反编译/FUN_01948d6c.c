// FUN_01948d6c @ 01948d6c

void FUN_01948d6c(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  uint local_2c;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  pcVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_2c = 1;
  }
  else {
    _NSHomeDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_60 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_60;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_20;
    local_40 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar1;
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,local_40),
       pcVar1 = local_20, ((ulong)pcVar2 & 1) == 0)) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_38);
      if (((ulong)pcVar1 & 1) != 0) {
        _objc_storeStrong(&local_48,&cf___);
      }
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ensureRootDirectoryExists__026a3c70,0
                );
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___fe);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_bwQSOP_vU_);
    }
    local_2c = (uint)(pcVar1 == (cfstringStruct *)0x0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    if (local_2c == 0) {
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

