// saveMarkdownText @ 01eb99f0

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListMarkdownViewController::saveMarkdownText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_40 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_40;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_);
  _objc_storeStrong(&local_28,0);
  return;
}

