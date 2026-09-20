// presentThemeFilterPrompt @ 01722ac8

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropLogViewController::presentThemeFilterPrompt(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  char *local_30;
  char *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar1 = local_30;
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filterThemeText_026b3aa8);
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_48 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98,local_48)
      ;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    _objc_setAssociatedObject(local_18,&DAT_028e3f7c,local_30,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_themeFilterPromptCancel__026b3b40);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_themeFilterPromptOK__026b3b48);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

