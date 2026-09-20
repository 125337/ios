// presentChatListPickerForGroup: @ 01ac0110

/* Function Stack Size: 0x18 bytes */

void WCRGroupListViewController::presentChatListPickerForGroup_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  ID IVar3;
  bool bVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  ID IVar10;
  cfstringStruct *local_368;
  cfstringStruct *local_308;
  char *local_2d8;
  cfstringStruct *local_190;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  char *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  byte local_110;
  byte local_10a;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  char *local_f8;
  char *local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  char *local_a8;
  char *local_a0;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined1 auStack_68 [15];
  byte local_59;
  cfstringStruct *local_58;
  undefined1 auStack_40 [8];
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scope_0269ea90);
  puVar1 = (undefined1 *)((long)&pcVar5[-1].field3_0x18 + 6);
  if (puVar1 == (undefined1 *)0x0) {
    _objc_initWeak(auStack_40,local_28);
    IVar3 = local_28;
    puVar8 = PTR_WCRefineChatRoomPicker_026cef60;
    local_59 = 0;
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar9 == (cfstringStruct *)0x0) {
      local_190 = &cf_b_J;
    }
    else {
      local_190 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_190;
    }
    pcVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_members_0269ea98);
    _objc_retainAutoreleasedReturnValue();
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01ac0e40;
    local_78 = &DAT_025887c8;
    _objc_copyWeak(auStack_68,auStack_40);
    pcVar9 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = pcVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_presentFromViewController_title__026ab898,IVar3,local_190,pcVar6,
               &local_90);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    local_94 = 1;
    _objc_storeStrong(&local_70,0);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_40);
  }
  else {
    pcVar7 = "SessionSelectController";
    _objc_getClass(puVar1);
    local_a0 = pcVar7;
    if ((pcVar7 == (char *)0x0) || (local_38 == (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_94 = 1;
    }
    else {
      _objc_alloc_init();
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_a8 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_reportTag);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1000);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_maxSelectionCount);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      FUN_01a9c680(local_a8,&cf_m_delegate,0);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_m_commonSearchScene);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_useNewSearchBar);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_m_bShowMultiSelectRightBtn);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_m_bKeepCurViewAfterSelect);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      pcVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scope_0269ea90);
      bVar4 = false;
      if (((uint)pcVar5 >> 1 & 1) != 0) {
        pcVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scope_0269ea90);
        bVar4 = pcVar5 == (cfstringStruct *)0x2;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithInt__0269d810,bVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_m_onlyChatRoom);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_m_showsChatroomMembers);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_m_showsChatroomFriendsOnly);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_initWeak(auStack_b0,local_28);
      puVar8 = PTR_WCRGroupSessionPickerBridge_026cf320;
      _objc_alloc_init();
      local_b8 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_setPresenter__0269fdb0,local_28);
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_01ac0f10;
      local_d0 = &DAT_025887c8;
      _objc_copyWeak(auStack_c0,auStack_b0);
      pcVar5 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setCompletion__0269fdc8,&local_e8);
      FUN_01a9c680(local_a8,&cf_m_delegate,local_b8);
      _objc_setAssociatedObject(local_a8,&DAT_028e4511,local_b8,1);
      local_2d8 = "MMUINavigationController";
      _objc_getClass();
      if (local_2d8 == (char *)0x0) {
        local_2d8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_f0 = local_2d8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2d8,PTR_s_initWithRootViewController__0269d2a0,local_a8);
      pcVar5 = local_38;
      local_f8 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_members_0269ea98);
      _objc_retainAutoreleasedReturnValue();
      local_308 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_308 = *(cfstringStruct **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_100 = local_308;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar7 = local_a8;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar7,&cf_m_bMultiSelect);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_view_026cabd8);
      _objc_unsafeClaimAutoreleasedReturnValue(pcVar7);
      pcVar7 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_view_026cabd8);
      _objc_unsafeClaimAutoreleasedReturnValue(pcVar7);
      pcVar7 = local_a8;
      local_109 = 0;
      pcVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar9 == (cfstringStruct *)0x0) {
        local_368 = &cf_bbXT;
      }
      else {
        local_368 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        local_109 = 1;
        local_108 = local_368;
      }
      FUN_01a9c680(pcVar7,&cf_title,local_368);
      if ((local_109 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      IVar10 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_configureMultiSelect_preselect__026bdf20,local_a8,local_100);
      IVar3 = local_28;
      pcVar2 = local_a8;
      pcVar7 = local_f8;
      local_10a = (byte)IVar10;
      local_150 = PTR___NSConcreteStackBlock_02578660;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_01ac0fe0;
      local_138 = &DAT_02589d38;
      local_110 = local_10a & 1;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar5 = local_38;
      local_130 = pcVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_128 = pcVar5;
      _objc_copyWeak(auStack_118,auStack_b0);
      pcVar5 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_presentViewController_animated_c_0269d2b0,pcVar7,1,&local_150);
      _objc_storeStrong(&local_120);
      _objc_destroyWeak(auStack_118);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_c8,0);
      _objc_destroyWeak(auStack_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_destroyWeak(auStack_b0);
      _objc_storeStrong(&local_a8,0);
      local_94 = 0;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

