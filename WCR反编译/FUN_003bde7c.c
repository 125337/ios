// FUN_003bde7c @ 003bde7c

byte FUN_003bde7c(undefined8 param_1,byte param_2)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_30;
  undefined4 local_28;
  byte local_21;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_21 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_28 = 1;
  }
  else {
    pcVar2 = "ChatBoxMgr";
    _objc_getClass();
    FUN_00392f1c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_onChangeChatRoomBox_inChatBox_;
    local_30 = pcVar2;
    _NSSelectorFromString();
    if ((local_30 == (char *)0x0) ||
       (pcVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3),
       ((ulong)pcVar2 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar3,local_20,local_21 & 1);
      pcVar3 = &cf_updateChatBoxSession;
      _NSSelectorFromString();
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar3);
      }
      local_11 = 1;
    }
    local_28 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

