// addCustomPageAction @ 01ccaaa8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardActionConfigViewController::addCustomPageAction(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [11];
  undefined1 local_85;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingAddPageName__026c3628,0);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_mRubl,&cf_eQubTbcNT);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_addTextFieldWithConfigurationHan_026ac828,
               &PTR___NSConcreteGlobalBlock_0258c060);
    _objc_initWeak(auStack_50,local_28);
    puVar1 = local_48;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01ccafd8;
    local_60 = &DAT_02583468;
    _objc_copyWeak(auStack_58,auStack_50);
    local_85 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,&local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
    local_85 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_48;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_01ccb060;
    local_a0 = &DAT_0258a148;
    _objc_copyWeak(auStack_90,auStack_50);
    puVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&::cf_N,0,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
    _objc_storeStrong(&local_98);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x1e);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
               PTR_s_cancelAddCustomPageNameInput_026c3630);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&::cf_N,local_28,
               PTR_s_handleAddCustomPageNameInput__026c3638);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

