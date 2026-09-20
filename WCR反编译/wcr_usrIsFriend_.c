// wcr_usrIsFriend: @ 01dd3e64

/* Function Stack Size: 0x18 bytes */

bool WCRefineSessionStatsViewController::wcr_usrIsFriend_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    local_48 = (char *)0x0;
    pcVar2 = "CContactMgr";
    _objc_getClass();
    pcVar3 = "MMContext";
    local_50 = pcVar2;
    _objc_getClass();
    local_58 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentContext_0269d5f8);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar2;
        if (pcVar2 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar3 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_50);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_48;
            local_48 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
        }
        _objc_storeStrong(&local_60,0);
      }
    }
    local_68 = (char *)0x0;
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getContactByName__0269d178,local_38);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_68;
        local_68 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    pcVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_isMyContact_0269ef80);
    if (((ulong)pcVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isMyContact_0269ef80);
      local_11 = (byte)pcVar2 & 1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

