// openGroupChatForSessionUser:navigationController: @ 01b2f7ec

/* Function Stack Size: 0x20 bytes */

bool WCRefineKeywordAlertHistoryViewController::openGroupChatForSessionUser_navigationController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_c0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  undefined *local_88;
  char *local_80;
  byte local_71;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  ulong local_50;
  ulong local_48;
  int local_3c;
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
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (local_38 == 0)) {
    local_11 = 0;
    local_3c = 1;
    goto LAB_01b2fd08;
  }
  FUN_01b2fd38();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  if (uVar2 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_getContactByName__0269d178,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    FUN_01b2fe8c();
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_popupLocateUsesHalfScreen_026beea0);
      if ((IVar3 & 1) != 0) {
        pcVar4 = "QuickReplyMsgMgr";
        _objc_getClass();
        local_c0 = "MMServiceCenter";
        local_58 = pcVar4;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_71 = 0;
        local_60 = local_c0;
        if ((local_58 == (char *)0x0) || (local_c0 == (char *)0x0)) {
          local_c0 = (char *)0x0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_getService__0269d170,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          local_70 = local_c0;
        }
        pcVar4 = local_c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_c0;
        if ((local_71 & 1) != 0) {
          pcVar4 = local_70;
          (*(code *)PTR__objc_release_02578630)();
        }
        FUN_01b3000c();
        _objc_retainAutoreleasedReturnValue();
        local_88 = PTR_s_showPageSheetSession_fromViewCon_026a2508;
        local_80 = pcVar4;
        if (((local_68 == (char *)0x0) || (pcVar4 == (char *)0x0)) ||
           (pcVar4 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_68,PTR_s_respondsToSelector__026ca818,
                      PTR_s_showPageSheetSession_fromViewCon_026a2508), ((ulong)pcVar4 & 1) == 0)) {
          local_3c = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,local_88,local_50,local_80);
          local_11 = 1;
          local_3c = 1;
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
        if (local_3c != 0) goto LAB_01b2fce8;
      }
      pcVar4 = "MMServiceCenter";
      _objc_getClass();
      local_90 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        local_11 = 0;
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          local_11 = 0;
          local_3c = 1;
        }
        else {
          pcVar4 = "MMMsgLogicManager";
          _objc_getClass();
          local_a0 = pcVar4;
          if (pcVar4 == (char *)0x0) {
            local_11 = 0;
            local_3c = 1;
          }
          else {
            pcVar5 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_getService__0269d170,pcVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
            local_a8 = pcVar5;
            if ((pcVar5 == (char *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)
                          (pcVar5,PTR_s_respondsToSelector__026ca818,
                           PTR_s_PushOtherBaseMsgControllerByCont_0269d640),
               ((ulong)pcVar5 & 1) == 0)) {
              local_11 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_a8,puVar1,local_50,local_38,1);
              local_11 = 1;
            }
            local_3c = 1;
            _objc_storeStrong(&local_a8,0);
          }
        }
        _objc_storeStrong(&local_98,0);
      }
    }
LAB_01b2fce8:
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_01b2fd08:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

