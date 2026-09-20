// FUN_01b02e60 @ 01b02e60

void FUN_01b02e60(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_30;
  undefined4 local_24;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (char *)0x0;
    local_24 = 1;
  }
  else {
    pcVar2 = "MMNewSessionMgr";
    _objc_getClass();
    FUN_01b02fe8();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_GetSessionByUserName_;
    local_30 = pcVar2;
    _NSSelectorFromString();
    if ((local_30 == (char *)0x0) ||
       (pcVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar3,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

