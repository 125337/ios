// FUN_0027b0fc @ 0027b0fc

void FUN_0027b0fc(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = "WCFinderFeedMediaWrap";
    _objc_getClass();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_mediaWrapWith_scene__026a1658);
    if (((ulong)pcVar2 & 1) == 0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_mediaWrapWith_scene__026a1658,local_20,0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

