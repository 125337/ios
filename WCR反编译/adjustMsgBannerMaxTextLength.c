// adjustMsgBannerMaxTextLength @ 01b94470

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::adjustMsgBannerMaxTextLength
               (ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_28 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x40);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_msgBannerMaxTextLength_026a0780);
    puVar4 = local_38;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerMaxTextOverflowSuffix_026a0788);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_80 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    bVar1 = (long)local_40 < 1;
    local_48 = puVar4;
    if (bVar1) {
      local_80 = &::cf___;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringWithFormat__0269cca8,&cf__ld___);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98,local_80);
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleMsgBannerMaxTextLengthInpu_026c0040);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

