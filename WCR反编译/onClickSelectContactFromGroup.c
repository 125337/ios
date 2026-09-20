// onClickSelectContactFromGroup @ 01a9b87c

/* Function Stack Size: 0x10 bytes */

void WCRGroupContactPickerBridge::onClickSelectContactFromGroup(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  FUN_01a9c404();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_38 == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    FUN_01a9c574();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    local_38 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1,&cf_useNewSearchBarInChatRoom);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1,&cf_useNewSearchControllerAndBottomBar);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1,&cf_m_bShowSelectFromGroup);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1,&cf_m_onlyImportChatRoom);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1,&cf_useNewSearchBar);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_38;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xf);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a9c680(IVar1,&cf_m_uiGroupScene);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((IVar3 & 1) == 0) {
    _NSSelectorFromString();
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar2 & 1) == 0) {
      _NSSelectorFromString();
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if ((IVar2 & 1) == 0) {
        pcVar5 = &cf_handleSelectContactFromGroup;
        _NSSelectorFromString();
        IVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar5);
        if ((IVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar5);
        }
      }
      else {
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(IVar1,&DAT_028e4510,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject();
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
    }
    else {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(IVar1,&DAT_028e4510,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_picker_026ab880);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

