// pasteAPIKey @ 017e2b70

/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::pasteAPIKey(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  ID IVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  char *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  uint local_34;
  char *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingProvider_026b5450);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "WCUIAlertView";
  local_28 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___APIKey);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_initWithTitle_message__0269d260,puVar4,&cf___NjR4_g_4v_fbc_NSQ_ceQFh_40);
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  bVar1 = local_30 != (char *)0x0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingField__026b5468,&cf_apiKey);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x200);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelInput_026b5470);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_v_bS_jW,local_18,
               PTR_s_confirmInput_026b5478);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_initWeak(auStack_40,local_18);
    dVar5 = _dispatch_time(0,200000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_017e2e80;
    local_58 = &DAT_02579c60;
    _objc_copyWeak(auStack_48,auStack_40);
    pcVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = pcVar2;
    _dispatch_after(dVar5,puVar4,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_50,0);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

