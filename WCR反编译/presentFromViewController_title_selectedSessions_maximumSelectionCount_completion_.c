// presentFromViewController:title:selectedSessions:maximumSelectionCount:completion: @ 014db4e8

/* Function Stack Size: 0x38 bytes */

void WCRefineSessionPicker::
     presentFromViewController_title_selectedSessions_maximumSelectionCount_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6,
               ID param_7,undefined4 param_8)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2d0;
  ulong local_1f8;
  long local_1c0;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  long local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  cfstringStruct *local_80;
  long local_78;
  long local_70;
  ID local_68;
  unsigned_long_long local_60;
  long local_58;
  unsigned_long_long local_50;
  long local_48;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_58 = 0;
  local_50 = param_6;
  _objc_storeStrong(&local_58,param_7);
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = local_38;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_014dc0c4;
    local_90 = &DAT_02585fa0;
    local_68 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_40;
    local_88 = lVar7;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_48;
    local_80 = pcVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar7 = local_58;
    local_78 = lVar2;
    local_60 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar7;
    _dispatch_async(puVar5,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_ac = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
  }
  else if (local_38 == 0) {
    local_ac = 1;
  }
  else {
    pcVar4 = &cf_SessionSelectController;
    _NSClassFromString();
    local_b8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_ac = 1;
    }
    else {
      _objc_alloc_init();
      local_c0 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NbhVRYS1Y_);
        local_ac = 1;
      }
      else {
        if (local_48 == 0) {
          local_1c0 = *(long *)PTR____NSArray0___02578280;
        }
        else {
          local_1c0 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        pcVar4 = local_c0;
        local_c8 = local_1c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_reportTag);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        local_d0 = 1;
        local_d8 = local_50;
        if (local_50 < 2) {
          local_1f8 = 1;
        }
        else {
          local_1f8 = local_50;
        }
        local_e0 = local_1f8;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_1f8);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_maxSelectionCount);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        FUN_014dc11c(local_c0,&cf_m_delegate,0);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_commonSearchScene);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_useNewSearchBar);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_bShowMultiSelectRightBtn);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_bKeepCurViewAfterSelect);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_bMultiSelect);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_bAllowsMultiSelectEmpty);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_onlyChatRoom);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_bIgnoreChatRoom);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_showsChatroomMembers);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        FUN_014dc11c(pcVar4,&cf_m_showsChatroomFriendsOnly);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        pcVar4 = local_c0;
        pcVar6 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_2d0 = &cf_bO;
        }
        else {
          local_2d0 = local_40;
        }
        FUN_014dc11c(pcVar4,&cf_customTitle,local_2d0);
        pcVar4 = local_c0;
        if (local_58 != 0) {
          lVar7 = local_58;
          _objc_retainBlock();
          _objc_setAssociatedObject(pcVar4,"completionBlock",lVar7,3);
          (*(code *)PTR__objc_release_02578630)(lVar7);
        }
        pcVar4 = local_c0;
        lVar7 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
        _objc_setAssociatedObject(pcVar4,"selectedMomentsContacts",lVar7,1);
        (*(code *)PTR__objc_release_02578630)(lVar7);
        pcVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_view_026cabd8);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        pcVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_beginMultiSelect_026af6f8);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_beginMultiSelect_026af6f8);
        }
        pcVar4 = &cf_MMUINavigationController;
        _NSClassFromString();
        local_e8 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          local_e8 = pcVar4;
        }
        pcVar4 = local_e8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_f0 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elR_bub);
          local_ac = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
          pcVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_2f8 = &cf_bO;
          }
          else {
            local_2f8 = local_40;
          }
          (*(code *)PTR__objc_retain_02578638)();
          lVar2 = local_38;
          pcVar1 = local_c0;
          pcVar6 = local_f0;
          local_f8 = local_2f8;
          local_130 = PTR___NSConcreteStackBlock_02578660;
          local_128 = 0xc2000000;
          local_124 = 0;
          local_120 = FUN_014dc260;
          local_118 = &DAT_025839b0;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar4 = local_f8;
          local_110 = pcVar1;
          (*(code *)PTR__objc_retain_02578638)();
          lVar7 = local_c8;
          local_108 = pcVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_100 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar2,PTR_s_presentViewController_animated_c_0269d2b0,pcVar6,1,&local_130);
          _objc_storeStrong(&local_100);
          _objc_storeStrong(&local_108,0);
          _objc_storeStrong(&local_110,0);
          _objc_storeStrong(&local_f8,0);
          local_ac = 0;
        }
        _objc_storeStrong(&local_f0);
        _objc_storeStrong(&local_c8,0);
      }
      _objc_storeStrong(&local_c0,0);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

