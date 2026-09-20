// presentSessionSelectPickerFromViewController:title:selectedUsernames:completion: @ 01ac2174

/* Function Stack Size: 0x30 bytes */

void WCRefineGroupManagementViewController::
     presentSessionSelectPickerFromViewController_title_selectedUsernames_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long local_238;
  char *local_228;
  long local_218;
  cfstringStruct *local_1d0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  char *local_a0;
  cfstringStruct *local_98;
  long local_90;
  long local_88;
  char *local_80;
  char *local_78;
  undefined *local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  undefined8 local_50;
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
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  pcVar3 = "SessionSelectController";
  _objc_getClass();
  local_58 = pcVar3;
  if ((local_38 == 0) || (pcVar3 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_5c = 1;
  }
  else {
    _objc_alloc_init();
    local_68 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NbhVRYS1Y_);
      local_5c = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_reportTag);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1000);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_maxSelectionCount);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_01a9c680(local_68,&cf_m_delegate,0);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_commonSearchScene);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_useNewSearchBar);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_bShowMultiSelectRightBtn);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_bKeepCurViewAfterSelect);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_bMultiSelect);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_bAllowsMultiSelectEmpty);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_onlyChatRoom);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_bIgnoreChatRoom);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_showsChatroomMembers);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01a9c680(pcVar3,&cf_m_showsChatroomFriendsOnly);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      pcVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_1d0 = &cf_bT_N_;
      }
      else {
        local_1d0 = local_40;
      }
      FUN_01a9c680(pcVar3,&cf_customTitle,local_1d0);
      pcVar1 = local_68;
      _WCRefineSessionSelectCompletionAssociationKey();
      uVar6 = local_50;
      _objc_retainBlock();
      _objc_setAssociatedObject(pcVar1,pcVar3);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      pcVar3 = local_68;
      uVar6 = local_50;
      _objc_retainBlock();
      _objc_setAssociatedObject(pcVar3,"completionBlock",uVar6,3);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if (local_48 == 0) {
        local_218 = *(long *)PTR____NSArray0___02578280;
      }
      else {
        local_218 = local_48;
      }
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,local_218)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      _objc_setAssociatedObject(local_68,"selectedMomentsContacts",puVar4,1);
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_beginMultiSelect_026af6f8);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_beginMultiSelect_026af6f8);
      }
      local_228 = "MMUINavigationController";
      _objc_getClass();
      if (local_228 == (char *)0x0) {
        local_228 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_78 = local_228;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      lVar7 = local_48;
      local_80 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
      local_238 = lVar7;
      if (lVar7 == 0) {
        local_238 = *(long *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_238;
      (*(code *)PTR__objc_release_02578630)(lVar7);
      lVar2 = local_38;
      pcVar1 = local_68;
      pcVar3 = local_80;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01ac2b4c;
      local_a8 = &DAT_025839b0;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar5 = local_40;
      local_a0 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      lVar7 = local_88;
      local_98 = pcVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar2,PTR_s_presentViewController_animated_c_0269d2b0,pcVar3,1,&local_c0);
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_70,0);
      local_5c = 0;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

