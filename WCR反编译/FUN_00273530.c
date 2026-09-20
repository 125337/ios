// FUN_00273530 @ 00273530

void FUN_00273530(void)

{
  char *pcVar1;
  char *local_18;
  
  local_18 = "MMContext";
  _objc_getClass();
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  if (((ulong)pcVar1 & 1) == 0) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

