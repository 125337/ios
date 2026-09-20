// locateMessageWrap:inVisibleChatOf:preferredLocalID:navigationController: @ 01b2e874

/* Function Stack Size: 0x30 bytes */

bool WCRefineKeywordAlertHistoryViewController::
     locateMessageWrap_inVisibleChatOf_preferredLocalID_navigationController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long_long local_b8;
  undefined *local_b0;
  ID local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  undefined *local_48;
  long_long local_40;
  long local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_48 = (undefined *)0x0;
  local_40 = param_5;
  _objc_storeStrong(&local_48,param_6);
  if (((local_30 == 0) ||
      (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar1 == 0)) || (local_48 == (undefined *)0x0)) {
    local_11 = 0;
    local_4c = 1;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_01b2eca4();
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_58 == (undefined *)0x0) {
      puVar3 = local_48;
      FUN_01b2eca4();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (local_58 == (undefined *)0x0) {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_visibleViewController_0269d460);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 0;
      local_b0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_b0 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_b0;
      }
      local_61 = puVar2 == (undefined *)0x0;
      _objc_storeStrong(&local_58,local_b0);
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_chatSessionUserNameFromViewContr_026bee88,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    if ((IVar4 == 0) ||
       (IVar4 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_38),
       (IVar4 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      if ((long)local_40 < 1) {
        local_b8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiMesLocalID_0269d238);
        local_b8 = local_b8 & 0xffffffff;
      }
      else {
        local_b8 = local_40;
      }
      puVar3 = local_58;
      FUN_01b2f1f4(local_58,local_38,local_b8,local_30);
      puVar2 = PTR_s_locateToMsg__0269d608;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_locateToMsg__0269d608);
        if (((ulong)puVar3 & 1) == 0) {
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar2,local_30);
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    local_4c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

