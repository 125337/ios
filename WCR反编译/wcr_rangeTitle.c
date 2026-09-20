// wcr_rangeTitle @ 01dcf37c

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsViewController::wcr_rangeTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  uint local_50;
  cfstringStruct *local_48;
  byte local_39;
  undefined *local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_activeTimeRange_026c5540);
  local_39 = 0;
  local_50 = 0;
  local_30 = param_1;
  if (param_1 == 5) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = (uint)puVar1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  IVar2 = local_20;
  pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((local_50 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_dayString__026c5548);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_20;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_wcr_dayString__026c5548);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    goto LAB_01dcf75c;
  }
  if (local_30 == 5) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringWithFormat__0269cca8,&::cf_format_s_);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    goto LAB_01dcf75c;
  }
  pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_sessionStatsTimeRangeTitles_026c5550);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_48 = pcVar5;
  if ((long)local_30 < 0) {
LAB_01dcf720:
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ke;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_count_0269cfe0);
    if (((long)pcVar5 <= (long)IVar2) || (local_30 == 5)) goto LAB_01dcf720;
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar5;
  }
  _objc_storeStrong(&local_48,0);
LAB_01dcf75c:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

