// wcr_currentReplyingMessage @ 009da684

/* Function Stack Size: 0x10 bytes */

ID WCRefineAnonymousAtHelper::wcr_currentReplyingMessage(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID local_60;
  ID local_58;
  ID local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentChatViewController_026ab018);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getReplyingMessage_0269d370);
  if ((param_1 & 1) != 0) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getReplyingMessage_0269d370);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_inputToolView_026ab058);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_respondsToSelector__026ca818,PTR_s_replyingMessage_0269d378);
  if ((IVar3 & 1) != 0) {
    bVar1 = local_28 == 0;
    if (bVar1) {
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_replyingMessage_0269d378);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_58;
    }
    else {
      local_58 = local_28;
    }
    _objc_storeStrong(&local_28,local_58);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  if ((local_28 == 0) &&
     (IVar3 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_replyingMessageWrap_0269d380),
     (IVar3 & 1) != 0)) {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_replyingMessageWrap_0269d380);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_isValidReferMsg__026ab060,local_28);
  if ((IVar3 & 1) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return local_60;
}

