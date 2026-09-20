// mainFrameViewController @ 0016809c

/* Function Stack Size: 0x10 bytes */

ID WCRefineClearSessionHook::mainFrameViewController(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_40;
  char *local_38;
  char *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  pcVar1 = "MicroMessengerAppDelegate";
  local_28 = param_2;
  local_20 = param_1;
  _objc_getClass();
  local_30 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GlobalInstance_0269d648),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_GlobalInstance_0269d648);
    _objc_retainAutoreleasedReturnValue();
    local_40 = (char *)0x0;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_valueForKey__0269d128,&cf_m_appViewControllerMgr);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if ((local_40 == (char *)0x0) ||
       (pcVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,
                  PTR_s_getNewMainFrameViewController_0269d650), ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getNewMainFrameViewController_0269d650);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

