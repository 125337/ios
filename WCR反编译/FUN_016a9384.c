// FUN_016a9384 @ 016a9384

byte FUN_016a9384(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = &cf_SystemMessageCellView;
    _NSClassFromString();
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_11 = 0;
    }
    else {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
      local_11 = (byte)lVar2 & 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

