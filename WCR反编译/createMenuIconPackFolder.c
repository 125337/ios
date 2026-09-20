// createMenuIconPackFolder @ 01e262c0

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::createMenuIconPackFolder(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined *local_48;
  char *local_40;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_e_cVheN9Y,&cf_eQeN9YTyv_,1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addTextFieldWithConfigurationHan_026ac828,
               &PTR___NSConcreteGlobalBlock_0258c6d8);
    _objc_initWeak(auStack_50,local_28);
    puVar3 = local_48;
    puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_01e26774;
    local_68 = &DAT_0258a148;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar3;
    _objc_copyWeak(auStack_58,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_R_,0,&local_80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_60);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x1e);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setTextFieldDefaultText__0269fd98,&::cf___);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_,local_28,
               PTR_s_confirmCreateMenuIconPackFolder__026c61f0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    _objc_setAssociatedObject(local_28,PTR_s_createMenuIconPackFolder_026c61e8,local_40,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

