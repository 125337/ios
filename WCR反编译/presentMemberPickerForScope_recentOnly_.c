// presentMemberPickerForScope:recentOnly: @ 01ab09f0

/* Function Stack Size: 0x1c bytes */

void WCRGroupCreateViewController::presentMemberPickerForScope_recentOnly_
               (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ID IVar5;
  ID IVar6;
  char *local_280;
  ID local_268;
  ID local_1f8;
  cfstringStruct *local_1f0;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  char *local_e8;
  ID local_e0;
  undefined1 auStack_d8 [8];
  char *local_d0;
  char *local_c8;
  undefined *local_c0 [3];
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  undefined1 auStack_80 [8];
  undefined **local_78;
  undefined1 auStack_70 [15];
  byte local_61;
  ID local_60;
  ID local_58;
  char *local_50;
  char *local_48;
  byte local_39;
  unsigned_long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_39 = (byte)param_4;
  pcVar2 = "SessionSelectController";
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_getClass();
  local_48 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  else {
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_reportTag);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_maxSelectionCount);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_01a9c680(local_50,&cf_m_delegate,0);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_commonSearchScene);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_useNewSearchBar);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_bShowMultiSelectRightBtn);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_bKeepCurViewAfterSelect);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_bMultiSelect);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_bAllowsMultiSelectEmpty);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,local_38 == 2);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_onlyChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,local_38 == 1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_bIgnoreChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,(local_39 ^ 1) & 1)
    ;
    _objc_retainAutoreleasedReturnValue();
    FUN_01a9c680(pcVar2,&cf_m_recentForwardHidden);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_39 & 1) == 0) {
      local_1f0 = &cf_mR_J;
      if (local_38 != 2) {
        local_1f0 = &cf_mRT_N;
      }
    }
    else {
      local_1f0 = &::cf___;
    }
    FUN_01a9c680(local_50,&cf_customTitle,local_1f0);
    local_61 = 0;
    bVar1 = local_38 != 0x1f;
    if (bVar1) {
      local_1f8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_allowedUsernamesForScope__026bdd40,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_1f8;
    }
    else {
      local_1f8 = 0;
    }
    local_61 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_1f8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    _objc_initWeak(auStack_70,local_28);
    ppuVar4 = &local_a8;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01ab13a0;
    local_90 = &DAT_025887c8;
    _objc_copyWeak(auStack_80,auStack_70);
    IVar5 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = IVar5;
    _objc_retainBlock();
    pcVar2 = local_50;
    local_78 = ppuVar4;
    _objc_retainBlock();
    _objc_setAssociatedObject(pcVar2,"completionBlock",ppuVar4,3);
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedUsernames_026a6628);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_268 = IVar6;
    if (IVar6 == 0) {
      local_268 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithArray__0269eab8,local_268);
    _objc_retainAutoreleasedReturnValue();
    local_c0[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_setAssociatedObject(local_50,"selectedMomentsContacts",local_c0[0],1);
    local_280 = "MMUINavigationController";
    _objc_getClass();
    if (local_280 == (char *)0x0) {
      local_280 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_c8 = local_280;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_280,PTR_s_initWithRootViewController__0269d2a0,local_50);
    IVar6 = local_28;
    pcVar2 = local_50;
    local_108 = PTR___NSConcreteStackBlock_02578660;
    local_100 = 0xc2000000;
    local_fc = 0;
    local_f8 = FUN_01ab192c;
    local_f0 = &DAT_0257c978;
    local_d0 = local_280;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_58;
    local_e8 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = IVar5;
    _objc_copyWeak(auStack_d8,auStack_70);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_presentViewController_animated_c_0269d2b0,local_280,1,&local_108);
    _objc_destroyWeak(auStack_d8);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(local_c0,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_88,0);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  return;
}

