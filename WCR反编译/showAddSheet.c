// showAddSheet @ 01d18560

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineQuickReplyListViewController::showAddSheet(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [11];
  undefined1 local_a5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_WCActionSheet;
  local_48 = param_2;
  local_40 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_WCActionSheetItem;
  local_50 = pcVar1;
  _NSClassFromString();
  local_58 = pcVar2;
  if ((local_50 == (cfstringStruct *)0x0) || (pcVar2 == (cfstringStruct *)0x0)) {
    puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_mR_IN_wcVY,0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    _objc_initWeak(auStack_70,local_40);
    puVar6 = local_68;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01d18b6c;
    local_80 = &DAT_02583468;
    _objc_copyWeak(auStack_78,auStack_70);
    local_a5 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_e_gmo_,0,&local_98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
    local_a5 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar6 = local_68;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_01d18be8;
    local_b8 = &DAT_02583468;
    _objc_copyWeak(auStack_b0,auStack_70);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__J,0,&local_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_68;
    puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_68,1,0);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_68,0);
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

