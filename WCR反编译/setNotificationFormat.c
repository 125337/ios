// setNotificationFormat @ 01d27a10

/* Function Stack Size: 0x10 bytes */

void WCRefineRedEnvelopViewController::setNotificationFormat(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  char *local_50;
  cfstringStruct *local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  char *local_38;
  ID local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_redEnvelopNotificationFormat_026a6a78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_normalizedNotificationFormat__026c4310);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_3c = 1;
  }
  else {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopNotificationType_026a6a88);
    local_3d = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
    local_48 = &cf__ec_SMO__;
    if (!(bool)local_3d) {
      local_48 = &cf__ec_SMO__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    pcVar3 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,1000);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_30)
    ;
    _objc_initWeak(auStack_58,local_18);
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01d27df0;
    local_70 = &DAT_0257c948;
    _objc_copyWeak(auStack_60,auStack_58);
    puVar4 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setInputCompletionBlock__026b40b8,&local_88);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setInputKey__026c2540,&cf_notificationFormat);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_alertConfirm__026c2548);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

