// wcr_currentGroupUserName @ 009d8e74

/* Function Stack Size: 0x10 bytes */

ID WCRefineAnonymousAtHelper::wcr_currentGroupUserName(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentChatViewController_026ab018);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_groupUserNameFromContact__026ab020,local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

