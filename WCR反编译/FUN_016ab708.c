// FUN_016ab708 @ 016ab708

void FUN_016ab708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  byte local_c4;
  char *local_80;
  undefined4 local_78;
  undefined1 local_72;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  char *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = "ForwardMsgUtil";
  _objc_getClass();
  pcVar2 = &cf_GenForwardMsgFromMsgWrap_ToContact_;
  local_50 = pcVar1;
  _NSSelectorFromString();
  pcVar3 = &cf_imgMsgFromMsgWrap_;
  local_68 = pcVar2;
  _NSSelectorFromString();
  local_c4 = 0;
  local_70 = pcVar3;
  if (local_48 != 0) {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_68);
    local_c4 = (byte)pcVar1;
  }
  local_71 = local_c4 & 1;
  pcVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_70);
  local_72 = SUB81(pcVar1,0);
  if (((local_30 == 0) || (local_50 == (char *)0x0)) ||
     (((local_71 & 1) == 0 && (((ulong)pcVar1 & 1) == 0)))) {
    local_28 = (char *)0x0;
    local_78 = 1;
  }
  else {
    local_80 = (char *)0x0;
    if ((local_71 & 1) == 0) {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_70,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    else {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_68,local_30,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_80;
      local_80 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if ((local_80 == (char *)0x0) ||
       (pcVar1 = local_80,
       (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_m_uiMessageType_0269d0a8),
       (int)pcVar1 != 3)) {
      local_28 = (char *)0x0;
    }
    else {
      FUN_016ad650(0,local_30,local_80);
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_eraseGroupInfo_026a4188);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setGroupInfo__026a4178);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setGroupInfo__026a4178,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_eraseGroupInfo_026a4188);
      }
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setM_sequenceId__026b2ba8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_sequenceId__026b2ba8,0);
      }
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setM_mergeCount__026b2bb0);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setM_mergeCount__026b2bb0,0);
      }
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_UpdateContent__026a59b8);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_UpdateContent__026a59b8,0);
      }
      FUN_016abc9c(local_80,local_38,local_40);
      pcVar1 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
    local_78 = 1;
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

