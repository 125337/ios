// FUN_01639cc4 @ 01639cc4

void FUN_01639cc4(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_18;
  
  local_18 = &cf_WCRSuperFloatBallWindow;
  _NSClassFromString();
  if (local_18 == (cfstringStruct *)0x0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar1 = &cf_existingInstance;
    _NSSelectorFromString(&cf_existingInstance);
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      pcVar1 = &cf_existingInstance;
      _NSSelectorFromString(&cf_existingInstance);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

