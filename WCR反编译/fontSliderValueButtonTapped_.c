// fontSliderValueButtonTapped: @ 019dbb00

/* Function Stack Size: 0x18 bytes */

void WCRefineFontBeautifyViewController::fontSliderValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  char *local_68;
  uint local_5c;
  char *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_30 = lVar3 + -1000;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &::cf___;
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  if (local_30 == 0x7d1) {
    _objc_storeStrong(0,&local_38,&cf_W_SO_Y_);
    _objc_storeStrong(&local_40,&cf_eQ_vRk7);
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fontBeautifyScale_026baf50);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else if (local_30 == 0x7d2) {
    _objc_storeStrong(0,&local_38,&cf_W__);
    _objc_storeStrong(&local_40,&cf_eQchMO_);
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fontBeautifyWeightDelta_026a1d18);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else if (local_30 == 0x7d3) {
    _objc_storeStrong(0,&local_38,&cf_W_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fontBeautifyLetterSpacing_026a1d20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else if (local_30 == 0x7d4) {
    _objc_storeStrong(0,&local_38,&cf_L);
    _objc_storeStrong(&local_40,&::cf_eQ);
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fontBeautifyLineSpacing_026a1d28);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringWithFormat__0269cca8,&cf___1f);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar6 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar6 != (char *)0x0;
  local_58 = pcVar6;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextFieldDefaultText__0269fd98,local_48)
    ;
    pcVar6 = local_68;
    puVar4 = PTR_s_fontSliderValueButtonTapped__026baf70;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(pcVar6,puVar4,puVar7,1);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmSliderInput__026bafa8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_68,0);
  }
  local_5c = (uint)!bVar1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

