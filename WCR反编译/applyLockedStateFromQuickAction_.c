// applyLockedStateFromQuickAction: @ 0111d9b8

/* Function Stack Size: 0x14 bytes */

bool WCRefinePrivateFriendManager::applyLockedStateFromQuickAction_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined1 local_11;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_enabled_0269db80);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLocked_0269db88);
    local_11 = (byte)param_1;
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLocked_0269db88);
    if ((uint)IVar1 != (param_3 & 1)) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLocked__026af088,param_3 & 1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLocked_0269db88);
    local_11 = (byte)param_1;
  }
  local_11 = local_11 & 1;
  return (uint)local_11;
}

