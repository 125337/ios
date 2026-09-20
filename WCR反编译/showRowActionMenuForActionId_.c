// showRowActionMenuForActionId: @ 01e10150

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatButtonConfigViewController::showRowActionMenuForActionId_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  long local_f0;
  undefined1 auStack_e8 [15];
  undefined1 local_d9;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined1 auStack_b0 [15];
  undefined1 local_a1;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  char *local_68 [3];
  char *local_50;
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    _objc_initWeak(auStack_48,local_28);
    pcVar1 = "WCUIActionSheet";
    _objc_getClass();
    local_50 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf_d_O,0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_01e10998;
      local_88 = &DAT_0258a148;
      local_70 = puVar3;
      _objc_copyWeak(auStack_78,auStack_48);
      lVar5 = local_38;
      local_a1 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__TT,0,&local_a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
      local_a1 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_70;
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_01e10a20;
      local_c0 = &DAT_0258a148;
      _objc_copyWeak(auStack_b0,auStack_48);
      local_d9 = 1;
      lVar5 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_bcVh,0,&local_d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
      local_d9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_70;
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_110 = PTR___NSConcreteStackBlock_02578660;
      local_108 = 0xc2000000;
      local_104 = 0;
      local_100 = FUN_01e10aa8;
      local_f8 = &DAT_0258a148;
      _objc_copyWeak(auStack_e8,auStack_48);
      lVar5 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Rd,2,&local_110);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_70;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_70,1,0);
      _objc_storeStrong(&local_f0);
      _objc_destroyWeak(auStack_e8);
      _objc_storeStrong(&local_b8,0);
      _objc_destroyWeak(auStack_b0);
      _objc_storeStrong(&local_80,0);
      _objc_destroyWeak(auStack_78);
      _objc_storeStrong(&local_70,0);
      local_3c = 0;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,&cf_d_O);
      local_68[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf__TT,local_28,
                 PTR_s_menuRenamePending_026c5cf8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_addBtnTitle_target_sel__0269d278,&cf_bcVh,local_28,
                 PTR_s_menuPickIconPending_026c5d00);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_28,
                 PTR_s_menuDeletePending_026c5d08);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingActionId__026c5d10,local_38);
      pcVar1 = local_68[0];
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_3c = 1;
      _objc_storeStrong(local_68,0);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

