// startSummary @ 019553e4

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineFakeLocationSettingsViewController::startSummary
          (WCRefineFakeLocationSettingsViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_fakeLocationName_026b9b38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLatitude_026ac690);
    pcVar4 = local_30;
    uVar5 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLongitude_026ac698);
    FUN_01954c24(in_d0,uVar5);
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (((ulong)pcVar4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_pdkb;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLatitude_026ac690);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fakeLocationLongitude_026ac698);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf___4f___4f);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    bVar1 = pcVar2 < (cfstringStruct *)((long)&MACH_HEADER.filetype + 3);
    if (bVar1) {
      local_70 = local_38;
    }
    else {
      local_40 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringToIndex__0269d6c0,0xe);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

