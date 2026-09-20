// FUN_0059d694 @ 0059d694

byte FUN_0059d694(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  byte local_4c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (uVar1 = local_20, FUN_0059d590(), (uVar1 & 1) != 0)) {
    local_11 = 0;
  }
  else {
    pcVar2 = "AppNoteMessageCellView";
    _objc_getClass();
    local_4c = 0;
    if (pcVar2 != (char *)0x0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar2);
      local_4c = (byte)uVar1;
    }
    local_11 = local_4c & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

