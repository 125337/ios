// saveInlineHTMLSilently: @ 01f01ef0

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoListWebSettingsViewController::saveInlineHTMLSilently_
               (ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  byte local_21;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  FUN_01eea960();
  _objc_retainAutoreleasedReturnValue();
  local_30 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_30;
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8,local_68);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_htmlTextView_026c7f70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  FUN_01f01544();
  _objc_retainAutoreleasedReturnValue();
  FUN_01eec144();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  pcVar1 = &cf__ROX_;
  if ((local_21 & 1) == 0) {
    pcVar1 = &cf__OX_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_refreshHTMLStatusLabelWithPrefix_026c7fb0,pcVar1);
  if ((local_21 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_H);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

