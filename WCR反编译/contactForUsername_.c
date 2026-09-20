// contactForUsername: @ 01c52fd4

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateSpecialUsersViewController::contactForUsername_
             (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *local_70;
  bool local_61;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_44;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  pcVar2 = "CContactMgr";
  local_38 = pcVar1;
  _objc_getClass();
  local_40 = pcVar2;
  if ((local_38 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    local_18 = (char *)0x0;
    local_44 = 1;
  }
  else {
    local_70 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_61 = local_70 == (char *)0x0;
    local_50 = local_70;
    if (local_61) {
      local_70 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getService__0269d170,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_70;
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_70;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_58 == (char *)0x0) ||
       (pcVar1 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getContactByName__0269d178,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

