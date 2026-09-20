// contactFromMsgViewController: @ 00fc1efc

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::contactFromMsgViewController_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  char *local_40;
  uint local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    pcVar1 = "BaseMsgContentViewController";
    _objc_getClass();
    local_40 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) == 0)) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      pcVar3 = &cf_GetContact;
      _NSSelectorFromString();
      uVar2 = local_30;
      local_48 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar2 & 1) == 0) {
        pcVar3 = &cf_getChatContact;
        _NSSelectorFromString();
        uVar2 = local_30;
        local_50 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
        if ((uVar2 & 1) == 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_contact);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar2;
          if (uVar2 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar2;
          }
          local_34 = (uint)(uVar2 != 0);
          _objc_storeStrong(&local_58,0);
          if (local_34 == 0) {
            local_18 = 0;
            local_34 = 1;
          }
        }
        else {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_34 = 1;
          local_18 = uVar2;
        }
      }
      else {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = uVar2;
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

