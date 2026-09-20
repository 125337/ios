// FUN_019dc784 @ 019dc784

void FUN_019dc784(void)

{
  char *pcVar1;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38 [3];
  char *local_20;
  char *local_18;
  
  local_18 = (char *)0x0;
  pcVar1 = "SettingUtil";
  _objc_getClass();
  local_20 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalInfo_026bb030);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getLocalInfo_026bb030);
      _objc_retainAutoreleasedReturnValue();
      local_38[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiGlobalFontLevel_026a3898);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_38[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_m_uiGlobalFontLevel_026a3898);
        local_18 = pcVar1;
      }
      _objc_storeStrong(local_38,0);
    }
  }
  pcVar1 = "UIFont";
  _objc_getClass();
  local_40 = pcVar1;
  if ((local_18 != (char *)0x0) && (pcVar1 != (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setAppFontSize__026bb038);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAppFontSize__026bb038,local_18);
    }
  }
  pcVar1 = "MMTextWidth";
  _objc_getClass();
  local_48 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_clear_026a3870);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_clear_026a3870);
    }
  }
  pcVar1 = "CAppViewControllerManager";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getAppViewControllerManager_026a3848)
    ;
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getAppViewControllerManager_026a3848);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_refreshLanguage__026a3850);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refreshLanguage__026a3850,3);
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  return;
}

