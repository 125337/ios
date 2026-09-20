// alertConfirmButtonContent: @ 016ddfb4

/* Function Stack Size: 0x18 bytes */

void RepeatEnhanceViewController::alertConfirmButtonContent_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_a0 = &cf_QAQ_QwQ;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    local_61 = false;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_b0 = &cf_QAQ;
    }
    else {
      local_b0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b0;
    }
    local_61 = pcVar1 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b0;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if (pcVar1 < (cfstringStruct *)0x2) {
      local_c0 = &cf_QwQ;
    }
    else {
      local_c0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_c0;
    }
    local_79 = pcVar1 >= (cfstringStruct *)0x2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_c0;
    if (local_79) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348);
  _objc_storeStrong(&local_38,0);
  return;
}

