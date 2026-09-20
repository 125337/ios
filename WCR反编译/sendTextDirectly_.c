// sendTextDirectly: @ 0095316c

/* Function Stack Size: 0x18 bytes */

bool WCRClipboardHistoryPanelController::sendTextDirectly_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID local_68;
  ID local_50;
  ID local_40;
  ID local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatName_026aa868);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = local_20;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resolveChatName_026aa870);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_68;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatName_026aa868);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setChatName__026aa878,local_38);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_30,
               local_38);
    local_11 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

