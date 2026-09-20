// FUN_0050fe54 @ 0050fe54

void FUN_0050fe54(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong local_88;
  byte local_79;
  cfstringStruct *local_78;
  undefined4 local_6c;
  cfstringStruct *local_68;
  char *local_60;
  char *local_58;
  byte local_49;
  char *local_48 [3];
  char *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  pcVar1 = "WCFacadeDynamicConfig";
  _objc_getClass();
  local_30 = pcVar1;
  FUN_0050ed60();
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_48[0] = pcVar1;
  if ((local_30 != (char *)0x0) && (pcVar1 != (char *)0x0)) {
    local_58 = (char *)0x0;
    pcVar1 = "MMContext";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58;
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,
               PTR_s_EnhanceInteraction_enableShowMsg_026a47c0);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_EnhanceInteraction_enableShowMsg_026a47c0);
      local_49 = (byte)pcVar1;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  pcVar3 = &cf_WCAllCommentListViewController;
  if ((local_49 & 1) == 0) {
    pcVar3 = &cf_WCCommentListViewController;
  }
  _NSClassFromString();
  local_68 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    local_6c = 1;
  }
  else {
    _objc_alloc_init();
    local_79 = 0;
    pcVar1 = local_48[0];
    local_78 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_getUnReadMessageCount_026a47c8);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_getUnReadMessageCount_026a47c8);
      local_79 = (int)pcVar1 != 0;
    }
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setBUnreadOnly__026a47d0);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBUnreadOnly__026a47d0,local_79 & 1);
    }
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,
               PTR_s_setShouldShowMessagesByRelevance_026a47d8);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setShouldShowMessagesByRelevance_026a47d8,local_49 & 1);
    }
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_PushViewController_animated__0269cd40)
    ;
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_pushViewController_animated__0269d590,local_78,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_PushViewController_animated__0269cd40,local_78,1);
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_78,0);
    local_6c = 0;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

