// _WCRLayoutSizeRefreshWeChatUI @ 00432028

void _WCRLayoutSizeRefreshWeChatUI(void)

{
  char *pcVar1;
  char *pcVar2;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_28;
  
  pcVar1 = "MMContext";
  _objc_getClass();
  pcVar2 = "MMLanguageMgr";
  local_28 = pcVar1;
  _objc_getClass();
  local_40 = pcVar2;
  if ((local_28 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
    local_48 = (char *)0x0;
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if ((local_48 != (char *)0x0) &&
       (pcVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar1;
      if ((pcVar1 != (char *)0x0) &&
         (((*(code *)PTR__objc_msgSend_02578628)
                     (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCurLanguage_026a3830),
          ((ulong)pcVar1 & 1) != 0 &&
          (pcVar1 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,
                     PTR_s_setCurLanguage_shouldChangeMainF_026a3838), ((ulong)pcVar1 & 1) != 0))))
      {
        pcVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getCurLanguage_026a3830);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setCurLanguage_shouldChangeMainF_026a3838,pcVar1,0);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  pcVar1 = "MMContext";
  _objc_getClass();
  local_60 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = "TranslateSnsMgr";
      _objc_getClass();
      local_70 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getService__0269d170,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar2;
        if ((pcVar2 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,
                       PTR_s_changeLanguageAndCleanAllCache_026a3840), ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_changeLanguageAndCleanAllCache_026a3840);
        }
        _objc_storeStrong(&local_78,0);
      }
      pcVar1 = "TranslateMsgMgr";
      _objc_getClass();
      local_80 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getService__0269d170,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar2;
        if ((pcVar2 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,
                       PTR_s_changeLanguageAndCleanAllCache_026a3840), ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_changeLanguageAndCleanAllCache_026a3840);
        }
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(&local_68,0);
  }
  FUN_00431fb0();
  pcVar1 = "CAppViewControllerManager";
  _objc_getClass();
  if ((pcVar1 != (char *)0x0) &&
     (local_90 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getAppViewControllerManager_026a3848
               ), ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_getAppViewControllerManager_026a3848);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_refreshLanguage__026a3850),
       ((ulong)pcVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_refreshLanguage__026a3850,3);
    }
    _objc_storeStrong(&local_98,0);
  }
  return;
}

