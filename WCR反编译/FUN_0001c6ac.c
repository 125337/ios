// FUN_0001c6ac @ 0001c6ac

void FUN_0001c6ac(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_48;
  char *local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_38 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "CContactMgr";
    local_40 = pcVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar2 & 1) == 0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

