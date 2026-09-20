// FUN_0003393c @ 0003393c

byte FUN_0003393c(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_a0;
  undefined *local_98;
  char *local_88 [2];
  char *local_78 [2];
  char *local_68 [4];
  char *local_48;
  char *local_40;
  undefined4 local_34;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    local_40 = (char *)0x0;
    pcVar2 = "MicroMessengerAppDelegate";
    _objc_getClass();
    local_48 = pcVar2;
    if ((pcVar2 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GlobalInstance_0269d648),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_GlobalInstance_0269d648);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_40 == (char *)0x0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      local_68[0] = (char *)0x0;
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_valueForKey__0269d128,&cf_m_appViewControllerMgr);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_68[0];
      local_68[0] = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if ((local_68[0] == (char *)0x0) ||
         (pcVar2 = local_68[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68[0],PTR_s_respondsToSelector__026ca818,
                    PTR_s_getNewMainFrameViewController_0269d650), ((ulong)pcVar2 & 1) == 0)) {
        local_21 = 0;
        local_34 = 1;
      }
      else {
        local_78[0] = (char *)0x0;
        pcVar3 = local_68[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68[0],PTR_s_getNewMainFrameViewController_0269d650);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_78[0];
        local_78[0] = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (local_78[0] == (char *)0x0) {
          local_21 = 0;
          local_34 = 1;
        }
        else {
          local_88[0] = (char *)0x0;
          pcVar3 = local_78[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78[0],PTR_s_valueForKey__0269d128,&cf_m_mainFrameLogicController);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_88[0];
          local_88[0] = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_98 = PTR_s_getSessionInfoByContact__0269d658;
          if ((local_88[0] == (char *)0x0) ||
             (pcVar2 = local_88[0],
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_88[0],PTR_s_respondsToSelector__026ca818,
                        PTR_s_getSessionInfoByContact__0269d658), ((ulong)pcVar2 & 1) == 0)) {
            local_21 = 0;
            local_34 = 1;
          }
          else {
            local_a0 = (char *)0x0;
            pcVar3 = local_88[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_88[0],local_98,local_30);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_a0;
            local_a0 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            puVar1 = PTR_s_openMessageContentView_startSend_0269d660;
            if (local_a0 == (char *)0x0) {
              local_21 = 0;
            }
            else {
              pcVar2 = local_78[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_78[0],PTR_s_respondsToSelector__026ca818,
                         PTR_s_openMessageContentView_startSend_0269d660);
              if (((ulong)pcVar2 & 1) == 0) {
                local_21 = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_78[0],puVar1,local_a0,0,0,1,0);
                local_21 = 1;
              }
            }
            local_34 = 1;
            _objc_storeStrong(&local_a0,0);
          }
          _objc_storeStrong(local_88,0);
        }
        _objc_storeStrong(local_78,0);
      }
      _objc_storeStrong(local_68,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

