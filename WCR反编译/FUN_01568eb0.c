// FUN_01568eb0 @ 01568eb0

byte FUN_01568eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  char *local_90;
  undefined *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  char *local_48;
  undefined *local_40;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_01569444;
  }
  pcVar4 = "CAppViewControllerManager";
  _objc_getClass();
  local_40 = PTR_s_getAppViewControllerManager_026a3848;
  local_48 = (char *)0x0;
  local_38 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getAppViewControllerManager_026a3848);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_48;
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)();
  }
  if (local_48 == (char *)0x0) {
LAB_015691f0:
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "MMServiceCenter";
    local_70 = pcVar4;
    _objc_getClass();
    FUN_01533df4();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "MMMsgLogicManager";
    local_78 = pcVar5;
    _objc_getClass();
    local_88 = PTR_s_getService__0269d170;
    local_90 = (char *)0x0;
    local_80 = pcVar4;
    if (((local_78 != (char *)0x0) && (pcVar4 != (char *)0x0)) &&
       (pcVar4 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,local_88,local_80);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_90;
      local_90 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    puVar2 = PTR_s_PushLogicControllerByContact_nav_026ac858;
    if ((local_90 == (char *)0x0) || (local_70 == (char *)0x0)) {
LAB_015693ec:
      local_11 = 0;
    }
    else {
      pcVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PushLogicControllerByContact_nav_026ac858);
      puVar1 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_respondsToSelector__026ca818,
                   PTR_s_PushOtherBaseMsgControllerByCont_0269d640);
        if (((ulong)pcVar4 & 1) == 0) goto LAB_015693ec;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,puVar1,local_20,local_70,1);
        if (local_28 != 0) {
          (**(code **)(local_28 + 0x10))();
        }
        local_11 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_90,puVar2,local_20,local_70,1,0);
        if (local_28 != 0) {
          (**(code **)(local_28 + 0x10))();
        }
        local_11 = 1;
      }
    }
    local_2c = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  else {
    local_50 = PTR_s_newMessageByContact_msgWrapToAdd_026ac838;
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,
               PTR_s_newMessageByContact_msgWrapToAdd_026ac838);
    if (((ulong)pcVar4 & 1) == 0) {
      local_58 = PTR_s_newMessageByContact_msgWrapToAdd_026ac840;
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,
                 PTR_s_newMessageByContact_msgWrapToAdd_026ac840);
      if (((ulong)pcVar4 & 1) == 0) {
        local_60 = PTR_s_newMessageByContact_msgWrapToAdd_026ac848;
        pcVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,
                   PTR_s_newMessageByContact_msgWrapToAdd_026ac848);
        lVar3 = local_20;
        pcVar4 = local_48;
        puVar2 = local_60;
        if (((ulong)pcVar5 & 1) == 0) {
          local_68 = PTR_s_jumpToChat_msgToLocate__026ac850;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,
                     PTR_s_jumpToChat_msgToLocate__026ac850);
          if (((ulong)pcVar4 & 1) == 0) goto LAB_015691f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,local_68,local_20,0);
          if (local_28 != 0) {
            (**(code **)(local_28 + 0x10))();
          }
          local_11 = 1;
          local_2c = 1;
        }
        else {
          lVar6 = local_28;
          _objc_retainBlock();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar2,lVar3,0,1,1,0,0,lVar6);
          (*(code *)PTR__objc_release_02578630)(lVar6);
          local_11 = 1;
          local_2c = 1;
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,local_58,local_20,0,1,1);
        if (local_28 != 0) {
          (**(code **)(local_28 + 0x10))();
        }
        local_11 = 1;
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_20,0,1);
      if (local_28 != 0) {
        (**(code **)(local_28 + 0x10))();
      }
      local_11 = 1;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_48,0);
LAB_01569444:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

