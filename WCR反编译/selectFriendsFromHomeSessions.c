// selectFriendsFromHomeSessions @ 0185de28

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::selectFriendsFromHomeSessions(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ID IVar5;
  ID IVar6;
  cfstringStruct *local_1a8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  ID local_a0;
  ID local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined1 local_7d;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar2 = &cf_SessionSelectController;
  local_30 = param_2;
  local_28 = param_1;
  _NSClassFromString();
  _objc_alloc_init();
  local_38 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_3c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_reportTag);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_maxSelectionCount);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_0185e4dc(local_38,&cf_m_delegate,0);
    pcVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_m_commonSearchScene);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_useNewSearchBar);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_m_bShowMultiSelectRightBtn);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_m_bKeepCurViewAfterSelect);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_m_onlyChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185e4dc(pcVar2,&cf_m_bIgnoreChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_0185e4dc(local_38,&cf_customTitle,&cf_Nub_YS);
    _objc_initWeak(auStack_48,local_28);
    pcVar2 = local_38;
    ppuVar4 = &local_70;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_0185e5e0;
    local_58 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_50,auStack_48);
    local_7d = 1;
    _objc_retainBlock();
    _objc_setAssociatedObject(pcVar2,"completionBlock",ppuVar4,3);
    local_7d = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    local_1a8 = &cf_MMUINavigationController;
    _NSClassFromString();
    if (local_1a8 == (cfstringStruct *)0x0) {
      local_1a8 = (cfstringStruct *)PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_88 = local_1a8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_initWithRootViewController__0269d2a0,local_38);
    IVar5 = local_28;
    local_90 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    FUN_0185e698();
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar6 = local_28;
    pcVar1 = local_38;
    pcVar2 = local_90;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_0185e9c0;
    local_b0 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_98;
    local_a8 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_presentViewController_animated_c_0269d2b0,pcVar2,1,&local_c8);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

