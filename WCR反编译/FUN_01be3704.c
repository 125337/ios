// FUN_01be3704 @ 01be3704

void FUN_01be3704(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_80;
  char *local_70;
  bool local_61;
  char *local_60;
  bool local_51;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  pcVar2 = "CContactMgr";
  local_28 = pcVar1;
  _objc_getClass();
  local_30 = pcVar2;
  if (((local_28 == (char *)0x0) || (pcVar2 == (char *)0x0)) ||
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
    local_51 = ((ulong)pcVar1 & 1) == 0;
    if (local_51) {
      local_70 = (char *)0x0;
    }
    else {
      local_70 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_70;
    }
    local_51 = !local_51;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_70;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    local_61 = ((ulong)pcVar1 & 1) == 0;
    if (local_61) {
      local_80 = (char *)0x0;
    }
    else {
      local_80 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_80;
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

