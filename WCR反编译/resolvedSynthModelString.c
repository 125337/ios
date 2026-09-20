// resolvedSynthModelString @ 015a0b98

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoiceCloneHelper::resolvedSynthModelString(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_40;
  undefined4 local_34;
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
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if (pcVar3 == (cfstringStruct *)0x0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar9;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = false;
      if (((ulong)puVar7 & 1) != 0) {
        puVar7 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        bVar1 = puVar7 != (undefined *)0x0;
      }
      pcVar2 = &cf_s2_1_pro_free;
      if (!bVar1) {
        pcVar2 = &cf_fishaudio_fish_speech_1_5;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else if ((dword *)puVar6 == &MACH_HEADER.cputype) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_FunAudioLLM_CosyVoice2_0_5B;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_s2_1_pro_free;
      local_34 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

