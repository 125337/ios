// momentsKeywordFilterSummary @ 01c0c650

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsViewController::momentsKeywordFilterSummary(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
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
  local_70 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gn_;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    bVar1 = pcVar2 < (cfstringStruct *)((long)&MACH_HEADER.filetype + 1);
    if (bVar1) {
      local_88 = local_30;
    }
    else {
      local_40 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,0xc);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

