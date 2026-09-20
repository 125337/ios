// FUN_008fafdc @ 008fafdc

void FUN_008fafdc(undefined8 param_1)

{
  char *pcVar1;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_008f3348();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getContactByName__0269d178,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

