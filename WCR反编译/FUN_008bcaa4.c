// FUN_008bcaa4 @ 008bcaa4

void FUN_008bcaa4(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  char *local_40;
  undefined4 local_38;
  char *local_28;
  ulong local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_38 = 1;
  }
  else {
    local_40 = (char *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithMsgType__0269d3f8);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_28;
      _objc_alloc();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithMsgType__0269d3f8,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_40 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setM_uiMessageType__026a9af0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setM_nsContent__0269ef88,&cf__);
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFromUsr_0269d088);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setM_nsFromUsr__0269d408);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsToUsr_0269d090);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsToUsr_0269d090);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setM_nsToUsr__0269d410);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      pcVar1 = local_40;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(pcVar1,&DAT_028ce018,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      pcVar1 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

