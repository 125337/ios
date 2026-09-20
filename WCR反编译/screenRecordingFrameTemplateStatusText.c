// screenRecordingFrameTemplateStatusText @ 017f01b0

/* Function Stack Size: 0x10 bytes */

ID WCRefineAssistFunctionViewController::screenRecordingFrameTemplateStatusText
             (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_screenRecordingFrameTemplate_026a7490);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_screenshotFrameTemplate_026a7498);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gb;
    local_3c = 1;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar2 = (cfstringStruct *)((long)&MACH_HEADER.cpusubtype + 1);
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_38;
      local_38 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_storeStrong(&local_48,0);
    }
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_78 = &cf__b;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_78;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_3c = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

