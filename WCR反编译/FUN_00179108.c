// FUN_00179108 @ 00179108

void FUN_00179108(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0017972c();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setM_bShowChatRoomFriendCount__0269f9b0,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

