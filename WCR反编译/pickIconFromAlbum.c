// pickIconFromAlbum @ 01e14974

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatButtonConfigViewController::pickIconFromAlbum(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
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
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIActionSheet";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_NvQb,0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    _objc_initWeak(auStack_50,local_28);
    puVar4 = local_48;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01e14e98;
    local_60 = &DAT_02583468;
    _objc_copyWeak(auStack_58,auStack_50);
    local_85 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_eVh,0,&local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    local_85 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_48;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01e14f1c;
    local_98 = &DAT_02583468;
    _objc_copyWeak(auStack_90,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_YVh,0,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_48;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_eVh,local_28,
               PTR_s_pickAlbumLight_026b3268);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_YVh,local_28,
               PTR_s_pickAlbumDark_026b3270);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar1 = local_40;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

