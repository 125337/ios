// activateFontItem: @ 019ddde4

/* Function Stack Size: 0x18 bytes */

void WCRefineFontBeautifyViewController::activateFontItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  cfstringStruct *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_postScriptName);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_fontDescriptorsForFileAtPath__026baee8,local_30);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_currentThread_026a11e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setObject_forKeyedSubscript__0269d248);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
               PTR_s_fontWithName_size__026a1cd0,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_removeObjectForKey__0269d700,&cf_wcr_fontBeautify_factoryBypass);
    if ((local_48 == (cfstringStruct *)0x0) &&
       (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       pcVar2 != (cfstringStruct *)0x0)) {
      pcVar5 = local_30;
      FUN_019ccb98(pcVar2,0x4030000000000000,local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    bVar1 = local_48 == (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_W_SOlQ1Y_);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (bVar1) goto LAB_019de2e4;
  }
  IVar6 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_enableBeautifyOnSelect_026bb008);
  if ((IVar6 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_W_SO_fbc);
LAB_019de2e4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

