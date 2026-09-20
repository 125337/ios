// offsetSliderValueButtonTapped: @ 019f0570

/* Function Stack Size: 0x18 bytes */

void WCRefineFontConvertViewController::offsetSliderValueButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  ID IVar5;
  undefined *puVar6;
  char *local_60;
  uint local_54;
  char *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  local_30 = lVar2 + -2000;
  local_38 = 0;
  local_40 = 0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_offsetLimitsForTag_min_max__026bb2a8,local_30,&local_38,&local_40);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_V);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "WCUIAlertView";
  local_48 = puVar3;
  _objc_getClass();
  bVar1 = pcVar4 != (char *)0x0;
  local_50 = pcVar4;
  if (bVar1) {
    _objc_alloc();
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_offsetTitleForTag__026bb2e8,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_initWithTitle_message__0269d260,IVar5,local_48);
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    pcVar4 = local_60;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_offsetValueForTag__026bb2b0,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar4 = local_60;
    puVar3 = PTR_s_offsetSliderValueButtonTapped__026bb2d0;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(pcVar4,puVar3,puVar6,1);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmOffsetSliderInput__026bb2f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    _objc_storeStrong(&local_60,0);
  }
  local_54 = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

