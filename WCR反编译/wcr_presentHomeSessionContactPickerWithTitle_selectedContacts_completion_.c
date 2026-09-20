// wcr_presentHomeSessionContactPickerWithTitle:selectedContacts:completion: @ 01c161e8

/* Function Stack Size: 0x28 bytes */

void WCRefineMomentsViewController::
     wcr_presentHomeSessionContactPickerWithTitle_selectedContacts_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_178;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined8 local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
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
  pcVar3 = &cf_SessionSelectController;
  _NSClassFromString();
  _objc_alloc_init();
  local_50 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_54 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_reportTag);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x5ea0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_maxSelectionCount);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_01c167b8(local_50,&cf_m_delegate,0);
    pcVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_m_commonSearchScene);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_useNewSearchBar);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_m_bShowMultiSelectRightBtn);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_m_bKeepCurViewAfterSelect);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_m_onlyChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar3 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    FUN_01c167b8(pcVar3,&cf_m_bIgnoreChatRoom);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_01c167b8(local_50,&cf_customTitle,local_38);
    pcVar3 = local_50;
    uVar5 = local_48;
    _objc_retainBlock();
    _objc_setAssociatedObject(pcVar3,"completionBlock",uVar5,3);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_178 = &cf_MMUINavigationController;
    _NSClassFromString();
    if (local_178 == (cfstringStruct *)0x0) {
      local_178 = (cfstringStruct *)PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_60 = local_178;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar2 = local_28;
    pcVar3 = local_50;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01c168bc;
    local_88 = &DAT_025839b0;
    local_68 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_38;
    local_80 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_40;
    local_78 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_presentViewController_animated_c_0269d2b0,local_178,1,&local_a0);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_68,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

