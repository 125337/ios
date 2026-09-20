// wcr_rewriteFineVoiceDownloadURL: @ 015a4840

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoiceCloneHelper::wcr_rewriteFineVoiceDownloadURL_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  FUN_015a4bf8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_voiceCloneBaseURL_026b0ad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    while (pcVar3 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,&cf__),
          pcVar1 = local_50, ((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_substringToIndex__0269d6c0,
                 (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 7));
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_50;
      local_50 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_voiceCloneProxyEnabled_026b0ad8);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    else {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_hasPrefix__0269d320,&cf_https___dlaudio_fineshare_net);
      pcVar1 = local_38;
      local_18 = local_50;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      else {
        pcVar3 = &cf_https___dlaudio_fineshare_net;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_https___dlaudio_fineshare_net,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf__fvdlaudio;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf__fvdlaudio,PTR_s_stringByAppendingString__0269d398);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringByAppendingString__0269d398);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

