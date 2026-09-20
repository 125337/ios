// wcrRepo_openChatSession:nav: @ 01bb3eb0

/* Function Stack Size: 0x20 bytes */

bool WCRefineMessageRepositoryViewController::wcrRepo_openChatSession_nav_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_78;
  char *local_70;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_38 == 0)) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      pcVar3 = "CContactMgr";
      _objc_getClass();
      pcVar4 = local_50;
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        local_11 = 0;
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getContactByName__0269d178,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          local_11 = 0;
          local_3c = 1;
        }
        else {
          pcVar3 = "MMMsgLogicManager";
          _objc_getClass();
          pcVar4 = local_50;
          local_70 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
          local_78 = pcVar4;
          if ((pcVar4 == (char *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar4,PTR_s_respondsToSelector__026ca818,
                         PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar4 & 1) == 0)
             ) {
            local_11 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,puVar1,local_68,local_38,1);
            local_11 = 1;
          }
          local_3c = 1;
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

