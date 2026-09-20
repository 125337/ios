// FUN_003b90d0 @ 003b90d0

void FUN_003b90d0(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_98;
  char *local_60;
  byte local_51;
  char *local_50;
  byte local_41;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined4 local_24;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_003612b8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_30 == (char *)0x0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_003b3da8();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 0;
    local_51 = 0;
    local_98 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_98 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = local_98;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_98;
    }
    local_51 = pcVar1 == (char *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_98;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if ((local_30 == (char *)0x0) &&
       (pcVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       pcVar1 != (char *)0x0)) {
      pcVar2 = "CContactMgr";
      _objc_getClass(pcVar1);
      FUN_00392f1c();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getContactByName__0269d178,local_38);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_30;
        local_30 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(&local_60,0);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_24 = 1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

