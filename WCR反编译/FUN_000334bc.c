// FUN_000334bc @ 000334bc

void FUN_000334bc(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *local_38;
  undefined4 local_30;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_000323ec();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

