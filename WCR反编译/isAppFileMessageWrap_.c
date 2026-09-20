// isAppFileMessageWrap: @ 00f3fb44

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isAppFileMessageWrap_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = false;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_IsFileMsg_0269da48);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_IsFileMsg_0269da48),
       (uVar2 & 1) == 0)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_m_uiAppMsgInnerType);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      iVar1 = (int)uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_11 = false;
      if ((((int)uVar3 == 0x31) && (local_11 = true, iVar1 != 6)) &&
         (local_11 = true, iVar1 != 0x4a)) {
        local_11 = iVar1 == 8;
      }
    }
    else {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

