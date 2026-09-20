// FUN_010b0ff4 @ 010b0ff4

void FUN_010b0ff4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *local_30;
  undefined4 local_24;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_24 = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_010b0934();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar3 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getContactByName__0269d178,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

