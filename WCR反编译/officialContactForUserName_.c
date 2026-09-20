// officialContactForUserName: @ 01ec7fb8

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListSettingsViewController::officialContactForUserName_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    pcVar3 = "CContactMgr";
    local_40 = pcVar2;
    _objc_getClass();
    local_48 = pcVar3;
    if (((local_40 == (char *)0x0) || (pcVar3 == (char *)0x0)) ||
       (pcVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (char *)0x0;
      local_34 = 1;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar2 & 1) == 0)) {
        local_18 = (char *)0x0;
        local_34 = 1;
      }
      else {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        if ((pcVar2 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
           ((ulong)pcVar2 & 1) == 0)) {
          local_18 = (char *)0x0;
        }
        else {
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getContactByName__0269d178,local_30);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
        }
        local_34 = 1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

