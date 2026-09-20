// wcr_currentGroupContact @ 009d9090

/* Function Stack Size: 0x10 bytes */

ID WCRefineAnonymousAtHelper::wcr_currentGroupContact(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentChatViewController_026ab018);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_wcr_groupUserNameFromContact__026ab020,local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_18 = local_38;
  if (IVar4 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

