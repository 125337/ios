// openFontSizeSetting @ 019dc2f8

/* Function Stack Size: 0x10 bytes */

void WCRefineFontBeautifyViewController::openFontSizeSetting(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_88;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  cfstringStruct *local_38;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "NewSettingFontSizeViewController";
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRHr_gN_ecW_SO_Y_n_
              );
  }
  else {
    _objc_alloc_init();
    local_30 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf_W_SO_Y_;
    pcVar1 = "MMContext";
    _objc_getClass();
    local_40 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = "MMLanguageMgr";
      local_48 = pcVar2;
      _objc_getClass();
      local_50 = pcVar1;
      if ((local_48 != (char *)0x0) && (pcVar1 != (char *)0x0)) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768
                  );
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_getStringForCurLanguage__0269f768,&cf_Setting_FontSize_Title);
          _objc_retainAutoreleasedReturnValue();
          local_60 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
          if (pcVar1 != (char *)0x0) {
            _objc_storeStrong(pcVar1,&local_38,local_60);
          }
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTitle__0269cef0,local_38);
    local_88 = "MMUINavigationController";
    _objc_getClass();
    if (local_88 == (char *)0x0) {
      local_88 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_68 = local_88;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_88,1);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

