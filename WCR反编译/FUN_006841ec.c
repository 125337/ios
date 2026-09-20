// FUN_006841ec @ 006841ec

void FUN_006841ec(void)

{
  char *pcVar1;
  char *local_20;
  char *local_18;
  
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_006842e0();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

