// FUN_005dbdd4 @ 005dbdd4

byte FUN_005dbdd4(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isSenderFromMsgWrap__0269d558,local_20);
      local_11 = (byte)pcVar1 & 1;
      goto LAB_005dbec0;
    }
  }
  local_11 = 0;
LAB_005dbec0:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

