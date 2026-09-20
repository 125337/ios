// backGestureAnimationDurationValueButtonTapped: @ 01a5087c

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::backGestureAnimationDurationValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *local_40;
  uint local_34;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar2 != (char *)0x0;
  local_30 = pcVar2;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleBackGestureAnimationDurati_026bcba8);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
    pcVar2 = local_40;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

