// confirmCreateSeparatorFolderFromAlert @ 01c696b0

/* Function Stack Size: 0x10 bytes */

void WCRefineNavigationAvatarViewController::confirmCreateSeparatorFolderFromAlert
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,0);
    IVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    local_30 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      local_34 = 1;
    }
    else {
      IVar1 = local_18;
      _objc_getAssociatedObject(local_18,"separatorBasePath");
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar1;
      if (IVar1 == 0) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getSeparatorBasePath_026c24b8);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_40;
        local_40 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      _objc_setAssociatedObject(local_18,"separatorBasePath",0,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_createSeparatorFolder_basePath__026c2590,local_30,local_40);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

