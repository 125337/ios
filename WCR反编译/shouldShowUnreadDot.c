// shouldShowUnreadDot @ 0111fc64

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::shouldShowUnreadDot(ID param_1,SEL param_2)

{
  ID IVar1;
  ulong uVar2;
  undefined1 local_11;
  
  IVar1 = param_1;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((IVar1 & 1) == 0) {
    if ((DAT_028e3544 & 0x881) == 0x881) {
      FUN_01111cd8(0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (uVar2 == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasUnreadPrivateFriendMessage_026af0d0);
        local_11 = (byte)param_1 & 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  return (uint)local_11;
}

