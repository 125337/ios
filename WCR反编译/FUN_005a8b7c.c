// FUN_005a8b7c @ 005a8b7c

void FUN_005a8b7c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *local_38;
  undefined4 local_30;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_30 = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_005a8d2c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_getContactByName__0269d178;
    local_38 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar3 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,puVar1,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

