// editResizeFixedScale @ 01947ef4

/* Function Stack Size: 0x10 bytes */

void WCRefineEmoticonFunctionViewController::editResizeFixedScale(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCUIAlertView";
  local_28 = puVar1;
  _objc_getClass();
  local_30 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_34 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleResizeFixedInput__026b98c0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar2 = local_40;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emoticonResizeFixedScale_026ac3c8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf___1f);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

