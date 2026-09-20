// chatUserNameForViewController: @ 010f0888

/* Function Stack Size: 0x18 bytes */

ID WCRefinePageLockGuard::chatUserNameForViewController_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  ulong local_70 [4];
  cfstringStruct *local_50;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    pcVar1 = &cf_BaseMsgContentViewController;
    _NSClassFromString();
    local_40 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar1),
       (uVar2 & 1) == 0)) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      local_48 = 0;
      pcVar1 = &cf_getChatContact;
      _NSSelectorFromString();
      uVar2 = local_30;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar1);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (local_48 == 0) {
        local_18 = 0;
        local_34 = 1;
      }
      else {
        local_70[0] = 0;
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_70[0];
        local_70[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizedKey__026aeb88,local_70[0]);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = IVar4;
        _objc_storeStrong(local_70,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

