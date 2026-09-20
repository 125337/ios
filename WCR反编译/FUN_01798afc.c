// FUN_01798afc @ 01798afc

byte FUN_01798afc(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_88 [2];
  char *local_78;
  char *local_70;
  char *local_68 [2];
  char *local_58 [3];
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
    if (DAT_028e40a0 == (char *)0x0) {
      pcVar2 = "MicroMessengerAppDelegate";
      _objc_getClass();
      DAT_028e40a0 = pcVar2;
    }
    pcVar2 = DAT_028e40a0;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_GlobalInstance_0269d648);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      local_58[0] = (char *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_valueForKey__0269d128,&cf_m_appViewControllerMgr);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58[0];
      local_58[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if ((local_58[0] == (char *)0x0) ||
         (pcVar2 = local_58[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58[0],PTR_s_respondsToSelector__026ca818,
                    PTR_s_getNewMainFrameViewController_0269d650), ((ulong)pcVar2 & 1) == 0)) {
        local_21 = 0;
        local_34 = 1;
      }
      else {
        pcVar2 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_getNewMainFrameViewController_0269d650);
        _objc_retainAutoreleasedReturnValue();
        local_68[0] = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = pcVar2;
        if (pcVar2 == (char *)0x0) {
          local_21 = 0;
          local_34 = 1;
        }
        else {
          local_78 = (char *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_valueForKey__0269d128,&cf_m_mainFrameLogicController);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_78;
          local_78 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          if ((local_78 == (char *)0x0) ||
             (pcVar2 = local_78,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_78,PTR_s_respondsToSelector__026ca818,
                        PTR_s_getSessionInfoByContact__0269d658), ((ulong)pcVar2 & 1) == 0)) {
            local_21 = 0;
            local_34 = 1;
          }
          else {
            pcVar2 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_getSessionInfoByContact__0269d658,local_30);
            _objc_retainAutoreleasedReturnValue();
            local_88[0] = pcVar2;
            if (pcVar2 == (char *)0x0) {
              local_21 = 0;
            }
            else {
              pcVar2 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_respondsToSelector__026ca818,
                         PTR_s_openMessageContentView_startSend_0269d660);
              if (((ulong)pcVar2 & 1) == 0) {
                local_21 = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_70,PTR_s_openMessageContentView_startSend_0269d660,local_88[0],0,0,
                           1,0);
                local_21 = 1;
              }
            }
            local_34 = 1;
            _objc_storeStrong(local_88,0);
          }
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(local_68,0);
      }
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

