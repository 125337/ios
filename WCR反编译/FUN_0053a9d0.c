// FUN_0053a9d0 @ 0053a9d0

byte FUN_0053a9d0(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    pcVar3 = "CContactMgr";
    local_48 = pcVar2;
    _objc_getClass();
    local_58 = (char *)0x0;
    local_50 = pcVar3;
    if ((local_48 != (char *)0x0) && (pcVar3 != (char *)0x0)) {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = (char *)0x0;
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getService__0269d170,local_50);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_68;
        local_68 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      if ((local_68 != (char *)0x0) &&
         (pcVar2 = local_68,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getContactByName__0269d178,local_30);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    if (local_58 == (char *)0x0) {
      local_21 = 0;
      local_40 = 1;
    }
    else {
      pcVar2 = "WCListViewController";
      _objc_getClass();
      local_70 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_21 = 0;
        local_40 = 1;
      }
      else {
        FUN_0053af1c();
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_21 = 0;
          local_40 = 1;
        }
        else {
          pcVar2 = local_70;
          _objc_alloc_init();
          local_21 = pcVar2 != (char *)0x0;
          local_80 = pcVar2;
          if ((bool)local_21) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_setValue_forKey__0269d300,local_58,&cf_m_contact);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_pushViewController_animated__0269d590,local_80,1);
          }
          local_40 = 1;
          _objc_storeStrong(&local_80,0);
        }
        _objc_storeStrong(&local_78,0);
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

