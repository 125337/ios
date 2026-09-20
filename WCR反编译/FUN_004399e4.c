// FUN_004399e4 @ 004399e4

void FUN_004399e4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  long local_50;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  undefined8 local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "ForwardMessageLogicController";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_new_0269d288);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_40 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDelegate__026ca910,local_20);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiIDKeyScene__026a3a48);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setM_uiIDKeyScene__026a3a48,2);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setEMultiForwardType__026a3a50);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEMultiForwardType__026a3a50,1);
      }
      lVar2 = local_20;
      FUN_00436dfc(local_20,"m_nsChatUserName");
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar2;
      if (lVar2 != 0) {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setFromContactUserName__026a3a58);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setFromContactUserName__026a3a58,local_50);
        }
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setM_forwardType__026a3a60);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setM_forwardType__026a3a60,2);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTitle__0269cef0,0);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_40 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

