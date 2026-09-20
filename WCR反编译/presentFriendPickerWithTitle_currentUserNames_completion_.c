// presentFriendPickerWithTitle:currentUserNames:completion: @ 01de471c

/* Function Stack Size: 0x28 bytes */

void WCRefineSmallSignalSettingsViewController::
     presentFriendPickerWithTitle_currentUserNames_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong local_138;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  undefined8 local_f0;
  ID local_e8;
  ulong local_e0 [3];
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [8];
  undefined **local_98;
  undefined1 auStack_90 [8];
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  bool local_71;
  ulong local_70;
  ulong local_68;
  cfstringStruct *local_60;
  uint local_54;
  cfstringStruct *local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar7 = &cf_SessionSelectController;
  _NSClassFromString();
  local_50 = pcVar7;
  if (pcVar7 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_54 = 1;
  }
  else {
    _objc_alloc_init();
    uVar9 = local_40;
    local_60 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__YSbhVRYS1Y_);
      local_54 = 1;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar8);
      local_71 = false;
      bVar1 = (uVar9 & 1) == 0;
      if (bVar1) {
        local_138 = *(ulong *)PTR____NSArray0___02578280;
      }
      else {
        local_138 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
        local_70 = local_138;
      }
      local_71 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_138;
      if ((local_71 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_reportTag);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,200);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_maxSelectionCount);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      FUN_01de2b48(local_60,&cf_m_delegate,0);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_m_commonSearchScene);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_useNewSearchBar);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_m_bShowMultiSelectRightBtn);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_m_bKeepCurViewAfterSelect);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_m_onlyChatRoom);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_m_showsChatroomMembers);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = local_60;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01de2b48(pcVar7,&cf_m_showsChatroomFriendsOnly);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      pcVar7 = &cf_MMUINavigationController;
      _NSClassFromString();
      local_80 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        pcVar7 = (cfstringStruct *)PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        local_80 = pcVar7;
      }
      pcVar7 = local_80;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = pcVar7;
      if (pcVar7 != (cfstringStruct *)0x0) {
        _objc_initWeak(auStack_90,local_28);
        ppuVar10 = &local_c8;
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_01de4fc8;
        local_b0 = &DAT_0258c5a0;
        _objc_copyWeak(auStack_a0,auStack_90);
        uVar4 = local_48;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = uVar4;
        _objc_retainBlock();
        pcVar2 = local_60;
        local_98 = ppuVar10;
        _objc_retainBlock();
        _objc_setAssociatedObject(pcVar2,"completionBlock",ppuVar10,3);
        (*(code *)PTR__objc_release_02578630)(ppuVar10);
        IVar5 = local_28;
        pcVar3 = local_60;
        pcVar2 = local_88;
        local_118 = PTR___NSConcreteStackBlock_02578660;
        local_110 = 0xc2000000;
        local_10c = 0;
        local_108 = FUN_01de5454;
        local_100 = &DAT_0257d718;
        (*(code *)PTR__objc_retain_02578638)();
        uVar4 = local_38;
        local_f8 = pcVar3;
        (*(code *)PTR__objc_retain_02578638)();
        IVar6 = local_28;
        local_f0 = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        uVar9 = local_68;
        local_e8 = IVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_e0[0] = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_presentViewController_animated_c_0269d2b0,pcVar2,1,&local_118);
        _objc_storeStrong(local_e0);
        _objc_storeStrong(&local_e8,0);
        _objc_storeStrong(&local_f0,0);
        _objc_storeStrong(&local_f8,0);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_a8,0);
        _objc_destroyWeak(auStack_a0);
        _objc_destroyWeak(auStack_90);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elR_bub);
      }
      local_54 = (uint)(pcVar7 == (cfstringStruct *)0x0);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

