// openChatLiftSessionPicker: @ 01b4e588

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::openChatLiftSessionPicker_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  ID local_c8;
  ID local_c0;
  cfstringStruct *local_b8 [3];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined **local_78;
  undefined1 auStack_70 [8];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  ID local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar5 = &cf_SessionSelectController;
  _NSClassFromString();
  local_40 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_44 = 1;
  }
  else {
    _objc_alloc_init();
    local_50 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NbhVRYS1Y_);
      local_44 = 1;
    }
    else {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatLiftSelectedSessions_026bf5d0);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_reportTag);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1000);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_maxSelectionCount);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      FUN_01b4b548(local_50,&cf_m_delegate,0);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_m_commonSearchScene);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_useNewSearchBar);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_m_bShowMultiSelectRightBtn);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_m_bKeepCurViewAfterSelect);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_m_onlyChatRoom);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_m_showsChatroomMembers);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = local_50;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01b4b548(pcVar5,&cf_m_showsChatroomFriendsOnly);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      pcVar5 = &cf_MMUINavigationController;
      _NSClassFromString();
      local_60 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        local_60 = pcVar5;
      }
      pcVar5 = local_60;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elR_bub);
        local_44 = 1;
      }
      else {
        _objc_initWeak(auStack_70,local_28);
        ppuVar8 = &local_a0;
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_01b4eda0;
        local_88 = &DAT_0257a7d0;
        _objc_copyWeak(auStack_80,auStack_70);
        _objc_retainBlock();
        pcVar5 = local_50;
        local_78 = ppuVar8;
        _objc_retainBlock();
        _objc_setAssociatedObject(pcVar5,"completionBlock",ppuVar8,3);
        (*(code *)PTR__objc_release_02578630)(ppuVar8);
        puVar7 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_b8[0] = &cf_bc_ub;
        if (puVar9 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          local_b8[0] = &cf_bcdub;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        IVar3 = local_28;
        pcVar2 = local_50;
        pcVar1 = local_68;
        local_f8 = PTR___NSConcreteStackBlock_02578660;
        local_f0 = 0xc2000000;
        local_ec = 0;
        local_e8 = FUN_01b4f238;
        local_e0 = &DAT_0257d718;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar5 = local_b8[0];
        local_d8 = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        IVar4 = local_28;
        local_d0 = pcVar5;
        (*(code *)PTR__objc_retain_02578638)();
        IVar6 = local_58;
        local_c8 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_presentViewController_animated_c_0269d2b0,pcVar1,1,&local_f8);
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_d8,0);
        _objc_storeStrong(local_b8,0);
        _objc_storeStrong(&local_78,0);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_70);
        local_44 = 0;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

