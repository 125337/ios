// FUN_0012abb4 @ 0012abb4

void FUN_0012abb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  byte local_3d;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_0012b13c();
  _objc_retainAutoreleasedReturnValue();
  local_3d = 0;
  puVar2 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_isChatRoomUserName__0269eff8,uVar1);
  if (((ulong)puVar2 & 1) != 0) {
    local_48 = 0;
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getContactFromDB__0269f000);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getContactFromDB__0269f000,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_3d = local_48 == 0;
    _objc_storeStrong(&local_48,0);
  }
  if (DAT_028c8620 != (code *)0x0) {
    (*DAT_028c8620)(local_18,local_20,local_28);
  }
  if ((local_3d & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomMuteHelper_026ce2f0,
               PTR_s_scheduleAutoMuteForNewChatRoom__0269efe8,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomMuteHelper_026ce2f0,
               PTR_s_scheduleAutoAddContactsForNewCha_0269eff0,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

