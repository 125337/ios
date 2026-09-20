// FUN_0059d590 @ 0059d590

byte FUN_0059d590(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  byte local_4c;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = "AppRecordMessageCellView";
    _objc_getClass();
    local_4c = 0;
    if (pcVar1 != (char *)0x0) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
      local_4c = (byte)lVar2;
    }
    local_11 = local_4c & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

