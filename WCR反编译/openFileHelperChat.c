// openFileHelperChat @ 01baeeb8

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageRepositoryViewController::openFileHelperChat(ID param_1,SEL param_2)

{
  undefined *puVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  ID IVar5;
  char *local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar3 = "MMServiceCenter";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_cancelCompositeCapture_026b2e08);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "CContactMgr";
    local_30 = pcVar3;
    _objc_getClass();
    pcVar3 = local_30;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,pcVar4
              );
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getContactByName__0269d178,
               &cf_filehelper);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_cancelCompositeCapture_026b2e08);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_4c = 1;
    }
    else {
      pcVar3 = "MMMsgLogicManager";
      _objc_getClass();
      pcVar4 = local_30;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                 pcVar3);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      local_60 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = IVar5 != 0;
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      pcVar4 = local_48;
      pcVar3 = local_60;
      puVar1 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
      if (bVar2) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar1,pcVar4,IVar5,1);
        (*(code *)PTR__objc_release_02578630)(IVar5);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_cancelCompositeCapture_026b2e08
                  );
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      }
      _objc_storeStrong(&local_60,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

