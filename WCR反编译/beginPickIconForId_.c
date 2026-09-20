// beginPickIconForId: @ 01e13608

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatButtonConfigViewController::beginPickIconForId_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined1 auStack_138 [15];
  undefined1 local_129;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  undefined1 auStack_108 [15];
  undefined1 local_f9;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [15];
  undefined1 local_c9;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [11];
  undefined1 local_9d;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_44;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actionWithId__026c5d38,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  if (IVar1 == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingActionId__026c5d10,local_38);
    pcVar2 = "WCUIActionSheet";
    _objc_getClass();
    local_50 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf_O9eVh,0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      _objc_initWeak(auStack_68,local_28);
      puVar4 = local_60;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_01e14028;
      local_78 = &DAT_02583468;
      _objc_copyWeak(auStack_70,auStack_68);
      local_9d = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_NvQb,0,&local_90);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      local_9d = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_60;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_01e140a4;
      local_b0 = &DAT_02583468;
      _objc_copyWeak(auStack_a8,auStack_68);
      local_c9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_NeNb,0,&local_c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      local_c9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_60;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_01e14120;
      local_e0 = &DAT_02583468;
      _objc_copyWeak(auStack_d8,auStack_68);
      local_f9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__g0WvU_,0,&local_f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      local_f9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_60;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_128 = PTR___NSConcreteStackBlock_02578660;
      local_120 = 0xc2000000;
      local_11c = 0;
      local_118 = FUN_01e1419c;
      local_110 = &DAT_02583468;
      _objc_copyWeak(auStack_108,auStack_68);
      local_129 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__O_u_OVh,0,&local_128);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      local_129 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_60;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_158 = PTR___NSConcreteStackBlock_02578660;
      local_150 = 0xc2000000;
      local_14c = 0;
      local_148 = FUN_01e14218;
      local_140 = &DAT_02583468;
      _objc_copyWeak(auStack_138,auStack_68);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_b_Y,0,&local_158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_60;
      puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_60,1,0);
      _objc_destroyWeak(auStack_138);
      _objc_destroyWeak(auStack_108);
      _objc_destroyWeak(auStack_d8);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_storeStrong(&local_60,0);
      local_44 = 0;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NvQb,local_28,
                 PTR_s_pickIconFromAlbum_026c5d40);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NeNb,local_28,
                 PTR_s_pickIconFromFiles_026c5d48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf__g0WvU_,local_28,
                 PTR_s_useLocalIcon_026c5d50);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf__O_u_OVh,local_28,
                 PTR_s_pickWeChatIcon_026c5d58);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_28,
                 PTR_s_restoreDefaultIcon_026b7048);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar2 = local_58;
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_44 = 1;
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

