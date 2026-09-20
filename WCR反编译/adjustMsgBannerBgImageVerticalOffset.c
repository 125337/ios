// adjustMsgBannerBgImageVerticalOffset @ 01b9cfd8

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::adjustMsgBannerBgImageVerticalOffset
               (ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_40;
  uint local_34;
  char *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCUIAlertView";
  local_28 = puVar2;
  _objc_getClass();
  bVar1 = pcVar3 != (char *)0x0;
  local_30 = pcVar3;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x18);
    pcVar3 = local_40;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_msgBannerBgImageOffsetYLight_026a07d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_msgBannerBgImageOffsetYDark_026a07d0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___0f___0f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleMsgBannerBgImageVerticalOf_026c0150);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

