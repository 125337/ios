// handleAddCustomPageNameInput: @ 01ccd858

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardActionConfigViewController::handleAddCustomPageNameInput_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [11];
  undefined1 local_d5;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  undefined *local_70;
  char *local_68;
  char *local_60;
  undefined *local_58;
  ID local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  FUN_01cca0ec();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ubTN_Nzz);
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingAddPageName__026c3628,local_40);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_controllerSuggestionsForPageName_026c3640,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    local_50 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,
               &cf_eQubc6RhV__T);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_50;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
      puVar3 = local_58;
      IVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendString__0269ccb0);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    local_60 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      puVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_alertControllerWithTitle_message_0269dc00,&cf_eQubc6RhV);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      IVar2 = local_50;
      puVar6 = local_70;
      puVar3 = PTR___NSConcreteStackBlock_02578660;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01cce100;
      local_80 = &DAT_02583438;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_addTextFieldWithConfigurationHan_026ac828,&local_98);
      _objc_initWeak(auStack_a0,local_28);
      puVar7 = local_70;
      puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_c8 = puVar3;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_01cce1e0;
      local_b0 = &DAT_02583468;
      _objc_copyWeak(auStack_a8,auStack_a0);
      local_d5 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,&local_c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addAction__0269dc10);
      local_d5 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_70;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_108 = PTR___NSConcreteStackBlock_02578660;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = FUN_01cce268;
      local_f0 = &DAT_0258a148;
      _objc_copyWeak(auStack_e0,auStack_a0);
      puVar7 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nx_,0,&local_108);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_70,1,0);
      _objc_storeStrong(&local_e8);
      _objc_destroyWeak(auStack_e0);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      local_44 = 0;
    }
    else {
      _objc_alloc();
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_initWithTitle_message__0269d260,&cf_eQubc6RhV);
      local_68 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
      IVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      if (IVar2 != 0) {
        pcVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTextFieldDefaultText__0269fd98);
        pcVar4 = local_68;
        puVar3 = PTR_s_setTextFieldDefaultText__0269fd98;
        if (((ulong)pcVar5 & 1) != 0) {
          IVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_performSelector_withObject__026ca7c0,puVar3);
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_cancelAddCustomPageControllerInp_026c3648);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                 PTR_s_handleAddCustomPageControllerInp_026c3650);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
      local_44 = 1;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

