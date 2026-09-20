// settingReplyContent @ 01d22d68

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineRedEnvelopViewController::settingReplyContent(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_110;
  cfstringStruct *local_f8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 *local_a0;
  byte local_98;
  undefined1 auStack_90 [8];
  char *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  char *local_58;
  byte local_49;
  ID local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_redEnvelopAutoReplyCountMode_026a6ac0);
  IVar3 = local_28;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_currentAutoReplyContentForMode__026c42b0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_49 = local_40 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  pcVar4 = "WCUIAlertView";
  local_48 = IVar3;
  _objc_getClass();
  local_58 = pcVar4;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_f8 = &cf__wcrr;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_f8;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      _objc_storeStrong(&local_68,&cf__zyy);
    }
    local_79 = 0;
    bVar1 = (local_49 & 1) == 0;
    if (bVar1) {
      local_110 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_eQRVYveW_Q_);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_110;
    }
    else {
      local_110 = &cf_eQmo___SkL;
    }
    local_79 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_110;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    pcVar4 = local_58;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showTextFieldWithMaxLen__0269e5e0,200);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setTextFieldDefaultText__0269fd98,local_48);
      _objc_initWeak(auStack_90,local_28);
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_01d232f4;
      local_b0 = &DAT_0258c1c0;
      local_98 = local_49 & 1;
      _objc_copyWeak(auStack_a8,auStack_90);
      local_a0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setInputCompletionBlock__026b40b8,&local_c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,local_88);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setInputKey__026c2540,&cf_replyContent);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_alertCancel_026b2910);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                 PTR_s_alertConfirm__026c2548);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_show_0269d280);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_90);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

