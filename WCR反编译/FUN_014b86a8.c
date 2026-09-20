// FUN_014b86a8 @ 014b86a8

void FUN_014b86a8(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_2c = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_014b9e80();
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
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

