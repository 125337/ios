// beginPickIcon: @ 01b7b3fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineLongPressMenuViewController::beginPickIcon_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [11];
  undefined1 local_95;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingItemID__026bfbd0,local_38);
    pcVar2 = "WCUIActionSheet";
    _objc_getClass();
    local_48 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf_O9eUSVh,0);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar4;
      _objc_initWeak(auStack_60,local_28);
      puVar5 = local_58;
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_01b7b98c;
      local_70 = &DAT_02583468;
      _objc_copyWeak(auStack_68,auStack_60);
      local_95 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_bVh,0,&local_88);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
      local_95 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = local_58;
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01b7ba08;
      local_a8 = &DAT_02583468;
      _objc_copyWeak(auStack_a0,auStack_60);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_b_Y,0,&local_c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_58;
      puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1,0);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_storeStrong(&local_58,0);
      local_3c = 0;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bVh,local_28,
                 PTR_s_presentIconSelector_026b7040);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_28,
                 PTR_s_restoreDefaultIcon_026b7048);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar2 = local_50;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_3c = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

