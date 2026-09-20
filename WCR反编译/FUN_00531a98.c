// FUN_00531a98 @ 00531a98

void FUN_00531a98(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_f8;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  int local_48;
  long local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar2 = local_30;
  FUN_0052b368();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_00530928();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    local_50 = (char *)0x0;
    pcVar4 = "MMContext";
    _objc_getClass();
    local_58 = pcVar4;
    if ((pcVar4 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_50;
      local_50 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_50 == (char *)0x0) {
      pcVar4 = "MMServiceCenter";
      _objc_getClass();
      local_60 = pcVar4;
      if ((pcVar4 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar4 & 1) != 0)) {
        pcVar5 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_50;
        local_50 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
    }
    pcVar4 = "CContactMgr";
    _objc_getClass();
    bVar1 = false;
    local_68 = pcVar4;
    if (((local_50 == (char *)0x0) || (pcVar4 == (char *)0x0)) ||
       (pcVar4 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar4 & 1) == 0)) {
      local_f8 = (char *)0x0;
    }
    else {
      local_f8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_68);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_78 = local_f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_f8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_70 == (char *)0x0) ||
       (pcVar4 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar4 & 1) == 0)) {
      local_48 = 0;
    }
    else {
      pcVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = 1;
      local_28 = pcVar4;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_50,0);
    if (local_48 == 0) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

