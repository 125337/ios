// startRenameForActionID: @ 01cc9728

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardActionConfigViewController::startRenameForActionID_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined *local_f0;
  long local_e8;
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
  ID local_70;
  long local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  ID local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setPendingRenameActionID__026c3600,local_38);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayTitleForActionID__026c3608,local_38)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "WCUIAlertView";
    local_48 = IVar2;
    _objc_getClass();
    local_50 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf__TTR,&cf_eQevRTyYuzzRb_Y);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_48;
      puVar7 = PTR___NSConcreteStackBlock_02578660;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01cc9e50;
      local_80 = &DAT_0258c030;
      local_60 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      IVar1 = local_28;
      local_78 = IVar2;
      (*(code *)PTR__objc_retain_02578638)();
      lVar6 = local_38;
      local_70 = IVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_addTextFieldWithConfigurationHan_026ac828,&local_98);
      _objc_initWeak(auStack_a0,local_28);
      puVar5 = local_60;
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_c8 = puVar7;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_01cc9f14;
      local_b0 = &DAT_02583468;
      _objc_copyWeak(auStack_a8,auStack_a0);
      local_d5 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,&local_c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
      local_d5 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_60;
      puVar7 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_110 = PTR___NSConcreteStackBlock_02578660;
      local_108 = 0xc2000000;
      local_104 = 0;
      local_100 = FUN_01cc9f9c;
      local_f8 = &DAT_0258b950;
      _objc_copyWeak(auStack_e0,auStack_a0);
      puVar5 = local_60;
      (*(code *)PTR__objc_retain_02578638)();
      lVar6 = local_38;
      local_f0 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nx_,0,&local_110);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_60,1,0);
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_f0,0);
      _objc_destroyWeak(auStack_e0);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
      local_3c = 0;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x1e);
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (IVar2 != 0) {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTextFieldDefaultText__0269fd98);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_performSelector_withObject__026ca7c0,
                     PTR_s_setTextFieldDefaultText__0269fd98,local_48);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_cancelRenameInput_026c2b60);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                 PTR_s_confirmRenameInput__026c2b68);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
      local_3c = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

