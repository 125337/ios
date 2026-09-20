// bubbleAlphaValueButtonTapped: @ 01f300f4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineUIBeautifyViewController::bubbleAlphaValueButtonTapped_
          (WCRefineUIBeautifyViewController *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 in_d0;
  undefined *local_88;
  undefined8 local_68;
  char *local_60;
  byte local_51;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined8 local_38;
  byte local_29;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_29 = lVar1 == 0xe00d2;
  local_41 = 0;
  local_51 = 0;
  if ((bool)local_29) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = in_d0;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = in_d0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_38 = local_68;
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
  if ((local_29 & 1) == 0) {
    local_88 = PTR_s_confirmBubbleAlphaLightInput__026c8818;
  }
  else {
    local_88 = PTR_s_confirmBubbleAlphaDarkInput__026c8810;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,local_88);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
  pcVar3 = local_60;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_28,0);
  return;
}

