// FUN_003c2204 @ 003c2204

void FUN_003c2204(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_68;
  char *local_50;
  char *local_48;
  undefined *local_40;
  char *local_38;
  undefined *local_30;
  undefined4 local_24;
  char *local_20;
  char *local_18;
  
  local_18 = (char *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = "ChatBoxMgr";
  _objc_getClass();
  FUN_00392f1c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_24 = 1;
  }
  else {
    local_30 = PTR_s_updateChatBoxSessionDesc_026a2fa8;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_updateChatBoxSessionDesc_026a2fa8);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
    }
    FUN_003c1e90();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_68 = local_18;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_38 == (char *)0x0) {
      local_24 = 1;
    }
    else {
      pcVar2 = local_38;
      FUN_003612b8(local_38,&cf_m_msgWrap);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar2 == (char *)0x0) {
        local_40 = PTR_s_lastMsgForChatBoxSession_026a2fb0;
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,
                   PTR_s_lastMsgForChatBoxSession_026a2fb0);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_48 = pcVar2;
          if (pcVar2 != (char *)0x0) {
            FUN_00367110(local_38,&cf_m_msgWrap,pcVar2);
          }
          _objc_storeStrong(&local_48,0);
        }
      }
      pcVar2 = "MainFrameCellDataManager";
      _objc_getClass();
      FUN_00392f1c();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_updateCellData__026a2fb8;
      local_50 = pcVar2;
      if ((pcVar2 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_updateCellData__026a2fb8),
         ((ulong)pcVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,puVar1,local_38);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_storeStrong(&local_50,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

