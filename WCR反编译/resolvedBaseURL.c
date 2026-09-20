// resolvedBaseURL @ 015a07d4

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoiceCloneHelper::resolvedBaseURL(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = false;
  if (((ulong)puVar6 & 1) != 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    bVar1 = pcVar2 != (cfstringStruct *)0x0;
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (bVar1) {
    while (pcVar3 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__),
          pcVar2 = local_30, ((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_substringToIndex__0269d6c0,
                 (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 7));
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_https___api_siliconflow_cn;
    }
    else if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_https___api_minimaxi_com;
    }
    else if ((dword *)puVar7 == &MACH_HEADER.cputype) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_https___api_siliconflow_cn;
    }
    else if (puVar7 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_https___converter_fineshare_net;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_https___api_fish_audio;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

