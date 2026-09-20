// openChatWithUser: @ 01d28848

/* Function Stack Size: 0x18 bytes */

void WCRefineRedEnvelopViewController::openChatWithUser_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  ID IVar5;
  char *local_68;
  char *local_60;
  undefined4 local_54;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = "MMServiceCenter";
  _objc_getClass();
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "CContactMgr";
  local_38 = pcVar3;
  _objc_getClass();
  pcVar3 = local_38;
  local_40 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getContactByName__0269d178,
             local_28);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_b0RO);
    local_54 = 1;
  }
  else {
    pcVar3 = "MMMsgLogicManager";
    _objc_getClass();
    pcVar4 = local_38;
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,pcVar3
              );
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    local_68 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar5 != 0;
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    pcVar4 = local_50;
    pcVar3 = local_68;
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
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    }
    _objc_storeStrong(&local_68,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

