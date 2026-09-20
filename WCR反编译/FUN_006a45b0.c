// FUN_006a45b0 @ 006a45b0

void FUN_006a45b0(ulong param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_78 [5];
  cfstringStruct *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  bool local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  FUN_006a51a8();
  if ((param_1 & 1) != 0) {
    pcVar2 = &cf_CAppViewControllerManager;
    _NSClassFromString();
    local_18 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getAppViewControllerManager_026a3848)
    ;
    local_29 = false;
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_80 = (cfstringStruct *)0x0;
    }
    else {
      local_80 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getAppViewControllerManager_026a3848);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_80;
    }
    local_29 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_20 = local_80;
    if ((local_29 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getContactsViewController_026a6600)
    ;
    local_41 = false;
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_90 = (cfstringStruct *)0x0;
    }
    else {
      local_90 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getContactsViewController_026a6600);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_90;
    }
    local_41 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_90;
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    local_50 = (cfstringStruct *)0x0;
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_valueForKey__0269d128,&cf_m_contactsDataLogic);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_50;
    local_50 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_50;
    if (local_50 != (cfstringStruct *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_setValue_forKey__0269d300,puVar4,&cf_m_bNeedReload);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_006a542c(local_50,PTR_s_processOnModifyContact_026a6608);
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_reloadContacts_026a6610);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_reloadContacts_026a6610);
      }
    }
    FUN_006a542c(local_38,PTR_s_onContactsDataChange_026a1fd8);
    pcVar2 = &cf_FTSContactDataProvider;
    _NSClassFromString();
    FUN_006a4e04();
    _objc_retainAutoreleasedReturnValue();
    local_78[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_onContactListUpdate__026a6618);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_onContactListUpdate__026a6618,1);
    }
    _objc_storeStrong(local_78);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_20,0);
  }
  return;
}

