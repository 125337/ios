// FUN_003c24cc @ 003c24cc

byte FUN_003c24cc(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  long lVar5;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    pcVar2 = "ChatBoxUtil";
    _objc_getClass();
    pcVar3 = &cf_isChatBox_;
    _NSSelectorFromString();
    if (((pcVar2 == (char *)0x0) ||
        (pcVar4 = pcVar2,
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3),
        ((ulong)pcVar4 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3,local_20), ((ulong)pcVar2 & 1) == 0)) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)lVar5 & 1;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

