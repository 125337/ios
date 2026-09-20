// FUN_00541844 @ 00541844

byte FUN_00541844(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = "WCTimelineActionSheet";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        goto LAB_00541930;
      }
    }
    local_11 = 0;
  }
LAB_00541930:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

