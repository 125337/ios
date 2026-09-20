// FUN_00052260 @ 00052260

byte FUN_00052260(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  if (((local_20 == 0) || (pcVar1 == (char *)0x0)) ||
     (pcVar2 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
     ((ulong)pcVar2 & 1) == 0)) {
    local_11 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isSenderFromMsgWrap__0269d558,local_20);
    local_11 = ((byte)pcVar1 ^ 1) & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

