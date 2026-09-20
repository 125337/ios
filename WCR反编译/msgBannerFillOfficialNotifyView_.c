// msgBannerFillOfficialNotifyView: @ 01ba194c

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageBannerBeautifyViewController::msgBannerFillOfficialNotifyView_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    pcVar1 = "QuickReplyNotifyItem";
    _objc_getClass();
    local_38 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_2c = 1;
    }
    else {
      FUN_01ba1d98();
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      FUN_01ba1da4();
      _objc_retainAutoreleasedReturnValue();
      local_50 = (char *)0x0;
      local_58 = (char *)0x0;
      pcVar2 = "CContactMgr";
      local_48 = pcVar1;
      _objc_getClass();
      FUN_01b91608();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar2;
      if (pcVar2 != (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_58;
          local_58 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      if (local_58 != (char *)0x0) {
        local_68 = (char *)0x0;
        pcVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160)
        ;
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getContactDisplayName_0269d160);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_68;
          local_68 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        pcVar2 = local_68;
        FUN_01b92980();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_68;
        local_68 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (pcVar1 != (char *)0x0) {
          _objc_storeStrong(pcVar1,&local_40,local_68);
        }
        pcVar2 = local_58;
        FUN_01b92aa4();
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_50;
        local_50 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        _objc_storeStrong(&local_68,0);
      }
      pcVar1 = local_38;
      _objc_alloc_init();
      local_70 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle__0269cef0);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTitle__0269cef0,local_40);
      }
      pcVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setDesc__026a5a78);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDesc__026a5a78,local_48);
      }
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (pcVar1 != (char *)0x0) {
        pcVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setUsername__026a2510);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setUsername__026a2510,local_50);
        }
      }
      if (local_58 != (char *)0x0) {
        pcVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setContact__026b07c0);
        if (((ulong)pcVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setContact__026b07c0,local_58);
        }
      }
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_updateWithItem__026c01f8);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateWithItem__026c01f8,local_70);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

