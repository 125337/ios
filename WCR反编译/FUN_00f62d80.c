// FUN_00f62d80 @ 00f62d80

byte FUN_00f62d80(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_70;
  char *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  char *local_40;
  undefined *local_38;
  char *local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_00f63198;
  }
  pcVar3 = "CAppViewControllerManager";
  _objc_getClass();
  local_38 = PTR_s_getAppViewControllerManager_026a3848;
  local_40 = (char *)0x0;
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getAppViewControllerManager_026a3848);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    local_40 = pcVar4;
    (*(code *)PTR__objc_release_02578630)();
  }
  if (local_40 == (char *)0x0) {
LAB_00f63020:
    FUN_00f631b8();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "MMMsgLogicManager";
    local_68 = pcVar3;
    _objc_getClass();
    FUN_00f62930();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_PushLogicControllerByContact_nav_026ac858;
    local_70 = pcVar4;
    if ((pcVar4 == (char *)0x0) || (local_68 == (char *)0x0)) {
LAB_00f6314c:
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PushLogicControllerByContact_nav_026ac858);
      puVar1 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,
                   PTR_s_PushOtherBaseMsgControllerByCont_0269d640);
        if (((ulong)pcVar3 & 1) == 0) goto LAB_00f6314c;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,puVar1,local_20,local_68,1);
        local_11 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,puVar2,local_20,local_68,1,0);
        local_11 = 1;
      }
    }
    local_24 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  else {
    local_48 = PTR_s_newMessageByContact_msgWrapToAdd_026ac838;
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,
               PTR_s_newMessageByContact_msgWrapToAdd_026ac838);
    if (((ulong)pcVar3 & 1) == 0) {
      local_50 = PTR_s_newMessageByContact_msgWrapToAdd_026ac840;
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,
                 PTR_s_newMessageByContact_msgWrapToAdd_026ac840);
      if (((ulong)pcVar3 & 1) == 0) {
        local_58 = PTR_s_newMessageByContact_msgWrapToAdd_026ac848;
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,
                   PTR_s_newMessageByContact_msgWrapToAdd_026ac848);
        if (((ulong)pcVar3 & 1) == 0) {
          local_60 = PTR_s_jumpToChat_msgToLocate__026ac850;
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,
                     PTR_s_jumpToChat_msgToLocate__026ac850);
          if (((ulong)pcVar3 & 1) == 0) goto LAB_00f63020;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,local_60,local_20,0);
          local_11 = 1;
          local_24 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,local_58,local_20,0,1,1,0,0,0);
          local_11 = 1;
          local_24 = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,local_50,local_20,0,1,1);
        local_11 = 1;
        local_24 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,local_20,0,1);
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_40,0);
LAB_00f63198:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

