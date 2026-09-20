// FUN_01a3079c @ 01a3079c

byte FUN_01a3079c(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    pcVar3 = "CContactMgr";
    local_30 = pcVar2;
    _objc_getClass();
    local_38 = pcVar3;
    if ((local_30 == (char *)0x0) || (pcVar3 == (char *)0x0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar2;
        if ((pcVar2 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
           ((ulong)pcVar2 & 1) == 0)) {
          local_11 = 0;
          local_24 = 1;
        }
        else {
          pcVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_getContactByName__0269d178,&cf_34858176233_chatroom);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar2;
          if (pcVar2 == (char *)0x0) {
            local_11 = 0;
          }
          else {
            pcVar4 = &cf_isChatRoomDismissed;
            _NSSelectorFromString();
            pcVar2 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_respondsToSelector__026ca818,pcVar4);
            if ((((ulong)pcVar2 & 1) == 0) ||
               (pcVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar4),
               ((ulong)pcVar2 & 1) == 0)) {
              pcVar4 = &cf_IsUserInChatRoom_;
              _NSSelectorFromString();
              pcVar2 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_respondsToSelector__026ca818,pcVar4);
              if (((ulong)pcVar2 & 1) == 0) {
                local_11 = 0;
              }
              else {
                pcVar2 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar4,local_20);
                local_11 = (byte)pcVar2 & 1;
              }
            }
            else {
              local_11 = 0;
            }
          }
          local_24 = 1;
          _objc_storeStrong(&local_50,0);
        }
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

