// FUN_015fe0c0 @ 015fe0c0

byte FUN_015fe0c0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_80 [2];
  cfstringStruct *local_70;
  char *local_68;
  char *local_60 [4];
  cfstringStruct *local_40;
  char *local_38;
  int local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_015fe560;
  }
  uVar1 = local_20;
  FUN_01606b74();
  if ((uVar1 & 1) != 0) {
    local_11 = 1;
    local_2c = 1;
    goto LAB_015fe560;
  }
  pcVar2 = "ChatBoxMgr";
  _objc_getClass();
  FUN_015f9a60();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_isContactInChatBox_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_40 = pcVar3;
  if (((local_38 == (char *)0x0) ||
      (pcVar2 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar3),
      ((ulong)pcVar2 & 1) == 0)) ||
     (pcVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_20),
     ((ulong)pcVar2 & 1) == 0)) {
    uVar1 = local_28;
    pcVar3 = &cf_isChatBoxContact;
    _NSSelectorFromString(&cf_isChatBoxContact);
    FUN_016054b4(uVar1,pcVar3);
    if ((uVar1 & 1) == 0) {
      pcVar2 = DAT_028e3c00;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3c00,PTR_s_objectForKeyedSubscript__0269d098,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = pcVar2;
      if ((pcVar2 == (char *)0x0) && (DAT_028e3c00 == (char *)0x0)) {
        pcVar2 = "MMNewSessionMgr";
        _objc_getClass();
        FUN_015f9a60();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = &cf_GetSessionByUserName_;
        local_68 = pcVar2;
        _NSSelectorFromString();
        local_70 = pcVar3;
        if ((local_68 != (char *)0x0) &&
           (pcVar2 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar3)
           , ((ulong)pcVar2 & 1) != 0)) {
          pcVar4 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_20);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_60[0];
          local_60[0] = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        _objc_storeStrong(&local_68,0);
      }
      if (local_60[0] == (char *)0x0) {
LAB_015fe524:
        local_11 = 0;
        local_2c = 1;
      }
      else {
        pcVar2 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60[0],PTR_s_valueForKey__0269d128,&cf_m_isFolding);
        _objc_retainAutoreleasedReturnValue();
        local_80[0] = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
        if ((((ulong)pcVar2 & 1) == 0) ||
           (pcVar2 = local_80[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_boolValue_026ca540),
           ((ulong)pcVar2 & 1) == 0)) {
          local_2c = 0;
        }
        else {
          local_11 = 1;
          local_2c = 1;
        }
        _objc_storeStrong(local_80,0);
        if (local_2c == 0) goto LAB_015fe524;
      }
      _objc_storeStrong(local_60,0);
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
  }
  else {
    local_11 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_015fe560:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

