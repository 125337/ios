// wcr_resolveReferMsgForAtAll:group: @ 009dad08

/* Function Stack Size: 0x20 bytes */

ID WCRefineAnonymousAtHelper::wcr_resolveReferMsgForAtAll_group_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  undefined4 local_3c;
  undefined8 local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_isValidReferMsg__026ab060,local_30);
  IVar2 = local_30;
  if ((IVar1 & 1) == 0) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_currentReplyingMessage_026ab078);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    if (IVar2 == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcr_lastRealMsgInGroup__026ab080,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar2;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar2;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

