// shouldSendYuanbaoAssistForUsername: @ 0111f034

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::shouldSendYuanbaoAssistForUsername_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ulong local_48;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = DAT_028e3544;
  local_34 = DAT_028e3544;
  if ((DAT_028e3544 >> 10 & 1) == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else if ((DAT_028e3544 & 0x140) == 0) {
    uVar1 = local_30;
    FUN_0110d24c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_11 = 0;
    }
    else {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,&cf_wxid_wi_1d142z0zdj03);
      if ((uVar1 & 1) == 0) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_shouldConcealUsername__0269fef8,&cf_wxid_wi_1d142z0zdj03);
        if ((IVar2 & 1) == 0) {
          IVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_shouldConcealUsername__0269fef8,local_48);
          local_11 = (byte)IVar2 & 1;
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 0;
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_11 = 0;
    local_3c = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

