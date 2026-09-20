// FUN_016045ac @ 016045ac

byte FUN_016045ac(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_88;
  undefined *local_80;
  char *local_70;
  char *local_68 [2];
  char *local_58 [4];
  char *local_38;
  char *local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    local_30 = (char *)0x0;
    pcVar2 = "MicroMessengerAppDelegate";
    _objc_getClass();
    local_38 = pcVar2;
    if ((pcVar2 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GlobalInstance_0269d648),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_GlobalInstance_0269d648);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_30 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_30 == (char *)0x0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      local_58[0] = (char *)0x0;
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_m_appViewControllerMgr);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58[0];
      local_58[0] = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if ((local_58[0] == (char *)0x0) ||
         (pcVar2 = local_58[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58[0],PTR_s_respondsToSelector__026ca818,
                    PTR_s_getNewMainFrameViewController_0269d650), ((ulong)pcVar2 & 1) == 0)) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        pcVar2 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_getNewMainFrameViewController_0269d650);
        _objc_retainAutoreleasedReturnValue();
        local_68[0] = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_11 = 0;
          local_24 = 1;
        }
        else {
          local_70 = (char *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_valueForKey__0269d128,&cf_m_mainFrameLogicController);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_70;
          local_70 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_80 = PTR_s_getSessionInfoByContact__0269d658;
          if ((local_70 == (char *)0x0) ||
             (pcVar2 = local_70,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_70,PTR_s_respondsToSelector__026ca818,
                        PTR_s_getSessionInfoByContact__0269d658), ((ulong)pcVar2 & 1) == 0)) {
            local_11 = 0;
            local_24 = 1;
          }
          else {
            pcVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,local_80,local_20);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_s_openMessageContentView_startSend_0269d660;
            local_88 = pcVar2;
            if (pcVar2 == (char *)0x0) {
              local_11 = 0;
            }
            else {
              pcVar2 = local_68[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68[0],PTR_s_respondsToSelector__026ca818,
                         PTR_s_openMessageContentView_startSend_0269d660);
              if (((ulong)pcVar2 & 1) == 0) {
                local_11 = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_68[0],puVar1,local_88,0,0,1,0);
                local_11 = 1;
              }
            }
            local_24 = 1;
            _objc_storeStrong(&local_88,0);
          }
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(local_68,0);
      }
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

