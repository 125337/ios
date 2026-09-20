// FUN_0150d4c8 @ 0150d4c8

void FUN_0150d4c8(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_18;
  
  local_18 = "LSBundleProxy";
  _objc_getClass();
  pcVar1 = "bundleProxyForCurrentProcess";
  _sel_registerName();
  if ((local_18 == (char *)0x0) ||
     (pcVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

