// FUN_005c0694 @ 005c0694

void FUN_005c0694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  long local_28;
  ulong local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = "CMessageWrap";
  _objc_getClass();
  local_30 = pcVar2;
  if (((local_28 == 0) || (pcVar2 == (char *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithMsgType__0269d3f8),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (char *)0x0;
    local_40 = 1;
  }
  else {
    pcVar2 = local_30;
    _objc_alloc();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithMsgType__0269d3f8,0x31);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((local_48 == (char *)0x0) ||
       (pcVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setFinderShareItem__026a59a0),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFinderShareItem__026a59a0,local_28);
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiAppMsgInnerType__0269d400)
      ;
      pcVar2 = local_48;
      puVar1 = PTR_s_setM_uiAppMsgInnerType__0269d400;
      if (((ulong)pcVar3 & 1) != 0) {
        uVar4 = local_20;
        FUN_005c1204();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1,uVar4 & 0xffffffff);
      }
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsTitle__026a59a8);
      pcVar2 = local_48;
      puVar1 = PTR_s_setM_nsTitle__026a59a8;
      if (((ulong)pcVar3 & 1) != 0) {
        FUN_005c13a0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsAppMediaUrl__026a59b0);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setM_nsAppMediaUrl__026a59b0,
                   &cf_https___support_weixin_qq_com_update_);
      }
      FUN_005c0adc(local_48);
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateContent__026a59b8);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_UpdateContent__026a59b8,0);
      }
      pcVar2 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

