// FUN_0012a8cc @ 0012a8cc

byte FUN_0012a8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 byte param_5,byte param_6)

{
  long lVar1;
  ulong uVar2;
  uint local_a8;
  byte local_45;
  long local_38;
  byte local_2e;
  byte local_2d;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  local_2e = param_6;
  local_2d = param_5;
  local_2c = param_4;
  FUN_0012b13c();
  _objc_retainAutoreleasedReturnValue();
  local_45 = 0;
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_isInContactList__0269efe0);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isInContactList__0269efe0,local_38);
      local_45 = (byte)uVar2;
    }
  }
  if (DAT_028c8618 == (code *)0x0) {
    local_a8 = 0;
  }
  else {
    uVar2 = local_18;
    (*DAT_028c8618)(local_18,local_20,local_28,local_2c,local_2d & 1,local_2e & 1);
    local_a8 = (uint)uVar2;
  }
  if (((local_a8 & 1) != 0) && ((local_45 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomMuteHelper_026ce2f0,
               PTR_s_scheduleAutoMuteForNewChatRoom__0269efe8,local_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomMuteHelper_026ce2f0,
               PTR_s_scheduleAutoAddContactsForNewCha_0269eff0,local_38);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (byte)local_a8 & 1;
}

