// FUN_01606b74 @ 01606b74

byte FUN_01606b74(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  byte local_6c;
  ulong local_58 [4];
  cfstringStruct *local_38;
  char *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = "ChatBoxUtil";
    _objc_getClass();
    pcVar3 = &cf_isChatBox_;
    local_30 = pcVar2;
    _NSSelectorFromString();
    local_38 = pcVar3;
    if (local_30 != (char *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38,local_20);
        local_11 = (byte)pcVar2 & 1;
        local_24 = 1;
        goto LAB_01606d50;
      }
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_chatbox);
    local_6c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_hasPrefix__0269d320,&cf_wcrefine_groupentry_);
      local_6c = (byte)uVar1;
    }
    local_11 = local_6c & 1;
    local_24 = 1;
    _objc_storeStrong(local_58,0);
  }
LAB_01606d50:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

