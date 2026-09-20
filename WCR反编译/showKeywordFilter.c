// showKeywordFilter @ 01d251c8

/* Function Stack Size: 0x10 bytes */

void WCRefineRedEnvelopViewController::showKeywordFilter(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *local_a0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  char *local_48;
  char *local_40;
  undefined *local_38;
  undefined *local_30;
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
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_redEnvelopKeywordFilter_026a6b30);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_a0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_a0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_componentsJoinedByString__0269d140,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCUIAlertView";
  local_38 = puVar1;
  _objc_getClass();
  local_40 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,500);
      if ((local_38 != (undefined *)0x0) &&
         (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
         puVar1 != (undefined *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setTextFieldDefaultText__0269fd98,local_38);
      }
      _objc_initWeak(auStack_50,local_18);
      puVar1 = local_28;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_01d25598;
      local_68 = &DAT_0257c948;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar1;
      _objc_copyWeak(auStack_58,auStack_50);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setInputCompletionBlock__026b40b8,&local_80);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputKey__026c2540,&cf_keywordFilter);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_alertCancel_026b2910);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_alertConfirm__026c2548);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
      _objc_destroyWeak(auStack_58);
      _objc_storeStrong(&local_60,0);
      _objc_destroyWeak(auStack_50);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

