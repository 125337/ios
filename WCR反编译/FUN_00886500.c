// FUN_00886500 @ 00886500

void FUN_00886500(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_38;
  undefined4 local_2c;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "MicroMessengerAppDelegate";
  _objc_getClass();
  local_20 = pcVar2;
  if ((pcVar2 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GlobalInstance_0269d648),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GlobalInstance_0269d648);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_2c = 1;
    }
    else {
      local_38 = (char *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_valueForKey__0269d128,&cf_m_appViewControllerMgr);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_38;
      local_38 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if ((local_38 == (char *)0x0) ||
         (pcVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_respondsToSelector__026ca818,
                    PTR_s_getNewMainFrameViewController_0269d650), ((ulong)pcVar2 & 1) == 0)) {
        local_18 = (char *)0x0;
      }
      else {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getNewMainFrameViewController_0269d650)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

