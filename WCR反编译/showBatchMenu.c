// showBatchMenu @ 01e0d6e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatButtonConfigViewController::showBatchMenu(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [15];
  undefined1 local_b1;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *local_80 [4];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = &cf_WCActionSheet;
  _NSClassFromString();
  pcVar2 = &cf_WCActionSheetItem;
  local_50 = pcVar1;
  _NSClassFromString();
  local_58 = pcVar2;
  if ((local_50 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
    puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,0);
    _objc_retainAutoreleasedReturnValue();
    local_80[0] = puVar5;
    _objc_initWeak(auStack_88,local_40);
    puVar6 = local_80[0];
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01e0dde8;
    local_98 = &DAT_02583468;
    _objc_copyWeak(auStack_90,auStack_88);
    local_b1 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_hQmR,0,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
    local_b1 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar6 = local_80[0];
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_01e0de6c;
    local_c8 = &DAT_02583468;
    _objc_copyWeak(auStack_c0,auStack_88);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_hQRd,2,&local_e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_80[0];
    puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_80[0],1,0);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(local_80,0);
  }
  else {
    pcVar1 = local_50;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = local_58;
    local_60 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar3 = local_58;
    local_38 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_setValue_forKey__0269d300,puVar5,&cf_buttonTitleList);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_60;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,&DAT_00016b49);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar5,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar1 = local_60;
    puVar5 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar2 & 1) != 0) {
      IVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    _objc_storeStrong(&local_60,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

