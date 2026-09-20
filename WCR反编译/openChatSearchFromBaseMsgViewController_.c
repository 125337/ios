// openChatSearchFromBaseMsgViewController: @ 01532278

/* Function Stack Size: 0x18 bytes */

bool WCRefineTopBarProfileCardPresenter::openChatSearchFromBaseMsgViewController_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  pcVar2 = &cf_BaseMsgContentViewController;
  _NSClassFromString(&cf_BaseMsgContentViewController);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  puVar1 = PTR_s_getChatContactForSpecialMsg_026b03f0;
  if ((uVar3 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,
               PTR_s_getChatContactForSpecialMsg_026b03f0);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40;
      local_40 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if (local_40 == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    if (local_40 == 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    if (local_40 == 0) {
      local_11 = 0;
    }
    else {
      uVar3 = local_40;
      FUN_015324bc(local_40,0,local_30);
      local_11 = (byte)uVar3 & 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

