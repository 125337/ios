// FUN_00164bf4 @ 00164bf4

byte FUN_00164bf4(undefined8 param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char *local_48;
  char *local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_28 == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0015f0b8();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setChatRoomTopMsgLocalRevokeWith_0269f798), ((ulong)pcVar2 & 1) == 0)) {
      pcVar2 = "CGroupMgr";
      _objc_getClass();
      FUN_0015f0b8();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,
                     PTR_s_setChatRoomTopMsgLocalRevokeWith_0269f798), ((ulong)pcVar2 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setChatRoomTopMsgLocalRevokeWith_0269f798,local_20,local_28);
        local_11 = (byte)pcVar2 & 1;
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setChatRoomTopMsgLocalRevokeWith_0269f798,local_20,local_28);
      local_11 = (byte)pcVar2 & 1;
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

