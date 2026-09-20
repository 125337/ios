// chatIdentifierForViewController: @ 0091f70c

/* Function Stack Size: 0x18 bytes */

ID WCNavigationMonitor::chatIdentifierForViewController_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  ulong local_48;
  ulong local_40;
  int local_34;
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
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_isEqualToString__0269ccc8,&cf_BaseMsgContentViewController);
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
      local_34 = 1;
    }
    else {
      local_48 = 0;
      pcVar2 = &cf_GetContact;
      _NSSelectorFromString();
      uVar1 = local_30;
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar1 & 1) == 0) {
        pcVar2 = &cf_getChatContact;
        _NSSelectorFromString();
        uVar1 = local_30;
        local_68 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) != 0) {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_performSelector__026ca7b8,local_68);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_48;
          local_48 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
      }
      else {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_performSelector__026ca7b8,local_50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if (local_48 == 0) {
        local_18 = 0;
        local_34 = 1;
      }
      else {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar1;
        if ((uVar1 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0), uVar3 = local_70,
           uVar1 == 0)) {
          uVar4 = 0;
          local_34 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar3;
          uVar4 = 1;
          local_34 = 1;
        }
        _objc_storeStrong(uVar4,&local_70,0);
      }
      _objc_storeStrong(&local_48,0);
      if (local_34 == 0) {
        local_18 = 0;
        local_34 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

