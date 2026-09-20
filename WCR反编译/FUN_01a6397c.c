// FUN_01a6397c @ 01a6397c

void FUN_01a6397c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  long local_30;
  uint local_24;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  lVar2 = local_20;
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_24 = 1;
    goto LAB_01a63c54;
  }
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_UTF8String_026a2e68);
  _objc_getClass();
  local_30 = lVar2;
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_24 = 1;
    goto LAB_01a63c54;
  }
  pcVar3 = "MMContext";
  _objc_getClass();
  local_38 = pcVar3;
  if ((pcVar3 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar3 & 1) == 0)) {
LAB_01a63b2c:
      local_24 = 0;
    }
    else {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar3;
      if (pcVar3 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar3;
      }
      local_24 = (uint)(pcVar3 != (char *)0x0);
      _objc_storeStrong(&local_48,0);
      if (local_24 == 0) goto LAB_01a63b2c;
    }
    _objc_storeStrong(&local_40,0);
    if (local_24 != 0) goto LAB_01a63c54;
  }
  pcVar3 = "MMServiceCenter";
  _objc_getClass();
  local_50 = pcVar3;
  if ((pcVar3 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar3 & 1) == 0)) {
      local_24 = 0;
    }
    else {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getService__0269d170,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = pcVar3;
    }
    _objc_storeStrong(&local_58,0);
    if (local_24 != 0) goto LAB_01a63c54;
  }
  local_18 = (char *)0x0;
  local_24 = 1;
LAB_01a63c54:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

